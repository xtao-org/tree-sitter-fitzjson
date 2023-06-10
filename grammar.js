const sep = (item, valsep) => seq(
  repeat(seq(item, optional(valsep))),
)

const entries = $ => sep(
  $.entry,
  $._valsep,
)

const items = $ => sep(
  $.item,
  $._valsep,
)

// prec 3 because Infinity and NaN are valid ids
// todo: perhaps allow +-NaN = NaN
const number = token(prec(3, choice(
  'NaN',
  seq(
    optional(/[+-]/),
    choice(
      /Infinity/,
      /(0|[1-9](_?[0-9])*)(\.[0-9](_?[0-9])*)?([eE][+-]?[0-9](_?[0-9])*)?/,
      /0[bB][01](_?[01])*/,
      /0[oO][0-7](_?[0-7])*/,
      /0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/,
    )
  ),
)))

const id = token(/[$_\p{ID_Start}][$\u200c\u200d\p{ID_Continue}]*/u)

// todo: perhpas reduce/eliminate the use of this
const falias = ($, name, node) => field(name, alias(node, $[name]))

module.exports = grammar({
  name: 'fitzjson',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  // todo: perhaps don't inline
  inline: $ => [$.key],

  externals: $ => [
    $.ms_start,
    $.ms_end,

    // todo: perhaps rename this or otherwise make erroneous results like (top (ERROR (escape_sequence) (error_sentinel))) prettier
    $.error_sentinel,
  ],

  supertypes: $ => [
    $._plainval
  ],

  // hm
  // word: $ => $.id,

  rules: {
    top: $ => choice(
      prec(3, $.value), 
      prec(2, seq(
        optional(seq('|', '{', '}', optional($._plainval), '|')), 
        alias(entries($), $.entries),
      )), 
      prec(1, seq(
        seq('|', '[', ']', optional($._plainval), '|'), 
        alias(items($), $.items),
      )),
    ),
    entry: $ => prec(2, seq(
      falias($, 'decorators', repeat($.decorator)),
      field('disabled', optional($.disabled)), 
      field('key', $.key), 
      falias($, 'pipes', repeat($.pipe)),
      optional(':'),
      field('value', $.value),
    )),

    item: $ => //falias($, 'value', 
      seq(
        falias($, 'decorators', repeat($.decorator)),
        field('disabled', optional($.disabled)), 
        $._plainval, 
        falias($, 'pipes', repeat($.pipe)),
      ),
      //)

    path: $ => seq(
      $.id, 
      repeat1(choice(
        $.dotted, 
        $.parened,
      ))
    ),
    dotted: $ => seq('.', field('id', $.id)),
    parened: $ => seq('(', field('value', choice($.string, $.id, $.number)), ')'),

    decorator: $ => seq('@', optional($.disabled), $._plainval),
    pipe: $ => seq('|', optional($.disabled), $._plainval),
    // _expr: $ => $._plainval,

    key: $ => choice($.string, $.id, $.number),

    // todo?: rename to mvalue? (modified_value, adorned_value)
    value: $ => seq(
      falias($, 'decorators', repeat($.decorator)), 
      $._plainval, 
      falias($, 'pipes', repeat($.pipe))
    ),
    _plainval: $ => field('plainval', choice($._primitive, $.list, $.map, $.id, $.path)),

    id: $ => id,

    list: $ => seq('[', 
      items($),
    ']'),

    map: $ => seq('{', entries($), '}'),

    disabled: $ => '~',

    string: $ => choice($.jsonstring, $.multistring),

    number: $ => number,

    jsonstring: $ => choice(
      '""',
      seq('"', $.string_content, token.immediate('"'))
    ),

    string_content: $ => repeat1(choice(
      // a character is: [\u0020-\u10FFFF] - '"' - '\'
      // in other words: any code point except control characters and '"' and '\'
      // we will express that with a negated character class
      // note: U+0001–U+001F are the control characters
      token.immediate(prec(1, /[^\\"\u0001-\u001F]+/u)),
      $.escape_sequence
    )),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u[0-9a-fA-F]{4})/
    )),

    _valsep: $ => ',',

    _primitive: $ => choice(
      alias('null', $.null), 
      alias('true', $.true),
      alias('false', $.false),
      $.number, 
      $.string,
    ),

    multistring: $ => choice($._ms0, $._ms),
    // note: alternative: ms0 could be like jsonstring 
    // multistring-0 ::= "'" (any* - "'") "'"
    _ms0: $ => seq("'", alias(/[^']*/, $.ms_content), "'"),
    // multistring(n) ::= "`"{n} "'" (any* - ("'" "`"{n})) "'" "`"{n}
    _ms: $ => seq("`", $.ms_start, alias(seq(repeat(seq(/[^']*/, "'")), /[^']*/), $.ms_content), "'", $.ms_end),

    comment: $ => choice(
      token(choice(
        seq('//', /.*/),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        ),
      )),
      seq("/", $.string),
    ),
  }
});
