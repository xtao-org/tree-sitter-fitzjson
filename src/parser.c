#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 270
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 5
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 36

enum {
  anon_sym_PIPE = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_COLON = 6,
  aux_sym_entry_token1 = 7,
  anon_sym_DOT = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_AT = 11,
  sym_id = 12,
  sym_disabled = 13,
  sym_number = 14,
  anon_sym_DQUOTE_DQUOTE = 15,
  anon_sym_DQUOTE = 16,
  anon_sym_DQUOTE2 = 17,
  aux_sym_string_content_token1 = 18,
  sym_escape_sequence = 19,
  anon_sym_COMMA = 20,
  anon_sym_null = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_SQUOTE = 24,
  aux_sym__ms0_token1 = 25,
  anon_sym_BQUOTE = 26,
  aux_sym_comment_token1 = 27,
  anon_sym_SLASH = 28,
  sym_ms_start = 29,
  sym_ms_end = 30,
  sym_error_sentinel = 31,
  sym_top = 32,
  sym_entry = 33,
  sym_item = 34,
  sym_path = 35,
  sym_dotted = 36,
  sym_parened = 37,
  sym_decorator = 38,
  sym_pipe = 39,
  sym_value = 40,
  sym__plainval = 41,
  sym_list = 42,
  sym_map = 43,
  sym_string = 44,
  sym_jsonstring = 45,
  sym_string_content = 46,
  sym__valsep = 47,
  sym__primitive = 48,
  sym_multistring = 49,
  sym__ms0 = 50,
  sym__ms = 51,
  sym_comment = 52,
  aux_sym_top_repeat1 = 53,
  aux_sym_top_repeat2 = 54,
  aux_sym_entry_repeat1 = 55,
  aux_sym_entry_repeat2 = 56,
  aux_sym_path_repeat1 = 57,
  aux_sym_string_content_repeat1 = 58,
  aux_sym__ms_repeat1 = 59,
  alias_sym_decorators = 60,
  alias_sym_entries = 61,
  alias_sym_items = 62,
  alias_sym_ms_content = 63,
  alias_sym_pipes = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [aux_sym_entry_token1] = "entry_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [sym_id] = "id",
  [sym_disabled] = "disabled",
  [sym_number] = "number",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [aux_sym_string_content_token1] = "tok",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_COMMA] = ",",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__ms0_token1] = "_ms0_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [sym_ms_start] = "ms_start",
  [sym_ms_end] = "ms_end",
  [sym_error_sentinel] = "error_sentinel",
  [sym_top] = "top",
  [sym_entry] = "entry",
  [sym_item] = "item",
  [sym_path] = "path",
  [sym_dotted] = "dotted",
  [sym_parened] = "parened",
  [sym_decorator] = "decorator",
  [sym_pipe] = "pipe",
  [sym_value] = "value",
  [sym__plainval] = "_plainval",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_string] = "string",
  [sym_jsonstring] = "jsonstring",
  [sym_string_content] = "string_content",
  [sym__valsep] = "_valsep",
  [sym__primitive] = "_primitive",
  [sym_multistring] = "multistring",
  [sym__ms0] = "_ms0",
  [sym__ms] = "_ms",
  [sym_comment] = "comment",
  [aux_sym_top_repeat1] = "top_repeat1",
  [aux_sym_top_repeat2] = "top_repeat2",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_entry_repeat2] = "entry_repeat2",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym__ms_repeat1] = "_ms_repeat1",
  [alias_sym_decorators] = "decorators",
  [alias_sym_entries] = "entries",
  [alias_sym_items] = "items",
  [alias_sym_ms_content] = "ms_content",
  [alias_sym_pipes] = "pipes",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_entry_token1] = aux_sym_entry_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [sym_id] = sym_id,
  [sym_disabled] = sym_disabled,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__ms0_token1] = aux_sym__ms0_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_ms_start] = sym_ms_start,
  [sym_ms_end] = sym_ms_end,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_top] = sym_top,
  [sym_entry] = sym_entry,
  [sym_item] = sym_item,
  [sym_path] = sym_path,
  [sym_dotted] = sym_dotted,
  [sym_parened] = sym_parened,
  [sym_decorator] = sym_decorator,
  [sym_pipe] = sym_pipe,
  [sym_value] = sym_value,
  [sym__plainval] = sym__plainval,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_string] = sym_string,
  [sym_jsonstring] = sym_jsonstring,
  [sym_string_content] = sym_string_content,
  [sym__valsep] = sym__valsep,
  [sym__primitive] = sym__primitive,
  [sym_multistring] = sym_multistring,
  [sym__ms0] = sym__ms0,
  [sym__ms] = sym__ms,
  [sym_comment] = sym_comment,
  [aux_sym_top_repeat1] = aux_sym_top_repeat1,
  [aux_sym_top_repeat2] = aux_sym_top_repeat2,
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
  [aux_sym_entry_repeat2] = aux_sym_entry_repeat2,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym__ms_repeat1] = aux_sym__ms_repeat1,
  [alias_sym_decorators] = alias_sym_decorators,
  [alias_sym_entries] = alias_sym_entries,
  [alias_sym_items] = alias_sym_items,
  [alias_sym_ms_content] = alias_sym_ms_content,
  [alias_sym_pipes] = alias_sym_pipes,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entry_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_disabled] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ms0_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_ms_start] = {
    .visible = true,
    .named = true,
  },
  [sym_ms_end] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_top] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted] = {
    .visible = true,
    .named = true,
  },
  [sym_parened] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__plainval] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_jsonstring] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__valsep] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_multistring] = {
    .visible = true,
    .named = true,
  },
  [sym__ms0] = {
    .visible = false,
    .named = true,
  },
  [sym__ms] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_top_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_top_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_decorators] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_entries] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_items] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_ms_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pipes] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_decorators = 1,
  field_disabled = 2,
  field_id = 3,
  field_key = 4,
  field_pipes = 5,
  field_plainval = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_decorators] = "decorators",
  [field_disabled] = "disabled",
  [field_id] = "id",
  [field_key] = "key",
  [field_pipes] = "pipes",
  [field_plainval] = "plainval",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 3},
  [14] = {.index = 16, .length = 3},
  [15] = {.index = 19, .length = 3},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 3},
  [18] = {.index = 26, .length = 3},
  [19] = {.index = 29, .length = 3},
  [21] = {.index = 32, .length = 1},
  [23] = {.index = 33, .length = 4},
  [24] = {.index = 37, .length = 4},
  [26] = {.index = 41, .length = 4},
  [27] = {.index = 45, .length = 4},
  [29] = {.index = 32, .length = 1},
  [31] = {.index = 32, .length = 1},
  [33] = {.index = 49, .length = 5},
  [34] = {.index = 32, .length = 1},
  [35] = {.index = 32, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_plainval, 0},
  [1] =
    {field_plainval, 0, .inherited = true},
  [2] =
    {field_plainval, 1, .inherited = true},
  [3] =
    {field_pipes, 1},
    {field_plainval, 0, .inherited = true},
  [5] =
    {field_decorators, 0},
    {field_plainval, 1, .inherited = true},
  [7] =
    {field_disabled, 0},
    {field_plainval, 1, .inherited = true},
  [9] =
    {field_plainval, 2, .inherited = true},
  [10] =
    {field_key, 0},
    {field_value, 2},
  [12] =
    {field_id, 1},
  [13] =
    {field_decorators, 0},
    {field_pipes, 2},
    {field_plainval, 1, .inherited = true},
  [16] =
    {field_disabled, 0},
    {field_pipes, 2},
    {field_plainval, 1, .inherited = true},
  [19] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_plainval, 2, .inherited = true},
  [22] =
    {field_value, 1},
  [23] =
    {field_key, 0},
    {field_pipes, 1},
    {field_value, 3},
  [26] =
    {field_disabled, 0},
    {field_key, 1},
    {field_value, 3},
  [29] =
    {field_decorators, 0},
    {field_key, 1},
    {field_value, 3},
  [32] =
    {field_plainval, 3, .inherited = true},
  [33] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_pipes, 3},
    {field_plainval, 2, .inherited = true},
  [37] =
    {field_disabled, 0},
    {field_key, 1},
    {field_pipes, 2},
    {field_value, 4},
  [41] =
    {field_decorators, 0},
    {field_key, 1},
    {field_pipes, 2},
    {field_value, 4},
  [45] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_key, 2},
    {field_value, 4},
  [49] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_key, 2},
    {field_pipes, 3},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_entries,
  },
  [5] = {
    [1] = alias_sym_pipes,
  },
  [6] = {
    [0] = alias_sym_entries,
    [1] = alias_sym_entries,
  },
  [7] = {
    [0] = alias_sym_decorators,
  },
  [12] = {
    [1] = alias_sym_ms_content,
  },
  [13] = {
    [0] = alias_sym_decorators,
    [2] = alias_sym_pipes,
  },
  [14] = {
    [2] = alias_sym_pipes,
  },
  [15] = {
    [0] = alias_sym_decorators,
  },
  [17] = {
    [1] = alias_sym_pipes,
  },
  [19] = {
    [0] = alias_sym_decorators,
  },
  [20] = {
    [4] = alias_sym_entries,
  },
  [22] = {
    [4] = alias_sym_items,
  },
  [23] = {
    [0] = alias_sym_decorators,
    [3] = alias_sym_pipes,
  },
  [24] = {
    [2] = alias_sym_pipes,
  },
  [25] = {
    [2] = alias_sym_ms_content,
  },
  [26] = {
    [0] = alias_sym_decorators,
    [2] = alias_sym_pipes,
  },
  [27] = {
    [0] = alias_sym_decorators,
  },
  [28] = {
    [4] = alias_sym_entries,
    [5] = alias_sym_entries,
  },
  [29] = {
    [5] = alias_sym_entries,
  },
  [30] = {
    [4] = alias_sym_items,
    [5] = alias_sym_items,
  },
  [31] = {
    [5] = alias_sym_items,
  },
  [32] = {
    [2] = alias_sym_ms_content,
    [3] = alias_sym_ms_content,
  },
  [33] = {
    [0] = alias_sym_decorators,
    [3] = alias_sym_pipes,
  },
  [34] = {
    [5] = alias_sym_entries,
    [6] = alias_sym_entries,
  },
  [35] = {
    [5] = alias_sym_items,
    [6] = alias_sym_items,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_entry, 2,
    sym_entry,
    alias_sym_entries,
  sym_item, 2,
    sym_item,
    alias_sym_items,
  aux_sym_top_repeat1, 2,
    aux_sym_top_repeat1,
    alias_sym_entries,
  aux_sym_top_repeat2, 2,
    aux_sym_top_repeat2,
    alias_sym_items,
  aux_sym_entry_repeat1, 2,
    aux_sym_entry_repeat1,
    alias_sym_decorators,
  aux_sym_entry_repeat2, 2,
    aux_sym_entry_repeat2,
    alias_sym_pipes,
  aux_sym__ms_repeat1, 2,
    aux_sym__ms_repeat1,
    alias_sym_ms_content,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 5,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 31,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 42,
  [45] = 40,
  [46] = 40,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 36,
  [77] = 38,
  [78] = 37,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 36,
  [83] = 38,
  [84] = 81,
  [85] = 81,
  [86] = 37,
  [87] = 87,
  [88] = 52,
  [89] = 89,
  [90] = 62,
  [91] = 51,
  [92] = 72,
  [93] = 53,
  [94] = 94,
  [95] = 95,
  [96] = 60,
  [97] = 57,
  [98] = 98,
  [99] = 71,
  [100] = 73,
  [101] = 63,
  [102] = 52,
  [103] = 68,
  [104] = 69,
  [105] = 59,
  [106] = 67,
  [107] = 65,
  [108] = 61,
  [109] = 74,
  [110] = 64,
  [111] = 54,
  [112] = 58,
  [113] = 51,
  [114] = 55,
  [115] = 75,
  [116] = 53,
  [117] = 56,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 58,
  [122] = 71,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 56,
  [130] = 130,
  [131] = 68,
  [132] = 59,
  [133] = 61,
  [134] = 69,
  [135] = 135,
  [136] = 136,
  [137] = 57,
  [138] = 138,
  [139] = 139,
  [140] = 63,
  [141] = 64,
  [142] = 54,
  [143] = 55,
  [144] = 60,
  [145] = 67,
  [146] = 65,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 98,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 136,
  [159] = 157,
  [160] = 160,
  [161] = 135,
  [162] = 162,
  [163] = 157,
  [164] = 147,
  [165] = 120,
  [166] = 166,
  [167] = 157,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 170,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 172,
  [182] = 182,
  [183] = 183,
  [184] = 180,
  [185] = 170,
  [186] = 186,
  [187] = 172,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 179,
  [194] = 180,
  [195] = 195,
  [196] = 179,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 123,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 202,
  [205] = 203,
  [206] = 203,
  [207] = 202,
  [208] = 203,
  [209] = 202,
  [210] = 210,
  [211] = 139,
  [212] = 212,
  [213] = 118,
  [214] = 201,
  [215] = 215,
  [216] = 201,
  [217] = 215,
  [218] = 215,
  [219] = 201,
  [220] = 220,
  [221] = 221,
  [222] = 215,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 223,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 224,
  [231] = 231,
  [232] = 232,
  [233] = 229,
  [234] = 223,
  [235] = 229,
  [236] = 227,
  [237] = 228,
  [238] = 238,
  [239] = 229,
  [240] = 224,
  [241] = 241,
  [242] = 228,
  [243] = 227,
  [244] = 228,
  [245] = 227,
  [246] = 246,
  [247] = 247,
  [248] = 247,
  [249] = 249,
  [250] = 250,
  [251] = 238,
  [252] = 252,
  [253] = 247,
  [254] = 254,
  [255] = 250,
  [256] = 238,
  [257] = 247,
  [258] = 250,
  [259] = 238,
  [260] = 250,
  [261] = 56,
  [262] = 58,
  [263] = 54,
  [264] = 264,
  [265] = 57,
  [266] = 60,
  [267] = 55,
  [268] = 59,
  [269] = 269,
};

static inline bool sym_id_character_set_1(int32_t c) {
  return (c < 43396
    ? (c < 4176
      ? (c < 2703
        ? (c < 1969
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < '_'
                  ? (c < 'A'
                    ? c == '$'
                    : c <= 'Z')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1646
              ? (c < 1369
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3585
            ? (c < 3389
              ? (c < 3296
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3461
                ? (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3632 || (c < 3773
              ? (c < 3718
                ? (c < 3713
                  ? (c < 3648
                    ? (c >= 3634 && c <= 3635)
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))))
              : (c <= 3773 || (c < 3904
                ? (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))
                : (c <= 3911 || (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))))))))))))
      : (c <= 4181 || (c < 8118
        ? (c < 6103
          ? (c < 4800
            ? (c < 4348
              ? (c < 4238
                ? (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)))
                : (c <= 4238 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))))
              : (c <= 4680 || (c < 4704
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))))
            : (c <= 4800 || (c < 5743
              ? (c < 4888
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42623
            ? (c < 12593
              ? (c < 12353
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12443 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))
              : (c <= 12686 || (c < 42192
                ? (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))))
            : (c <= 42653 || (c < 43015
              ? (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))
              : (c <= 43018 || (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))))))))))))
    : (c <= 43442 || (c < 70784
      ? (c < 66979
        ? (c < 64326
          ? (c < 43793
            ? (c < 43697
              ? (c < 43584
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)))
                : (c <= 43586 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))))
              : (c <= 43697 || (c < 43739
                ? (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))
            : (c <= 43798 || (c < 64112
              ? (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))
              : (c <= 64217 || (c < 64298
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65136
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_id_character_set_2(int32_t c) {
  return (c < 43396
    ? (c < 4159
      ? (c < 2693
        ? (c < 1869
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? c == '$'
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1786 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))))))))
          : (c <= 1957 || (c < 2451
            ? (c < 2160
              ? (c < 2074
                ? (c < 2036
                  ? (c < 1994
                    ? c == 1969
                    : c <= 2026)
                  : (c <= 2037 || (c < 2048
                    ? c == 2042
                    : c <= 2069)))
                : (c <= 2074 || (c < 2112
                  ? (c < 2088
                    ? c == 2084
                    : c <= 2088)
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2384
                ? (c < 2308
                  ? (c < 2208
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2392 && c <= 2401)
                    : c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))))
            : (c <= 2472 || (c < 2565
              ? (c < 2510
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2544
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2529)
                  : (c <= 2545 || c == 2556))))
              : (c <= 2570 || (c < 2613
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2654
                  ? (c < 2649
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))))))))))
        : (c <= 2701 || (c < 3214
          ? (c < 2949
            ? (c < 2831
              ? (c < 2749
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2749 || (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2877
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))))))
            : (c <= 2954 || (c < 3077
              ? (c < 2974
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || c == 3024))))
              : (c <= 3084 || (c < 3160
                ? (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3200
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))))))))
          : (c <= 3216 || (c < 3520
            ? (c < 3346
              ? (c < 3293
                ? (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3450
                ? (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3762
              ? (c < 3716
                ? (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))))
              : (c <= 3763 || (c < 3840
                ? (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))))))))))))
      : (c <= 4159 || (c < 8118
        ? (c < 6016
          ? (c < 4792
            ? (c < 4304
              ? (c < 4213
                ? (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)))
                : (c <= 4225 || (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))
              : (c <= 4346 || (c < 4698
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))))
            : (c <= 4798 || (c < 5121
              ? (c < 4882
                ? (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42623
            ? (c < 12593
              ? (c < 12353
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12443 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))
              : (c <= 12686 || (c < 42192
                ? (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))))
            : (c <= 42653 || (c < 43015
              ? (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))
              : (c <= 43018 || (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))))))))))))
    : (c <= 43442 || (c < 70784
      ? (c < 66979
        ? (c < 64326
          ? (c < 43793
            ? (c < 43697
              ? (c < 43584
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)))
                : (c <= 43586 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))))
              : (c <= 43697 || (c < 43739
                ? (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))
            : (c <= 43798 || (c < 64112
              ? (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))
              : (c <= 64217 || (c < 64298
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65136
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_id_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 3751
      ? (c < 2738
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '$'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3160
          ? (c < 2946
            ? (c < 2835
              ? (c < 2784
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)))))
              : (c <= 2856 || (c < 2891
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))))))
            : (c <= 2947 || (c < 3018
              ? (c < 2974
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)))))
              : (c <= 3021 || (c < 3090
                ? (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3055 || (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)))
                : (c <= 3112 || (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))))))))
          : (c <= 3162 || (c < 3423
            ? (c < 3274
              ? (c < 3214
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)))))
              : (c <= 3277 || (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))))))
            : (c <= 3427 || (c < 3544
              ? (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))))
              : (c <= 3551 || (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))))))))))
      : (c <= 3773 || (c < 7968
        ? (c < 5792
          ? (c < 4348
            ? (c < 3902
              ? (c < 3840
                ? (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))
                : (c <= 3840 || (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))))
              : (c <= 3911 || (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))))))
            : (c <= 4680 || (c < 4808
              ? (c < 4746
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))))))))
          : (c <= 5866 || (c < 6608
            ? (c < 6155
              ? (c < 5998
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))))
              : (c <= 6157 || (c < 6432
                ? (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6443 || (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)))))))
            : (c <= 6618 || (c < 7040
              ? (c < 6823
                ? (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))))
              : (c <= 7155 || (c < 7357
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))))))))
        : (c <= 8005 || (c < 11688
          ? (c < 8417
            ? (c < 8144
              ? (c < 8031
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))))
              : (c <= 8147 || (c < 8255
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8204
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8205)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_id_character_set_4(int32_t c) {
  return (c < 43520
    ? (c < 3751
      ? (c < 2738
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '$'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3160
          ? (c < 2946
            ? (c < 2835
              ? (c < 2784
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)))))
              : (c <= 2856 || (c < 2891
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))))))
            : (c <= 2947 || (c < 3018
              ? (c < 2974
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)))))
              : (c <= 3021 || (c < 3090
                ? (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3055 || (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)))
                : (c <= 3112 || (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))))))))
          : (c <= 3162 || (c < 3423
            ? (c < 3274
              ? (c < 3214
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)))))
              : (c <= 3277 || (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))))))
            : (c <= 3427 || (c < 3544
              ? (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))))
              : (c <= 3551 || (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))))))))))
      : (c <= 3773 || (c < 7968
        ? (c < 5792
          ? (c < 4348
            ? (c < 3902
              ? (c < 3840
                ? (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))
                : (c <= 3840 || (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))))
              : (c <= 3911 || (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))))))
            : (c <= 4680 || (c < 4808
              ? (c < 4746
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))))))))
          : (c <= 5866 || (c < 6608
            ? (c < 6155
              ? (c < 5998
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))))
              : (c <= 6157 || (c < 6432
                ? (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6443 || (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)))))))
            : (c <= 6618 || (c < 7040
              ? (c < 6823
                ? (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))))
              : (c <= 7155 || (c < 7357
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))))))))
        : (c <= 8005 || (c < 11688
          ? (c < 8417
            ? (c < 8144
              ? (c < 8031
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))))
              : (c <= 8147 || (c < 8255
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8204
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8205)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(60);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_id_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead)) ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (sym_id_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'I') ADVANCE(9);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_id_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_id_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_entry_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_entry_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(86);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'N') ADVANCE(61);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(40);
      if (sym_id_character_set_4(lookahead)) ADVANCE(59);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(48);
      if (sym_id_character_set_4(lookahead)) ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(79);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(80);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(47);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(55);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(52);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(54);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(78);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(49);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(45);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(46);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(56);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(44);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(58);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(43);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(50);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'y') ADVANCE(61);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_id);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_disabled);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_id_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(86);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 25},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 25},
  [64] = {.lex_state = 25},
  [65] = {.lex_state = 25},
  [66] = {.lex_state = 25},
  [67] = {.lex_state = 25},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 25},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 25},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 25},
  [75] = {.lex_state = 25},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 26},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 26},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 26},
  [85] = {.lex_state = 26},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 26},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 26},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 26},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 26},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 26},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 85, .external_lex_state = 2},
  [202] = {.lex_state = 85},
  [203] = {.lex_state = 85},
  [204] = {.lex_state = 85},
  [205] = {.lex_state = 85},
  [206] = {.lex_state = 85},
  [207] = {.lex_state = 85},
  [208] = {.lex_state = 85},
  [209] = {.lex_state = 85},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 85, .external_lex_state = 2},
  [215] = {.lex_state = 85, .external_lex_state = 2},
  [216] = {.lex_state = 85, .external_lex_state = 2},
  [217] = {.lex_state = 85, .external_lex_state = 2},
  [218] = {.lex_state = 85, .external_lex_state = 2},
  [219] = {.lex_state = 85, .external_lex_state = 2},
  [220] = {.lex_state = 85},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 85, .external_lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 3},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0, .external_lex_state = 3},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 85},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 85},
  [248] = {.lex_state = 85},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 85},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 85},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {(TSStateId)(-1)},
  [262] = {(TSStateId)(-1)},
  [263] = {(TSStateId)(-1)},
  [264] = {(TSStateId)(-1)},
  [265] = {(TSStateId)(-1)},
  [266] = {(TSStateId)(-1)},
  [267] = {(TSStateId)(-1)},
  [268] = {(TSStateId)(-1)},
  [269] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_ms_start = 0,
  ts_external_token_ms_end = 1,
  ts_external_token_error_sentinel = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_ms_start] = sym_ms_start,
  [ts_external_token_ms_end] = sym_ms_end,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_ms_start] = true,
    [ts_external_token_ms_end] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_ms_end] = true,
  },
  [3] = {
    [ts_external_token_ms_start] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_disabled] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [sym_ms_start] = ACTIONS(1),
    [sym_ms_end] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_top] = STATE(254),
    [sym_entry] = STATE(191),
    [sym_path] = STATE(61),
    [sym_decorator] = STATE(75),
    [sym_value] = STATE(246),
    [sym__plainval] = STATE(164),
    [sym_list] = STATE(61),
    [sym_map] = STATE(61),
    [sym_string] = STATE(149),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(61),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(1),
    [aux_sym_top_repeat1] = STATE(41),
    [aux_sym_entry_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(19),
    [sym_disabled] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [2] = {
    [sym_item] = STATE(212),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(2),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(35),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(43),
    [sym_id] = ACTIONS(46),
    [sym_disabled] = ACTIONS(49),
    [sym_number] = ACTIONS(52),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [anon_sym_null] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [3] = {
    [sym_item] = STATE(190),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(3),
    [aux_sym_top_repeat2] = STATE(11),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [4] = {
    [sym_item] = STATE(170),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(4),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(84),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [5] = {
    [sym_item] = STATE(180),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(5),
    [aux_sym_top_repeat2] = STATE(4),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(86),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [6] = {
    [sym_item] = STATE(185),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(6),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(88),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [7] = {
    [sym_item] = STATE(194),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(7),
    [aux_sym_top_repeat2] = STATE(6),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(90),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [8] = {
    [sym_item] = STATE(173),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(8),
    [aux_sym_top_repeat2] = STATE(9),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [9] = {
    [sym_item] = STATE(169),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(9),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [10] = {
    [sym_item] = STATE(174),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(10),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(96),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [11] = {
    [sym_item] = STATE(175),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(11),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
  [12] = {
    [sym_item] = STATE(184),
    [sym_path] = STATE(133),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(119),
    [sym_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym_string] = STATE(141),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(133),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(12),
    [aux_sym_top_repeat2] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(100),
    [aux_sym_entry_token1] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(17),
    [sym_id] = ACTIONS(76),
    [sym_disabled] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(102), 1,
      sym_disabled,
    STATE(13), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(138), 1,
      sym__plainval,
    STATE(141), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [74] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(14), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(141), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(195), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [148] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(15), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(141), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(182), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [222] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(16), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(141), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(178), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [296] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(17), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(141), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(183), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [370] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(18), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(141), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(171), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [444] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(19), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(141), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(176), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [518] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(141), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(186), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [592] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(104), 1,
      sym_id,
    ACTIONS(106), 1,
      sym_disabled,
    ACTIONS(108), 1,
      sym_number,
    STATE(21), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(148), 1,
      sym_string,
    STATE(161), 1,
      sym__plainval,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(29), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [666] = 22,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(22), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(141), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(197), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [740] = 21,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(23), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(141), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [811] = 19,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      sym_id,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    STATE(24), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(249), 1,
      sym__plainval,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(29), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [876] = 19,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_id,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(252), 1,
      sym__plainval,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(29), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [941] = 19,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_id,
    ACTIONS(132), 1,
      sym_disabled,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(136), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_BQUOTE,
    STATE(26), 1,
      sym_comment,
    STATE(100), 1,
      sym__plainval,
    STATE(110), 1,
      sym_string,
    STATE(97), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(117), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(140), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(108), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1006] = 19,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(146), 1,
      sym_disabled,
    STATE(27), 1,
      sym_comment,
    STATE(139), 1,
      sym__plainval,
    STATE(141), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1071] = 19,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_id,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(148), 1,
      sym_disabled,
    STATE(28), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(211), 1,
      sym__plainval,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(29), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1136] = 19,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_id,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(150), 1,
      sym_disabled,
    STATE(29), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(73), 1,
      sym__plainval,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(29), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1201] = 18,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(30), 1,
      sym_comment,
    STATE(127), 1,
      sym__plainval,
    STATE(141), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1263] = 18,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(31), 1,
      sym_comment,
    STATE(123), 1,
      sym__plainval,
    STATE(141), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1325] = 18,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_id,
    ACTIONS(80), 1,
      sym_number,
    STATE(32), 1,
      sym_comment,
    STATE(126), 1,
      sym__plainval,
    STATE(141), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(82), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1387] = 18,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_id,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(136), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_BQUOTE,
    STATE(33), 1,
      sym_comment,
    STATE(109), 1,
      sym__plainval,
    STATE(110), 1,
      sym_string,
    STATE(97), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(117), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(140), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(108), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1449] = 18,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_id,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    STATE(34), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(74), 1,
      sym__plainval,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(29), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1511] = 18,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_id,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    STATE(35), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(200), 1,
      sym__plainval,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(29), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1573] = 9,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(36), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(160), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(152), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1616] = 10,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(168), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1661] = 10,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_path_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(172), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1706] = 19,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      sym_id,
    ACTIONS(182), 1,
      sym_disabled,
    ACTIONS(185), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_BQUOTE,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(210), 1,
      sym_entry,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_comment,
      aux_sym_top_repeat1,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1768] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(181), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1831] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(41), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(192), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1894] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_top_repeat1,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(193), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1957] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_top_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(179), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2020] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_top_repeat1,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(196), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2083] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(187), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2146] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(172), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2209] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(188), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2272] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    STATE(48), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_top_repeat1,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(189), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2335] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(198), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2398] = 20,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_disabled,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_id,
    ACTIONS(206), 1,
      sym_number,
    STATE(47), 1,
      aux_sym_top_repeat1,
    STATE(50), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(155), 1,
      sym_string,
    STATE(177), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2461] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_comment,
    ACTIONS(226), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2495] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(230), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2529] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(234), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(232), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2563] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(238), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(236), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2596] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(242), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2629] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(246), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(244), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2662] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(250), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(248), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2695] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_comment,
    ACTIONS(254), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2728] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(258), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2761] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_comment,
    ACTIONS(262), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(260), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2794] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(168), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2826] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(266), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(264), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2858] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(270), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(268), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2890] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(274), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(272), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2922] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(65), 1,
      sym_comment,
    ACTIONS(278), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2954] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_comment,
    ACTIONS(280), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2986] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(67), 1,
      sym_comment,
    ACTIONS(284), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(282), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3018] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      sym_comment,
    ACTIONS(288), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(286), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3050] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(69), 1,
      sym_comment,
    ACTIONS(292), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(290), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3082] = 17,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(106), 1,
      sym_disabled,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(294), 1,
      sym_id,
    ACTIONS(296), 1,
      sym_number,
    STATE(70), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_entry_repeat1,
    STATE(115), 1,
      sym_decorator,
    STATE(166), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [3136] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(71), 1,
      sym_comment,
    ACTIONS(300), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3168] = 8,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_AT,
    STATE(75), 1,
      sym_decorator,
    STATE(72), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(307), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(302), 7,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3204] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(311), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(309), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3234] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(315), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(313), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3264] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      sym_comment,
    ACTIONS(319), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(317), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3294] = 9,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(76), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(88), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(152), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3330] = 10,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(172), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(88), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(170), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3368] = 10,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(88), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(162), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3406] = 13,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(331), 1,
      sym_id,
    ACTIONS(333), 1,
      sym_number,
    STATE(79), 1,
      sym_comment,
    STATE(154), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [3448] = 13,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_BQUOTE,
    ACTIONS(335), 1,
      sym_id,
    ACTIONS(337), 1,
      sym_number,
    STATE(80), 1,
      sym_comment,
    STATE(162), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [3490] = 13,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(339), 1,
      sym_id,
    ACTIONS(341), 1,
      sym_number,
    STATE(81), 1,
      sym_comment,
    STATE(240), 1,
      sym_string,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
  [3532] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(82), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(102), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [3562] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      aux_sym_path_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(102), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [3594] = 13,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(353), 1,
      sym_id,
    ACTIONS(355), 1,
      sym_number,
    STATE(84), 1,
      sym_comment,
    STATE(224), 1,
      sym_string,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
  [3636] = 13,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(116), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(357), 1,
      sym_id,
    ACTIONS(359), 1,
      sym_number,
    STATE(85), 1,
      sym_comment,
    STATE(230), 1,
      sym_string,
    STATE(56), 2,
      sym__ms0,
      sym__ms,
    STATE(57), 2,
      sym_jsonstring,
      sym_multistring,
  [3678] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(102), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [3710] = 12,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(87), 1,
      sym_comment,
    STATE(118), 1,
      sym_pipe,
    STATE(160), 1,
      aux_sym_entry_repeat2,
    ACTIONS(363), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
  [3749] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_comment,
    ACTIONS(230), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(228), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3776] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_comment,
    ACTIONS(365), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3803] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_comment,
    ACTIONS(266), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3830] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_comment,
    ACTIONS(226), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(224), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3857] = 8,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(367), 1,
      anon_sym_AT,
    STATE(115), 1,
      sym_decorator,
    ACTIONS(307), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(92), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(302), 5,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3888] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_comment,
    ACTIONS(234), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(232), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3915] = 12,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(94), 1,
      sym_comment,
    STATE(118), 1,
      sym_pipe,
    STATE(168), 1,
      aux_sym_entry_repeat2,
    ACTIONS(370), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
  [3954] = 11,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(372), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
    ACTIONS(378), 1,
      anon_sym_BQUOTE,
    STATE(95), 1,
      sym_comment,
    STATE(264), 1,
      sym_string,
    STATE(261), 2,
      sym__ms0,
      sym__ms,
    STATE(265), 2,
      sym_jsonstring,
      sym_multistring,
  [3990] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      sym_comment,
    ACTIONS(262), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(260), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4015] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      sym_comment,
    ACTIONS(250), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(248), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4040] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(382), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(98), 2,
      sym_comment,
      aux_sym_entry_repeat2,
    ACTIONS(380), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4065] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_comment,
    ACTIONS(300), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(298), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4090] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_comment,
    ACTIONS(311), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(309), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4115] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_comment,
    ACTIONS(270), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(268), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4140] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      sym_comment,
    ACTIONS(228), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [4161] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_comment,
    ACTIONS(288), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(286), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4186] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_comment,
    ACTIONS(292), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(290), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4211] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_comment,
    ACTIONS(258), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(256), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4236] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(106), 1,
      sym_comment,
    ACTIONS(284), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(282), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4261] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(107), 1,
      sym_comment,
    ACTIONS(278), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(276), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4286] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(162), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4311] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      sym_comment,
    ACTIONS(315), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(313), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4336] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      sym_comment,
    ACTIONS(274), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(272), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4361] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      sym_comment,
    ACTIONS(238), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(236), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4386] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      sym_comment,
    ACTIONS(254), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(252), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4411] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(113), 1,
      sym_comment,
    ACTIONS(224), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [4432] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      sym_comment,
    ACTIONS(242), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(240), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4457] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      sym_comment,
    ACTIONS(319), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(317), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4482] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(116), 1,
      sym_comment,
    ACTIONS(232), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [4503] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      sym_comment,
    ACTIONS(246), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(244), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4528] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(118), 1,
      sym_comment,
    ACTIONS(385), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4547] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(119), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_entry_repeat2,
    ACTIONS(387), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4572] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(120), 1,
      sym_comment,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4597] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      sym_comment,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4616] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(122), 1,
      sym_comment,
    ACTIONS(298), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4635] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(123), 1,
      sym_comment,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4654] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(124), 1,
      sym_comment,
    ACTIONS(393), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4679] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(125), 1,
      sym_comment,
    ACTIONS(395), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4704] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(126), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_entry_repeat2,
    ACTIONS(397), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4729] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(127), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_entry_repeat2,
    ACTIONS(399), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4754] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(128), 1,
      sym_comment,
    ACTIONS(401), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4779] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(129), 1,
      sym_comment,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4798] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(130), 1,
      sym_comment,
    ACTIONS(403), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4823] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(131), 1,
      sym_comment,
    ACTIONS(286), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4842] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(132), 1,
      sym_comment,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4861] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(133), 1,
      sym_comment,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4880] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(134), 1,
      sym_comment,
    ACTIONS(290), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4899] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(120), 1,
      aux_sym_entry_repeat2,
    STATE(135), 1,
      sym_comment,
    ACTIONS(405), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4924] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(136), 1,
      sym_comment,
    ACTIONS(407), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4949] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(137), 1,
      sym_comment,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4968] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(125), 1,
      aux_sym_entry_repeat2,
    STATE(138), 1,
      sym_comment,
    ACTIONS(409), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [4993] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(139), 1,
      sym_comment,
    ACTIONS(411), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5012] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(140), 1,
      sym_comment,
    ACTIONS(268), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5031] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(141), 1,
      sym_comment,
    ACTIONS(272), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5050] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(142), 1,
      sym_comment,
    ACTIONS(236), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5069] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_comment,
    ACTIONS(240), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5088] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(144), 1,
      sym_comment,
    ACTIONS(260), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5107] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      sym_comment,
    ACTIONS(282), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5126] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(146), 1,
      sym_comment,
    ACTIONS(276), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5145] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(136), 1,
      aux_sym_entry_repeat2,
    STATE(147), 1,
      sym_comment,
    ACTIONS(413), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5170] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(148), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym_entry_repeat2,
    ACTIONS(363), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5196] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(149), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_entry_repeat2,
    ACTIONS(370), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5222] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(150), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5245] = 7,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 1,
      anon_sym_PIPE,
    STATE(213), 1,
      sym_pipe,
    STATE(151), 2,
      sym_comment,
      aux_sym_entry_repeat2,
  [5268] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(422), 1,
      anon_sym_DQUOTE2,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(424), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5291] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(153), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5314] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(153), 1,
      aux_sym_entry_repeat2,
    STATE(154), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5337] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(155), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_entry_repeat2,
    ACTIONS(370), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5360] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(432), 1,
      anon_sym_DQUOTE2,
    ACTIONS(434), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
    STATE(156), 2,
      sym_comment,
      aux_sym_string_content_repeat1,
  [5381] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      aux_sym_string_content_repeat1,
    STATE(157), 1,
      sym_comment,
    STATE(243), 1,
      sym_string_content,
    ACTIONS(424), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5404] = 8,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    STATE(151), 1,
      aux_sym_entry_repeat2,
    STATE(158), 1,
      sym_comment,
    STATE(213), 1,
      sym_pipe,
  [5429] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      aux_sym_string_content_repeat1,
    STATE(159), 1,
      sym_comment,
    STATE(236), 1,
      sym_string_content,
    ACTIONS(424), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5452] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(160), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5475] = 8,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    STATE(161), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_entry_repeat2,
    STATE(213), 1,
      sym_pipe,
  [5500] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(150), 1,
      aux_sym_entry_repeat2,
    STATE(162), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5523] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      aux_sym_string_content_repeat1,
    STATE(163), 1,
      sym_comment,
    STATE(245), 1,
      sym_string_content,
    ACTIONS(424), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5546] = 8,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    STATE(158), 1,
      aux_sym_entry_repeat2,
    STATE(164), 1,
      sym_comment,
    STATE(213), 1,
      sym_pipe,
  [5571] = 8,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    STATE(151), 1,
      aux_sym_entry_repeat2,
    STATE(165), 1,
      sym_comment,
    STATE(213), 1,
      sym_pipe,
  [5596] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      sym_pipe,
    STATE(160), 1,
      aux_sym_entry_repeat2,
    STATE(166), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5619] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      aux_sym_string_content_repeat1,
    STATE(167), 1,
      sym_comment,
    STATE(227), 1,
      sym_string_content,
    ACTIONS(424), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5642] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_pipe,
    STATE(168), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_COLON,
      aux_sym_entry_token1,
  [5665] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__valsep,
    STATE(169), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5685] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(170), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5705] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      sym_comment,
    ACTIONS(451), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5721] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym__valsep,
    STATE(172), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5741] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__valsep,
    STATE(173), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5761] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(174), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5781] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__valsep,
    STATE(175), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5801] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(176), 1,
      sym_comment,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5817] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym__valsep,
    STATE(177), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5837] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(178), 1,
      sym_comment,
    ACTIONS(463), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5853] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym__valsep,
    STATE(179), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5873] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(180), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5893] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym__valsep,
    STATE(181), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5913] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(182), 1,
      sym_comment,
    ACTIONS(467), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5929] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(183), 1,
      sym_comment,
    ACTIONS(469), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5945] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(184), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5965] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(185), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [5985] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      sym_comment,
    ACTIONS(473), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6001] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym__valsep,
    STATE(187), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6021] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym__valsep,
    STATE(188), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6041] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym__valsep,
    STATE(189), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6061] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__valsep,
    STATE(190), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6081] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym__valsep,
    STATE(191), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6101] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym__valsep,
    STATE(192), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6121] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym__valsep,
    STATE(193), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6141] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(194), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6161] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(195), 1,
      sym_comment,
    ACTIONS(481), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6177] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym__valsep,
    STATE(196), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6197] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(197), 1,
      sym_comment,
    ACTIONS(483), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6213] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym__valsep,
    STATE(198), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6233] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    STATE(199), 1,
      sym_comment,
    ACTIONS(487), 3,
      anon_sym_DQUOTE2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [6251] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(200), 1,
      sym_comment,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [6268] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    ACTIONS(491), 1,
      sym_ms_end,
    STATE(201), 1,
      sym_comment,
  [6287] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(493), 1,
      aux_sym__ms0_token1,
    STATE(202), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym__ms_repeat1,
  [6306] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(495), 1,
      aux_sym__ms0_token1,
    STATE(202), 1,
      aux_sym__ms_repeat1,
    STATE(203), 1,
      sym_comment,
  [6325] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(497), 1,
      aux_sym__ms0_token1,
    STATE(204), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym__ms_repeat1,
  [6344] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      aux_sym__ms0_token1,
    STATE(204), 1,
      aux_sym__ms_repeat1,
    STATE(205), 1,
      sym_comment,
  [6363] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym__ms0_token1,
    STATE(206), 1,
      sym_comment,
    STATE(209), 1,
      aux_sym__ms_repeat1,
  [6382] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(503), 1,
      aux_sym__ms0_token1,
    STATE(207), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym__ms_repeat1,
  [6401] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      aux_sym__ms0_token1,
    STATE(207), 1,
      aux_sym__ms_repeat1,
    STATE(208), 1,
      sym_comment,
  [6420] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(507), 1,
      aux_sym__ms0_token1,
    STATE(209), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym__ms_repeat1,
  [6439] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym__valsep,
    STATE(210), 1,
      sym_comment,
    ACTIONS(455), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6456] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(211), 1,
      sym_comment,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [6473] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym__valsep,
    STATE(212), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_entry_token1,
      anon_sym_COMMA,
  [6490] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    STATE(213), 1,
      sym_comment,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [6507] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    ACTIONS(509), 1,
      sym_ms_end,
    STATE(214), 1,
      sym_comment,
  [6526] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    ACTIONS(511), 1,
      sym_ms_end,
    STATE(215), 1,
      sym_comment,
  [6545] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    ACTIONS(513), 1,
      sym_ms_end,
    STATE(216), 1,
      sym_comment,
  [6564] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    ACTIONS(515), 1,
      sym_ms_end,
    STATE(217), 1,
      sym_comment,
  [6583] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    ACTIONS(517), 1,
      sym_ms_end,
    STATE(218), 1,
      sym_comment,
  [6602] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    ACTIONS(519), 1,
      sym_ms_end,
    STATE(219), 1,
      sym_comment,
  [6621] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(521), 1,
      aux_sym__ms0_token1,
    STATE(220), 2,
      sym_comment,
      aux_sym__ms_repeat1,
  [6638] = 6,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
    STATE(221), 1,
      sym_comment,
  [6657] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    ACTIONS(528), 1,
      sym_ms_end,
    STATE(222), 1,
      sym_comment,
  [6676] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      sym_id,
    STATE(223), 1,
      sym_comment,
  [6692] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym_comment,
  [6708] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(534), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      sym_comment,
  [6724] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(536), 1,
      sym_id,
    STATE(226), 1,
      sym_comment,
  [6740] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(538), 1,
      anon_sym_DQUOTE2,
    STATE(227), 1,
      sym_comment,
  [6756] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym_comment,
  [6772] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(542), 1,
      sym_ms_start,
    STATE(229), 1,
      sym_comment,
  [6788] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      sym_comment,
  [6804] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [6820] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      sym_comment,
  [6836] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(550), 1,
      sym_ms_start,
    STATE(233), 1,
      sym_comment,
  [6852] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(552), 1,
      sym_id,
    STATE(234), 1,
      sym_comment,
  [6868] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(554), 1,
      sym_ms_start,
    STATE(235), 1,
      sym_comment,
  [6884] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(556), 1,
      anon_sym_DQUOTE2,
    STATE(236), 1,
      sym_comment,
  [6900] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(558), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_comment,
  [6916] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_comment,
  [6932] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(562), 1,
      sym_ms_start,
    STATE(239), 1,
      sym_comment,
  [6948] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_comment,
  [6964] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    STATE(241), 1,
      sym_comment,
  [6980] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym_comment,
  [6996] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(568), 1,
      anon_sym_DQUOTE2,
    STATE(243), 1,
      sym_comment,
  [7012] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      sym_comment,
  [7028] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(572), 1,
      anon_sym_DQUOTE2,
    STATE(245), 1,
      sym_comment,
  [7044] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    STATE(246), 1,
      sym_comment,
  [7060] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(576), 1,
      aux_sym__ms0_token1,
    STATE(247), 1,
      sym_comment,
  [7076] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(578), 1,
      aux_sym__ms0_token1,
    STATE(248), 1,
      sym_comment,
  [7092] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_PIPE,
    STATE(249), 1,
      sym_comment,
  [7108] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(582), 1,
      anon_sym_SQUOTE,
    STATE(250), 1,
      sym_comment,
  [7124] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(584), 1,
      anon_sym_SQUOTE,
    STATE(251), 1,
      sym_comment,
  [7140] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(586), 1,
      anon_sym_PIPE,
    STATE(252), 1,
      sym_comment,
  [7156] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(588), 1,
      aux_sym__ms0_token1,
    STATE(253), 1,
      sym_comment,
  [7172] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    STATE(254), 1,
      sym_comment,
  [7188] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(592), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      sym_comment,
  [7204] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(594), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      sym_comment,
  [7220] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      aux_sym_entry_token1,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(596), 1,
      aux_sym__ms0_token1,
    STATE(257), 1,
      sym_comment,
  [7236] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(598), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      sym_comment,
  [7252] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(600), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym_comment,
  [7268] = 5,
    ACTIONS(3), 1,
      aux_sym_entry_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym_comment,
  [7284] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [7288] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [7292] = 1,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [7296] = 1,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
  [7300] = 1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
  [7304] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [7308] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [7312] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [7316] = 1,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 74,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 370,
  [SMALL_STATE(19)] = 444,
  [SMALL_STATE(20)] = 518,
  [SMALL_STATE(21)] = 592,
  [SMALL_STATE(22)] = 666,
  [SMALL_STATE(23)] = 740,
  [SMALL_STATE(24)] = 811,
  [SMALL_STATE(25)] = 876,
  [SMALL_STATE(26)] = 941,
  [SMALL_STATE(27)] = 1006,
  [SMALL_STATE(28)] = 1071,
  [SMALL_STATE(29)] = 1136,
  [SMALL_STATE(30)] = 1201,
  [SMALL_STATE(31)] = 1263,
  [SMALL_STATE(32)] = 1325,
  [SMALL_STATE(33)] = 1387,
  [SMALL_STATE(34)] = 1449,
  [SMALL_STATE(35)] = 1511,
  [SMALL_STATE(36)] = 1573,
  [SMALL_STATE(37)] = 1616,
  [SMALL_STATE(38)] = 1661,
  [SMALL_STATE(39)] = 1706,
  [SMALL_STATE(40)] = 1768,
  [SMALL_STATE(41)] = 1831,
  [SMALL_STATE(42)] = 1894,
  [SMALL_STATE(43)] = 1957,
  [SMALL_STATE(44)] = 2020,
  [SMALL_STATE(45)] = 2083,
  [SMALL_STATE(46)] = 2146,
  [SMALL_STATE(47)] = 2209,
  [SMALL_STATE(48)] = 2272,
  [SMALL_STATE(49)] = 2335,
  [SMALL_STATE(50)] = 2398,
  [SMALL_STATE(51)] = 2461,
  [SMALL_STATE(52)] = 2495,
  [SMALL_STATE(53)] = 2529,
  [SMALL_STATE(54)] = 2563,
  [SMALL_STATE(55)] = 2596,
  [SMALL_STATE(56)] = 2629,
  [SMALL_STATE(57)] = 2662,
  [SMALL_STATE(58)] = 2695,
  [SMALL_STATE(59)] = 2728,
  [SMALL_STATE(60)] = 2761,
  [SMALL_STATE(61)] = 2794,
  [SMALL_STATE(62)] = 2826,
  [SMALL_STATE(63)] = 2858,
  [SMALL_STATE(64)] = 2890,
  [SMALL_STATE(65)] = 2922,
  [SMALL_STATE(66)] = 2954,
  [SMALL_STATE(67)] = 2986,
  [SMALL_STATE(68)] = 3018,
  [SMALL_STATE(69)] = 3050,
  [SMALL_STATE(70)] = 3082,
  [SMALL_STATE(71)] = 3136,
  [SMALL_STATE(72)] = 3168,
  [SMALL_STATE(73)] = 3204,
  [SMALL_STATE(74)] = 3234,
  [SMALL_STATE(75)] = 3264,
  [SMALL_STATE(76)] = 3294,
  [SMALL_STATE(77)] = 3330,
  [SMALL_STATE(78)] = 3368,
  [SMALL_STATE(79)] = 3406,
  [SMALL_STATE(80)] = 3448,
  [SMALL_STATE(81)] = 3490,
  [SMALL_STATE(82)] = 3532,
  [SMALL_STATE(83)] = 3562,
  [SMALL_STATE(84)] = 3594,
  [SMALL_STATE(85)] = 3636,
  [SMALL_STATE(86)] = 3678,
  [SMALL_STATE(87)] = 3710,
  [SMALL_STATE(88)] = 3749,
  [SMALL_STATE(89)] = 3776,
  [SMALL_STATE(90)] = 3803,
  [SMALL_STATE(91)] = 3830,
  [SMALL_STATE(92)] = 3857,
  [SMALL_STATE(93)] = 3888,
  [SMALL_STATE(94)] = 3915,
  [SMALL_STATE(95)] = 3954,
  [SMALL_STATE(96)] = 3990,
  [SMALL_STATE(97)] = 4015,
  [SMALL_STATE(98)] = 4040,
  [SMALL_STATE(99)] = 4065,
  [SMALL_STATE(100)] = 4090,
  [SMALL_STATE(101)] = 4115,
  [SMALL_STATE(102)] = 4140,
  [SMALL_STATE(103)] = 4161,
  [SMALL_STATE(104)] = 4186,
  [SMALL_STATE(105)] = 4211,
  [SMALL_STATE(106)] = 4236,
  [SMALL_STATE(107)] = 4261,
  [SMALL_STATE(108)] = 4286,
  [SMALL_STATE(109)] = 4311,
  [SMALL_STATE(110)] = 4336,
  [SMALL_STATE(111)] = 4361,
  [SMALL_STATE(112)] = 4386,
  [SMALL_STATE(113)] = 4411,
  [SMALL_STATE(114)] = 4432,
  [SMALL_STATE(115)] = 4457,
  [SMALL_STATE(116)] = 4482,
  [SMALL_STATE(117)] = 4503,
  [SMALL_STATE(118)] = 4528,
  [SMALL_STATE(119)] = 4547,
  [SMALL_STATE(120)] = 4572,
  [SMALL_STATE(121)] = 4597,
  [SMALL_STATE(122)] = 4616,
  [SMALL_STATE(123)] = 4635,
  [SMALL_STATE(124)] = 4654,
  [SMALL_STATE(125)] = 4679,
  [SMALL_STATE(126)] = 4704,
  [SMALL_STATE(127)] = 4729,
  [SMALL_STATE(128)] = 4754,
  [SMALL_STATE(129)] = 4779,
  [SMALL_STATE(130)] = 4798,
  [SMALL_STATE(131)] = 4823,
  [SMALL_STATE(132)] = 4842,
  [SMALL_STATE(133)] = 4861,
  [SMALL_STATE(134)] = 4880,
  [SMALL_STATE(135)] = 4899,
  [SMALL_STATE(136)] = 4924,
  [SMALL_STATE(137)] = 4949,
  [SMALL_STATE(138)] = 4968,
  [SMALL_STATE(139)] = 4993,
  [SMALL_STATE(140)] = 5012,
  [SMALL_STATE(141)] = 5031,
  [SMALL_STATE(142)] = 5050,
  [SMALL_STATE(143)] = 5069,
  [SMALL_STATE(144)] = 5088,
  [SMALL_STATE(145)] = 5107,
  [SMALL_STATE(146)] = 5126,
  [SMALL_STATE(147)] = 5145,
  [SMALL_STATE(148)] = 5170,
  [SMALL_STATE(149)] = 5196,
  [SMALL_STATE(150)] = 5222,
  [SMALL_STATE(151)] = 5245,
  [SMALL_STATE(152)] = 5268,
  [SMALL_STATE(153)] = 5291,
  [SMALL_STATE(154)] = 5314,
  [SMALL_STATE(155)] = 5337,
  [SMALL_STATE(156)] = 5360,
  [SMALL_STATE(157)] = 5381,
  [SMALL_STATE(158)] = 5404,
  [SMALL_STATE(159)] = 5429,
  [SMALL_STATE(160)] = 5452,
  [SMALL_STATE(161)] = 5475,
  [SMALL_STATE(162)] = 5500,
  [SMALL_STATE(163)] = 5523,
  [SMALL_STATE(164)] = 5546,
  [SMALL_STATE(165)] = 5571,
  [SMALL_STATE(166)] = 5596,
  [SMALL_STATE(167)] = 5619,
  [SMALL_STATE(168)] = 5642,
  [SMALL_STATE(169)] = 5665,
  [SMALL_STATE(170)] = 5685,
  [SMALL_STATE(171)] = 5705,
  [SMALL_STATE(172)] = 5721,
  [SMALL_STATE(173)] = 5741,
  [SMALL_STATE(174)] = 5761,
  [SMALL_STATE(175)] = 5781,
  [SMALL_STATE(176)] = 5801,
  [SMALL_STATE(177)] = 5817,
  [SMALL_STATE(178)] = 5837,
  [SMALL_STATE(179)] = 5853,
  [SMALL_STATE(180)] = 5873,
  [SMALL_STATE(181)] = 5893,
  [SMALL_STATE(182)] = 5913,
  [SMALL_STATE(183)] = 5929,
  [SMALL_STATE(184)] = 5945,
  [SMALL_STATE(185)] = 5965,
  [SMALL_STATE(186)] = 5985,
  [SMALL_STATE(187)] = 6001,
  [SMALL_STATE(188)] = 6021,
  [SMALL_STATE(189)] = 6041,
  [SMALL_STATE(190)] = 6061,
  [SMALL_STATE(191)] = 6081,
  [SMALL_STATE(192)] = 6101,
  [SMALL_STATE(193)] = 6121,
  [SMALL_STATE(194)] = 6141,
  [SMALL_STATE(195)] = 6161,
  [SMALL_STATE(196)] = 6177,
  [SMALL_STATE(197)] = 6197,
  [SMALL_STATE(198)] = 6213,
  [SMALL_STATE(199)] = 6233,
  [SMALL_STATE(200)] = 6251,
  [SMALL_STATE(201)] = 6268,
  [SMALL_STATE(202)] = 6287,
  [SMALL_STATE(203)] = 6306,
  [SMALL_STATE(204)] = 6325,
  [SMALL_STATE(205)] = 6344,
  [SMALL_STATE(206)] = 6363,
  [SMALL_STATE(207)] = 6382,
  [SMALL_STATE(208)] = 6401,
  [SMALL_STATE(209)] = 6420,
  [SMALL_STATE(210)] = 6439,
  [SMALL_STATE(211)] = 6456,
  [SMALL_STATE(212)] = 6473,
  [SMALL_STATE(213)] = 6490,
  [SMALL_STATE(214)] = 6507,
  [SMALL_STATE(215)] = 6526,
  [SMALL_STATE(216)] = 6545,
  [SMALL_STATE(217)] = 6564,
  [SMALL_STATE(218)] = 6583,
  [SMALL_STATE(219)] = 6602,
  [SMALL_STATE(220)] = 6621,
  [SMALL_STATE(221)] = 6638,
  [SMALL_STATE(222)] = 6657,
  [SMALL_STATE(223)] = 6676,
  [SMALL_STATE(224)] = 6692,
  [SMALL_STATE(225)] = 6708,
  [SMALL_STATE(226)] = 6724,
  [SMALL_STATE(227)] = 6740,
  [SMALL_STATE(228)] = 6756,
  [SMALL_STATE(229)] = 6772,
  [SMALL_STATE(230)] = 6788,
  [SMALL_STATE(231)] = 6804,
  [SMALL_STATE(232)] = 6820,
  [SMALL_STATE(233)] = 6836,
  [SMALL_STATE(234)] = 6852,
  [SMALL_STATE(235)] = 6868,
  [SMALL_STATE(236)] = 6884,
  [SMALL_STATE(237)] = 6900,
  [SMALL_STATE(238)] = 6916,
  [SMALL_STATE(239)] = 6932,
  [SMALL_STATE(240)] = 6948,
  [SMALL_STATE(241)] = 6964,
  [SMALL_STATE(242)] = 6980,
  [SMALL_STATE(243)] = 6996,
  [SMALL_STATE(244)] = 7012,
  [SMALL_STATE(245)] = 7028,
  [SMALL_STATE(246)] = 7044,
  [SMALL_STATE(247)] = 7060,
  [SMALL_STATE(248)] = 7076,
  [SMALL_STATE(249)] = 7092,
  [SMALL_STATE(250)] = 7108,
  [SMALL_STATE(251)] = 7124,
  [SMALL_STATE(252)] = 7140,
  [SMALL_STATE(253)] = 7156,
  [SMALL_STATE(254)] = 7172,
  [SMALL_STATE(255)] = 7188,
  [SMALL_STATE(256)] = 7204,
  [SMALL_STATE(257)] = 7220,
  [SMALL_STATE(258)] = 7236,
  [SMALL_STATE(259)] = 7252,
  [SMALL_STATE(260)] = 7268,
  [SMALL_STATE(261)] = 7284,
  [SMALL_STATE(262)] = 7288,
  [SMALL_STATE(263)] = 7292,
  [SMALL_STATE(264)] = 7296,
  [SMALL_STATE(265)] = 7300,
  [SMALL_STATE(266)] = 7304,
  [SMALL_STATE(267)] = 7308,
  [SMALL_STATE(268)] = 7312,
  [SMALL_STATE(269)] = 7316,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(42),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(86),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(30),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(141),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(143),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(163),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(141),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(247),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(235),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 31),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(234),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(84),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(26),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(155),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(79),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(155),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(143),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(163),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(247),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(235),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1, .production_id = 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 20),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 29),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted, 2, .production_id = 11),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted, 2, .production_id = 11),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parened, 3, .production_id = 16),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parened, 3, .production_id = 16),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms0, 3, .production_id = 12),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms0, 3, .production_id = 12),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multistring, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multistring, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 5, .production_id = 25),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 5, .production_id = 25),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 6, .production_id = 32),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 6, .production_id = 32),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valsep, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valsep, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(29),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 2, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3, .production_id = 9),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 3, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 1),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(223),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(81),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(226),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(85),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(26),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(27),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, .production_id = 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3, .production_id = 9),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 13),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 15),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 8),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 14),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 23),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 7),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2, .production_id = 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(28),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(199),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 30),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 24),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 7, .production_id = 35),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 26),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 19),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 18),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 17),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 27),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 28),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 2, .production_id = 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 10),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 33),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 7, .production_id = 34),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2), SHIFT_REPEAT(225),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [590] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fitzjson_external_scanner_create(void);
void tree_sitter_fitzjson_external_scanner_destroy(void *);
bool tree_sitter_fitzjson_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fitzjson_external_scanner_serialize(void *, char *);
void tree_sitter_fitzjson_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fitzjson(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fitzjson_external_scanner_create,
      tree_sitter_fitzjson_external_scanner_destroy,
      tree_sitter_fitzjson_external_scanner_scan,
      tree_sitter_fitzjson_external_scanner_serialize,
      tree_sitter_fitzjson_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
