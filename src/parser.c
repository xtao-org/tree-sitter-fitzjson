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
  [aux_sym_string_content_token1] = "string_content_token1",
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
    .visible = false,
    .named = false,
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
  [79] = 36,
  [80] = 38,
  [81] = 37,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 83,
  [87] = 87,
  [88] = 83,
  [89] = 52,
  [90] = 90,
  [91] = 62,
  [92] = 51,
  [93] = 53,
  [94] = 72,
  [95] = 53,
  [96] = 51,
  [97] = 52,
  [98] = 98,
  [99] = 99,
  [100] = 60,
  [101] = 63,
  [102] = 75,
  [103] = 56,
  [104] = 55,
  [105] = 65,
  [106] = 74,
  [107] = 59,
  [108] = 70,
  [109] = 68,
  [110] = 54,
  [111] = 58,
  [112] = 71,
  [113] = 73,
  [114] = 57,
  [115] = 61,
  [116] = 64,
  [117] = 67,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 58,
  [122] = 67,
  [123] = 123,
  [124] = 63,
  [125] = 125,
  [126] = 126,
  [127] = 65,
  [128] = 55,
  [129] = 57,
  [130] = 54,
  [131] = 70,
  [132] = 59,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 56,
  [138] = 138,
  [139] = 139,
  [140] = 61,
  [141] = 68,
  [142] = 71,
  [143] = 143,
  [144] = 60,
  [145] = 64,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 158,
  [161] = 161,
  [162] = 162,
  [163] = 162,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 139,
  [173] = 173,
  [174] = 174,
  [175] = 98,
  [176] = 159,
  [177] = 177,
  [178] = 178,
  [179] = 158,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 164,
  [185] = 185,
  [186] = 169,
  [187] = 169,
  [188] = 159,
  [189] = 162,
  [190] = 119,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 164,
  [195] = 147,
  [196] = 162,
  [197] = 133,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 202,
  [204] = 120,
  [205] = 205,
  [206] = 206,
  [207] = 206,
  [208] = 205,
  [209] = 206,
  [210] = 205,
  [211] = 206,
  [212] = 205,
  [213] = 143,
  [214] = 214,
  [215] = 202,
  [216] = 214,
  [217] = 126,
  [218] = 202,
  [219] = 214,
  [220] = 220,
  [221] = 214,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 224,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 234,
  [236] = 225,
  [237] = 226,
  [238] = 231,
  [239] = 225,
  [240] = 224,
  [241] = 231,
  [242] = 226,
  [243] = 225,
  [244] = 226,
  [245] = 231,
  [246] = 234,
  [247] = 223,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 250,
  [252] = 252,
  [253] = 248,
  [254] = 254,
  [255] = 250,
  [256] = 223,
  [257] = 248,
  [258] = 248,
  [259] = 250,
  [260] = 223,
  [261] = 58,
  [262] = 54,
  [263] = 60,
  [264] = 59,
  [265] = 57,
  [266] = 56,
  [267] = 55,
  [268] = 268,
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
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(63);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (sym_id_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead)) ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_id_character_set_2(lookahead)) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_id_character_set_2(lookahead)) ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(63);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (sym_id_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (sym_id_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (sym_id_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_entry_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'N') ADVANCE(64);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(43);
      if (sym_id_character_set_4(lookahead)) ADVANCE(62);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(51);
      if (sym_id_character_set_4(lookahead)) ADVANCE(62);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(84);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(85);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(50);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(58);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(55);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(57);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(83);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(52);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(48);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(49);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(59);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(47);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(61);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(46);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(53);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'y') ADVANCE(64);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_id);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_disabled);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_id_character_set_3(lookahead)) ADVANCE(62);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 30},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 29},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 30},
  [120] = {.lex_state = 30},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 30},
  [124] = {.lex_state = 30},
  [125] = {.lex_state = 30},
  [126] = {.lex_state = 30},
  [127] = {.lex_state = 30},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 30},
  [130] = {.lex_state = 30},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 30},
  [134] = {.lex_state = 30},
  [135] = {.lex_state = 30},
  [136] = {.lex_state = 30},
  [137] = {.lex_state = 30},
  [138] = {.lex_state = 30},
  [139] = {.lex_state = 30},
  [140] = {.lex_state = 30},
  [141] = {.lex_state = 30},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 30},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 30},
  [146] = {.lex_state = 30},
  [147] = {.lex_state = 30},
  [148] = {.lex_state = 30},
  [149] = {.lex_state = 30},
  [150] = {.lex_state = 30},
  [151] = {.lex_state = 30},
  [152] = {.lex_state = 30},
  [153] = {.lex_state = 30},
  [154] = {.lex_state = 30},
  [155] = {.lex_state = 30},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 30},
  [158] = {.lex_state = 30},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 30},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 30},
  [165] = {.lex_state = 30},
  [166] = {.lex_state = 30},
  [167] = {.lex_state = 30},
  [168] = {.lex_state = 30},
  [169] = {.lex_state = 30},
  [170] = {.lex_state = 30},
  [171] = {.lex_state = 30},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 30},
  [174] = {.lex_state = 30},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 30},
  [177] = {.lex_state = 30},
  [178] = {.lex_state = 30},
  [179] = {.lex_state = 30},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 30},
  [182] = {.lex_state = 30},
  [183] = {.lex_state = 30},
  [184] = {.lex_state = 30},
  [185] = {.lex_state = 30},
  [186] = {.lex_state = 30},
  [187] = {.lex_state = 30},
  [188] = {.lex_state = 30},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 30},
  [192] = {.lex_state = 30},
  [193] = {.lex_state = 30},
  [194] = {.lex_state = 30},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 30},
  [201] = {.lex_state = 30},
  [202] = {.lex_state = 90, .external_lex_state = 2},
  [203] = {.lex_state = 90, .external_lex_state = 2},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 90},
  [206] = {.lex_state = 90},
  [207] = {.lex_state = 90},
  [208] = {.lex_state = 90},
  [209] = {.lex_state = 90},
  [210] = {.lex_state = 90},
  [211] = {.lex_state = 90},
  [212] = {.lex_state = 90},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 90, .external_lex_state = 2},
  [215] = {.lex_state = 90, .external_lex_state = 2},
  [216] = {.lex_state = 90, .external_lex_state = 2},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 90, .external_lex_state = 2},
  [219] = {.lex_state = 90, .external_lex_state = 2},
  [220] = {.lex_state = 90},
  [221] = {.lex_state = 90, .external_lex_state = 2},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 90},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0, .external_lex_state = 3},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0, .external_lex_state = 3},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0, .external_lex_state = 3},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 90},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 90},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 90},
  [258] = {.lex_state = 90},
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
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
    [sym_ms_start] = ACTIONS(1),
    [sym_ms_end] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_top] = STATE(249),
    [sym_entry] = STATE(161),
    [sym_path] = STATE(61),
    [sym_decorator] = STATE(75),
    [sym_value] = STATE(228),
    [sym__plainval] = STATE(172),
    [sym_list] = STATE(61),
    [sym_map] = STATE(61),
    [sym_string] = STATE(148),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(61),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(1),
    [aux_sym_top_repeat1] = STATE(41),
    [aux_sym_entry_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(17),
    [sym_disabled] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [2] = {
    [sym_item] = STATE(201),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(2),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(41),
    [sym_id] = ACTIONS(44),
    [sym_disabled] = ACTIONS(47),
    [sym_number] = ACTIONS(50),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [anon_sym_null] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [3] = {
    [sym_item] = STATE(170),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(3),
    [aux_sym_top_repeat2] = STATE(11),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [4] = {
    [sym_item] = STATE(188),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(4),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [5] = {
    [sym_item] = STATE(184),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(5),
    [aux_sym_top_repeat2] = STATE(4),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [6] = {
    [sym_item] = STATE(176),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(6),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [7] = {
    [sym_item] = STATE(194),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(7),
    [aux_sym_top_repeat2] = STATE(6),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [8] = {
    [sym_item] = STATE(182),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(8),
    [aux_sym_top_repeat2] = STATE(9),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [9] = {
    [sym_item] = STATE(171),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(9),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [10] = {
    [sym_item] = STATE(159),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(10),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [11] = {
    [sym_item] = STATE(166),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(11),
    [aux_sym_top_repeat2] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [12] = {
    [sym_item] = STATE(164),
    [sym_path] = STATE(140),
    [sym_decorator] = STATE(75),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(140),
    [sym_map] = STATE(140),
    [sym_string] = STATE(145),
    [sym_jsonstring] = STATE(137),
    [sym__primitive] = STATE(140),
    [sym_multistring] = STATE(137),
    [sym__ms0] = STATE(129),
    [sym__ms] = STATE(129),
    [sym_comment] = STATE(12),
    [aux_sym_top_repeat2] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(100), 1,
      sym_disabled,
    STATE(13), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(136), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [71] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(14), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(139), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(165), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [142] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(15), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(139), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(191), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [213] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(16), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(139), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(185), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [284] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(17), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(139), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(193), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [355] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(18), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(139), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(181), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [426] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(19), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(139), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(178), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [497] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(139), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(177), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [568] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(102), 1,
      sym_id,
    ACTIONS(104), 1,
      sym_disabled,
    ACTIONS(106), 1,
      sym_number,
    STATE(21), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(149), 1,
      sym_string,
    STATE(190), 1,
      sym__plainval,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [639] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(22), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(139), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(168), 1,
      sym_value,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [710] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(23), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_entry_repeat1,
    STATE(75), 1,
      sym_decorator,
    STATE(119), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [778] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(110), 1,
      sym_id,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    STATE(24), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(252), 1,
      sym__plainval,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [840] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_id,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(254), 1,
      sym__plainval,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [902] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_id,
    ACTIONS(130), 1,
      sym_disabled,
    ACTIONS(132), 1,
      sym_number,
    ACTIONS(134), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_BQUOTE,
    STATE(26), 1,
      sym_comment,
    STATE(113), 1,
      sym__plainval,
    STATE(116), 1,
      sym_string,
    STATE(103), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(114), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(138), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(115), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [964] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(144), 1,
      sym_disabled,
    STATE(27), 1,
      sym_comment,
    STATE(143), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1026] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_id,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    ACTIONS(146), 1,
      sym_disabled,
    STATE(28), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(213), 1,
      sym__plainval,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1088] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_id,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    ACTIONS(148), 1,
      sym_disabled,
    STATE(29), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(73), 1,
      sym__plainval,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1150] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(30), 1,
      sym_comment,
    STATE(123), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1209] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(31), 1,
      sym_comment,
    STATE(120), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1268] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(32), 1,
      sym_comment,
    STATE(134), 1,
      sym__plainval,
    STATE(145), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1327] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_id,
    ACTIONS(132), 1,
      sym_number,
    ACTIONS(134), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_BQUOTE,
    STATE(33), 1,
      sym_comment,
    STATE(106), 1,
      sym__plainval,
    STATE(116), 1,
      sym_string,
    STATE(103), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(114), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(138), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(115), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1386] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_id,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    STATE(34), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(74), 1,
      sym__plainval,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1445] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_id,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    STATE(35), 1,
      sym_comment,
    STATE(64), 1,
      sym_string,
    STATE(204), 1,
      sym__plainval,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1504] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(36), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(158), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(150), 10,
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
  [1544] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(166), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(160), 10,
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
  [1586] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_path_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(170), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(168), 10,
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
  [1628] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(174), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      sym_id,
    ACTIONS(180), 1,
      sym_disabled,
    ACTIONS(183), 1,
      sym_number,
    ACTIONS(186), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(200), 1,
      sym_entry,
    ACTIONS(172), 2,
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
  [1687] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(186), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1747] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(41), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(192), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1807] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_top_repeat1,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(179), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1867] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_top_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(158), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1927] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_top_repeat1,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(160), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [1987] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(187), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2047] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(169), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2107] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(174), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2167] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    STATE(48), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_top_repeat1,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(173), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2227] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_top_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(167), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2287] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(19), 1,
      sym_disabled,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      sym_number,
    STATE(47), 1,
      aux_sym_top_repeat1,
    STATE(50), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(154), 1,
      sym_string,
    STATE(183), 1,
      sym_entry,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2347] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_comment,
    ACTIONS(224), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(222), 12,
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
  [2378] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(228), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(226), 12,
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
  [2409] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(232), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 12,
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
  [2440] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(236), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 11,
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
  [2470] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(240), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(238), 11,
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
  [2500] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(244), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(242), 11,
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
  [2530] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(248), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 11,
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
  [2560] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_comment,
    ACTIONS(252), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 11,
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
  [2590] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(256), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(254), 11,
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
  [2620] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_comment,
    ACTIONS(260), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(258), 11,
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
  [2650] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(166), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(160), 10,
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
  [2679] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(264), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(262), 10,
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
  [2708] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(268), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(266), 10,
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
  [2737] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(272), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(270), 10,
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
  [2766] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(65), 1,
      sym_comment,
    ACTIONS(276), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(274), 10,
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
  [2795] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_comment,
    ACTIONS(278), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 10,
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
  [2824] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(67), 1,
      sym_comment,
    ACTIONS(282), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 10,
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
  [2853] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      sym_comment,
    ACTIONS(286), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 10,
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
  [2882] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(104), 1,
      sym_disabled,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(288), 1,
      sym_id,
    ACTIONS(290), 1,
      sym_number,
    STATE(69), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(157), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [2933] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(70), 1,
      sym_comment,
    ACTIONS(294), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(292), 10,
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
  [2962] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(71), 1,
      sym_comment,
    ACTIONS(298), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(296), 10,
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
  [2991] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(302), 1,
      anon_sym_AT,
    STATE(75), 1,
      sym_decorator,
    STATE(72), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(305), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(300), 7,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3024] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(309), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(307), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3051] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(311), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3078] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      sym_comment,
    ACTIONS(317), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(315), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3105] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(76), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(89), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(150), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3138] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(170), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(89), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(168), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3173] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(89), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(160), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3208] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    STATE(79), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(97), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(158), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3240] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    STATE(97), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(170), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3274] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    STATE(97), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(166), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3308] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(341), 1,
      sym_id,
    ACTIONS(343), 1,
      sym_number,
    STATE(82), 1,
      sym_comment,
    STATE(152), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [3347] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    ACTIONS(345), 1,
      sym_id,
    ACTIONS(347), 1,
      sym_number,
    STATE(83), 1,
      sym_comment,
    STATE(240), 1,
      sym_string,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
  [3386] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      aux_sym_entry_token1,
    ACTIONS(355), 1,
      anon_sym_DOT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(126), 1,
      sym_pipe,
    STATE(153), 1,
      aux_sym_entry_repeat2,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
  [3427] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(359), 1,
      sym_id,
    ACTIONS(361), 1,
      sym_number,
    STATE(85), 1,
      sym_comment,
    STATE(150), 1,
      sym_string,
    STATE(129), 2,
      sym__ms0,
      sym__ms,
    STATE(137), 2,
      sym_jsonstring,
      sym_multistring,
  [3466] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    ACTIONS(363), 1,
      sym_id,
    ACTIONS(365), 1,
      sym_number,
    STATE(86), 1,
      sym_comment,
    STATE(224), 1,
      sym_string,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
  [3505] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(355), 1,
      anon_sym_DOT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      aux_sym_entry_token1,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(87), 1,
      sym_comment,
    STATE(126), 1,
      sym_pipe,
    STATE(155), 1,
      aux_sym_entry_repeat2,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
  [3546] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    ACTIONS(371), 1,
      sym_id,
    ACTIONS(373), 1,
      sym_number,
    STATE(88), 1,
      sym_comment,
    STATE(229), 1,
      sym_string,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(57), 2,
      sym__ms0,
      sym__ms,
  [3585] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_comment,
    ACTIONS(228), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(226), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3609] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_comment,
    ACTIONS(375), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3633] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_comment,
    ACTIONS(264), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3657] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      sym_comment,
    ACTIONS(224), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(222), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3681] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_comment,
    ACTIONS(232), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(230), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3705] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(377), 1,
      anon_sym_AT,
    STATE(102), 1,
      sym_decorator,
    ACTIONS(305), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(94), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(300), 5,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3733] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(232), 7,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3756] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(224), 7,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3779] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(228), 7,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3802] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      anon_sym_PIPE,
    STATE(126), 1,
      sym_pipe,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    STATE(98), 2,
      sym_comment,
      aux_sym_entry_repeat2,
    ACTIONS(385), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3829] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      anon_sym_SQUOTE,
    ACTIONS(393), 1,
      anon_sym_BQUOTE,
    STATE(99), 1,
      sym_comment,
    STATE(269), 1,
      sym_string,
    STATE(265), 2,
      sym__ms0,
      sym__ms,
    STATE(266), 2,
      sym_jsonstring,
      sym_multistring,
  [3862] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_comment,
    ACTIONS(260), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(258), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3884] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_comment,
    ACTIONS(268), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(266), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3906] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      sym_comment,
    ACTIONS(317), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(315), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3928] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(242), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3950] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_comment,
    ACTIONS(240), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(238), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3972] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_comment,
    ACTIONS(276), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(274), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3994] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(106), 1,
      sym_comment,
    ACTIONS(313), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(311), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4016] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(107), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(254), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4038] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      sym_comment,
    ACTIONS(294), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(292), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4060] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      sym_comment,
    ACTIONS(286), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(284), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4082] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      sym_comment,
    ACTIONS(236), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(234), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4104] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(250), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4126] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      sym_comment,
    ACTIONS(298), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(296), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4148] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(113), 1,
      sym_comment,
    ACTIONS(309), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(307), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4170] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      sym_comment,
    ACTIONS(248), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(246), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4192] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(160), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4214] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(116), 1,
      sym_comment,
    ACTIONS(272), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(270), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4236] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      sym_comment,
    ACTIONS(282), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(280), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4258] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(118), 1,
      sym_comment,
    STATE(126), 1,
      sym_pipe,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(397), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4285] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_comment,
    STATE(126), 1,
      sym_pipe,
    STATE(133), 1,
      aux_sym_entry_repeat2,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(401), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4312] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(405), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4333] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(252), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4354] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(282), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4375] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(123), 1,
      sym_comment,
    STATE(126), 1,
      sym_pipe,
    STATE(135), 1,
      aux_sym_entry_repeat2,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(409), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4402] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      sym_comment,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(268), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4423] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(125), 1,
      sym_comment,
    STATE(126), 1,
      sym_pipe,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(413), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4450] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(126), 1,
      sym_comment,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(417), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4471] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(276), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4492] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(240), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4513] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(248), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4534] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(236), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4555] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(131), 1,
      sym_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(294), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4576] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(256), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4597] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(133), 1,
      sym_comment,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(421), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4624] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(134), 1,
      sym_comment,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(425), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4651] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(135), 1,
      sym_comment,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(429), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4678] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(126), 1,
      sym_pipe,
    STATE(136), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_entry_repeat2,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(433), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4705] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(137), 1,
      sym_comment,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(244), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4726] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(125), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(138), 1,
      sym_comment,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(437), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4753] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(126), 1,
      sym_pipe,
    STATE(139), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_entry_repeat2,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(441), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4780] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(140), 1,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(166), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4801] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(141), 1,
      sym_comment,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(286), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4822] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(142), 1,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(298), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4843] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(143), 1,
      sym_comment,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(445), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4864] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(144), 1,
      sym_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(260), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4885] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(272), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4906] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(146), 1,
      sym_comment,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(449), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4933] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(147), 1,
      sym_comment,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(453), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4960] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      aux_sym_entry_token1,
    STATE(126), 1,
      sym_pipe,
    STATE(148), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_entry_repeat2,
  [4988] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      aux_sym_entry_token1,
    STATE(126), 1,
      sym_pipe,
    STATE(149), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_entry_repeat2,
  [5016] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(457), 1,
      aux_sym_entry_token1,
    STATE(126), 1,
      sym_pipe,
    STATE(150), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_entry_repeat2,
  [5041] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(459), 1,
      anon_sym_COLON,
    ACTIONS(461), 1,
      aux_sym_entry_token1,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
  [5066] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(465), 1,
      aux_sym_entry_token1,
    STATE(126), 1,
      sym_pipe,
    STATE(152), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_entry_repeat2,
  [5091] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_COLON,
    ACTIONS(469), 1,
      aux_sym_entry_token1,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(153), 1,
      sym_comment,
  [5116] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      aux_sym_entry_token1,
    STATE(126), 1,
      sym_pipe,
    STATE(154), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_entry_repeat2,
  [5141] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(473), 1,
      aux_sym_entry_token1,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(155), 1,
      sym_comment,
  [5166] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(475), 1,
      anon_sym_COLON,
    ACTIONS(477), 1,
      aux_sym_entry_token1,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(126), 1,
      sym_pipe,
    STATE(156), 1,
      sym_comment,
  [5191] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      aux_sym_entry_token1,
    STATE(126), 1,
      sym_pipe,
    STATE(153), 1,
      aux_sym_entry_repeat2,
    STATE(157), 1,
      sym_comment,
  [5216] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym__valsep,
    STATE(158), 1,
      sym_comment,
  [5238] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym__valsep,
    STATE(159), 1,
      sym_comment,
  [5260] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym__valsep,
    STATE(160), 1,
      sym_comment,
  [5282] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym__valsep,
    STATE(161), 1,
      sym_comment,
  [5304] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(162), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_string_content_repeat1,
    STATE(243), 1,
      sym_string_content,
    ACTIONS(493), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5324] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_string_content_repeat1,
    STATE(239), 1,
      sym_string_content,
    ACTIONS(493), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5344] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(164), 1,
      sym_comment,
  [5366] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(499), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5384] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__valsep,
    STATE(166), 1,
      sym_comment,
  [5406] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym__valsep,
    STATE(167), 1,
      sym_comment,
  [5428] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(168), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(507), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5446] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym__valsep,
    STATE(169), 1,
      sym_comment,
  [5468] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym__valsep,
    STATE(170), 1,
      sym_comment,
  [5490] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym__valsep,
    STATE(171), 1,
      sym_comment,
  [5512] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    STATE(172), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_entry_repeat2,
    STATE(217), 1,
      sym_pipe,
  [5534] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym__valsep,
    STATE(173), 1,
      sym_comment,
  [5556] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym__valsep,
    STATE(174), 1,
      sym_comment,
  [5578] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 1,
      anon_sym_PIPE,
    STATE(217), 1,
      sym_pipe,
    STATE(175), 2,
      sym_comment,
      aux_sym_entry_repeat2,
  [5598] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(176), 1,
      sym_comment,
  [5620] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(177), 1,
      sym_comment,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(524), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5638] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(178), 1,
      sym_comment,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5656] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym__valsep,
    STATE(179), 1,
      sym_comment,
  [5678] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(532), 1,
      anon_sym_DQUOTE2,
    ACTIONS(534), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
    STATE(180), 2,
      sym_comment,
      aux_sym_string_content_repeat1,
  [5696] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(181), 1,
      sym_comment,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(539), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5714] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym__valsep,
    STATE(182), 1,
      sym_comment,
  [5736] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym__valsep,
    STATE(183), 1,
      sym_comment,
  [5758] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(184), 1,
      sym_comment,
  [5780] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(185), 1,
      sym_comment,
    ACTIONS(543), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(545), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5798] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym__valsep,
    STATE(186), 1,
      sym_comment,
  [5820] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym__valsep,
    STATE(187), 1,
      sym_comment,
  [5842] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(188), 1,
      sym_comment,
  [5864] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(189), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_string_content_repeat1,
    STATE(225), 1,
      sym_string_content,
    ACTIONS(493), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5884] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    STATE(190), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_entry_repeat2,
    STATE(217), 1,
      sym_pipe,
  [5906] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(191), 1,
      sym_comment,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(555), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5924] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym__valsep,
    STATE(192), 1,
      sym_comment,
  [5946] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(193), 1,
      sym_comment,
    ACTIONS(559), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(561), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5964] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym__valsep,
    STATE(194), 1,
      sym_comment,
  [5986] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    STATE(175), 1,
      aux_sym_entry_repeat2,
    STATE(195), 1,
      sym_comment,
    STATE(217), 1,
      sym_pipe,
  [6008] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(196), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_string_content_repeat1,
    STATE(236), 1,
      sym_string_content,
    ACTIONS(493), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [6028] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    STATE(175), 1,
      aux_sym_entry_repeat2,
    STATE(197), 1,
      sym_comment,
    STATE(217), 1,
      sym_pipe,
  [6050] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(565), 1,
      anon_sym_DQUOTE2,
    STATE(180), 1,
      aux_sym_string_content_repeat1,
    STATE(198), 1,
      sym_comment,
    ACTIONS(493), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [6070] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    STATE(199), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_DQUOTE2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [6085] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym_entry_token1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym__valsep,
    STATE(200), 1,
      sym_comment,
  [6104] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym_entry_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym__valsep,
    STATE(201), 1,
      sym_comment,
  [6123] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    ACTIONS(571), 1,
      sym_ms_end,
    STATE(202), 1,
      sym_comment,
  [6139] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    ACTIONS(573), 1,
      sym_ms_end,
    STATE(203), 1,
      sym_comment,
  [6155] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(204), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [6169] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(575), 1,
      aux_sym__ms0_token1,
    STATE(205), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym__ms_repeat1,
  [6185] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(577), 1,
      aux_sym__ms0_token1,
    STATE(206), 1,
      sym_comment,
    STATE(212), 1,
      aux_sym__ms_repeat1,
  [6201] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(579), 1,
      aux_sym__ms0_token1,
    STATE(205), 1,
      aux_sym__ms_repeat1,
    STATE(207), 1,
      sym_comment,
  [6217] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      aux_sym__ms0_token1,
    STATE(208), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym__ms_repeat1,
  [6233] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(583), 1,
      aux_sym__ms0_token1,
    STATE(208), 1,
      aux_sym__ms_repeat1,
    STATE(209), 1,
      sym_comment,
  [6249] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(585), 1,
      aux_sym__ms0_token1,
    STATE(210), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym__ms_repeat1,
  [6265] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(587), 1,
      aux_sym__ms0_token1,
    STATE(210), 1,
      aux_sym__ms_repeat1,
    STATE(211), 1,
      sym_comment,
  [6281] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(589), 1,
      aux_sym__ms0_token1,
    STATE(212), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym__ms_repeat1,
  [6297] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(213), 1,
      sym_comment,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [6311] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    ACTIONS(591), 1,
      sym_ms_end,
    STATE(214), 1,
      sym_comment,
  [6327] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    ACTIONS(593), 1,
      sym_ms_end,
    STATE(215), 1,
      sym_comment,
  [6343] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    ACTIONS(595), 1,
      sym_ms_end,
    STATE(216), 1,
      sym_comment,
  [6359] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(217), 1,
      sym_comment,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [6373] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    ACTIONS(597), 1,
      sym_ms_end,
    STATE(218), 1,
      sym_comment,
  [6389] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    ACTIONS(599), 1,
      sym_ms_end,
    STATE(219), 1,
      sym_comment,
  [6405] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(601), 1,
      aux_sym__ms0_token1,
    STATE(220), 2,
      sym_comment,
      aux_sym__ms_repeat1,
  [6419] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    ACTIONS(604), 1,
      sym_ms_end,
    STATE(221), 1,
      sym_comment,
  [6435] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(222), 1,
      sym_comment,
  [6451] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      sym_comment,
  [6464] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym_comment,
  [6477] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(614), 1,
      anon_sym_DQUOTE2,
    STATE(225), 1,
      sym_comment,
  [6490] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(616), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym_comment,
  [6503] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(569), 1,
      aux_sym__ms0_token1,
    STATE(227), 1,
      sym_comment,
  [6516] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    STATE(228), 1,
      sym_comment,
  [6529] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      sym_comment,
  [6542] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(622), 1,
      anon_sym_SQUOTE,
    STATE(230), 1,
      sym_comment,
  [6555] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(624), 1,
      sym_ms_start,
    STATE(231), 1,
      sym_comment,
  [6568] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
  [6581] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(628), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      sym_comment,
  [6594] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      sym_id,
    STATE(234), 1,
      sym_comment,
  [6607] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(632), 1,
      sym_id,
    STATE(235), 1,
      sym_comment,
  [6620] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(634), 1,
      anon_sym_DQUOTE2,
    STATE(236), 1,
      sym_comment,
  [6633] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_comment,
  [6646] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(638), 1,
      sym_ms_start,
    STATE(238), 1,
      sym_comment,
  [6659] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(640), 1,
      anon_sym_DQUOTE2,
    STATE(239), 1,
      sym_comment,
  [6672] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_comment,
  [6685] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(644), 1,
      sym_ms_start,
    STATE(241), 1,
      sym_comment,
  [6698] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym_comment,
  [6711] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(648), 1,
      anon_sym_DQUOTE2,
    STATE(243), 1,
      sym_comment,
  [6724] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      sym_comment,
  [6737] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(652), 1,
      sym_ms_start,
    STATE(245), 1,
      sym_comment,
  [6750] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(654), 1,
      sym_id,
    STATE(246), 1,
      sym_comment,
  [6763] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(656), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      sym_comment,
  [6776] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(658), 1,
      aux_sym__ms0_token1,
    STATE(248), 1,
      sym_comment,
  [6789] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      sym_comment,
  [6802] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(250), 1,
      sym_comment,
  [6815] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(664), 1,
      anon_sym_SQUOTE,
    STATE(251), 1,
      sym_comment,
  [6828] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    STATE(252), 1,
      sym_comment,
  [6841] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(668), 1,
      aux_sym__ms0_token1,
    STATE(253), 1,
      sym_comment,
  [6854] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(670), 1,
      anon_sym_PIPE,
    STATE(254), 1,
      sym_comment,
  [6867] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(672), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      sym_comment,
  [6880] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      sym_comment,
  [6893] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(676), 1,
      aux_sym__ms0_token1,
    STATE(257), 1,
      sym_comment,
  [6906] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      aux_sym_comment_token1,
    ACTIONS(678), 1,
      aux_sym__ms0_token1,
    STATE(258), 1,
      sym_comment,
  [6919] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(680), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym_comment,
  [6932] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(682), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym_comment,
  [6945] = 1,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
  [6949] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [6953] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [6957] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [6961] = 1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
  [6965] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
  [6969] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [6973] = 1,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
  [6977] = 1,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 71,
  [SMALL_STATE(15)] = 142,
  [SMALL_STATE(16)] = 213,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 355,
  [SMALL_STATE(19)] = 426,
  [SMALL_STATE(20)] = 497,
  [SMALL_STATE(21)] = 568,
  [SMALL_STATE(22)] = 639,
  [SMALL_STATE(23)] = 710,
  [SMALL_STATE(24)] = 778,
  [SMALL_STATE(25)] = 840,
  [SMALL_STATE(26)] = 902,
  [SMALL_STATE(27)] = 964,
  [SMALL_STATE(28)] = 1026,
  [SMALL_STATE(29)] = 1088,
  [SMALL_STATE(30)] = 1150,
  [SMALL_STATE(31)] = 1209,
  [SMALL_STATE(32)] = 1268,
  [SMALL_STATE(33)] = 1327,
  [SMALL_STATE(34)] = 1386,
  [SMALL_STATE(35)] = 1445,
  [SMALL_STATE(36)] = 1504,
  [SMALL_STATE(37)] = 1544,
  [SMALL_STATE(38)] = 1586,
  [SMALL_STATE(39)] = 1628,
  [SMALL_STATE(40)] = 1687,
  [SMALL_STATE(41)] = 1747,
  [SMALL_STATE(42)] = 1807,
  [SMALL_STATE(43)] = 1867,
  [SMALL_STATE(44)] = 1927,
  [SMALL_STATE(45)] = 1987,
  [SMALL_STATE(46)] = 2047,
  [SMALL_STATE(47)] = 2107,
  [SMALL_STATE(48)] = 2167,
  [SMALL_STATE(49)] = 2227,
  [SMALL_STATE(50)] = 2287,
  [SMALL_STATE(51)] = 2347,
  [SMALL_STATE(52)] = 2378,
  [SMALL_STATE(53)] = 2409,
  [SMALL_STATE(54)] = 2440,
  [SMALL_STATE(55)] = 2470,
  [SMALL_STATE(56)] = 2500,
  [SMALL_STATE(57)] = 2530,
  [SMALL_STATE(58)] = 2560,
  [SMALL_STATE(59)] = 2590,
  [SMALL_STATE(60)] = 2620,
  [SMALL_STATE(61)] = 2650,
  [SMALL_STATE(62)] = 2679,
  [SMALL_STATE(63)] = 2708,
  [SMALL_STATE(64)] = 2737,
  [SMALL_STATE(65)] = 2766,
  [SMALL_STATE(66)] = 2795,
  [SMALL_STATE(67)] = 2824,
  [SMALL_STATE(68)] = 2853,
  [SMALL_STATE(69)] = 2882,
  [SMALL_STATE(70)] = 2933,
  [SMALL_STATE(71)] = 2962,
  [SMALL_STATE(72)] = 2991,
  [SMALL_STATE(73)] = 3024,
  [SMALL_STATE(74)] = 3051,
  [SMALL_STATE(75)] = 3078,
  [SMALL_STATE(76)] = 3105,
  [SMALL_STATE(77)] = 3138,
  [SMALL_STATE(78)] = 3173,
  [SMALL_STATE(79)] = 3208,
  [SMALL_STATE(80)] = 3240,
  [SMALL_STATE(81)] = 3274,
  [SMALL_STATE(82)] = 3308,
  [SMALL_STATE(83)] = 3347,
  [SMALL_STATE(84)] = 3386,
  [SMALL_STATE(85)] = 3427,
  [SMALL_STATE(86)] = 3466,
  [SMALL_STATE(87)] = 3505,
  [SMALL_STATE(88)] = 3546,
  [SMALL_STATE(89)] = 3585,
  [SMALL_STATE(90)] = 3609,
  [SMALL_STATE(91)] = 3633,
  [SMALL_STATE(92)] = 3657,
  [SMALL_STATE(93)] = 3681,
  [SMALL_STATE(94)] = 3705,
  [SMALL_STATE(95)] = 3733,
  [SMALL_STATE(96)] = 3756,
  [SMALL_STATE(97)] = 3779,
  [SMALL_STATE(98)] = 3802,
  [SMALL_STATE(99)] = 3829,
  [SMALL_STATE(100)] = 3862,
  [SMALL_STATE(101)] = 3884,
  [SMALL_STATE(102)] = 3906,
  [SMALL_STATE(103)] = 3928,
  [SMALL_STATE(104)] = 3950,
  [SMALL_STATE(105)] = 3972,
  [SMALL_STATE(106)] = 3994,
  [SMALL_STATE(107)] = 4016,
  [SMALL_STATE(108)] = 4038,
  [SMALL_STATE(109)] = 4060,
  [SMALL_STATE(110)] = 4082,
  [SMALL_STATE(111)] = 4104,
  [SMALL_STATE(112)] = 4126,
  [SMALL_STATE(113)] = 4148,
  [SMALL_STATE(114)] = 4170,
  [SMALL_STATE(115)] = 4192,
  [SMALL_STATE(116)] = 4214,
  [SMALL_STATE(117)] = 4236,
  [SMALL_STATE(118)] = 4258,
  [SMALL_STATE(119)] = 4285,
  [SMALL_STATE(120)] = 4312,
  [SMALL_STATE(121)] = 4333,
  [SMALL_STATE(122)] = 4354,
  [SMALL_STATE(123)] = 4375,
  [SMALL_STATE(124)] = 4402,
  [SMALL_STATE(125)] = 4423,
  [SMALL_STATE(126)] = 4450,
  [SMALL_STATE(127)] = 4471,
  [SMALL_STATE(128)] = 4492,
  [SMALL_STATE(129)] = 4513,
  [SMALL_STATE(130)] = 4534,
  [SMALL_STATE(131)] = 4555,
  [SMALL_STATE(132)] = 4576,
  [SMALL_STATE(133)] = 4597,
  [SMALL_STATE(134)] = 4624,
  [SMALL_STATE(135)] = 4651,
  [SMALL_STATE(136)] = 4678,
  [SMALL_STATE(137)] = 4705,
  [SMALL_STATE(138)] = 4726,
  [SMALL_STATE(139)] = 4753,
  [SMALL_STATE(140)] = 4780,
  [SMALL_STATE(141)] = 4801,
  [SMALL_STATE(142)] = 4822,
  [SMALL_STATE(143)] = 4843,
  [SMALL_STATE(144)] = 4864,
  [SMALL_STATE(145)] = 4885,
  [SMALL_STATE(146)] = 4906,
  [SMALL_STATE(147)] = 4933,
  [SMALL_STATE(148)] = 4960,
  [SMALL_STATE(149)] = 4988,
  [SMALL_STATE(150)] = 5016,
  [SMALL_STATE(151)] = 5041,
  [SMALL_STATE(152)] = 5066,
  [SMALL_STATE(153)] = 5091,
  [SMALL_STATE(154)] = 5116,
  [SMALL_STATE(155)] = 5141,
  [SMALL_STATE(156)] = 5166,
  [SMALL_STATE(157)] = 5191,
  [SMALL_STATE(158)] = 5216,
  [SMALL_STATE(159)] = 5238,
  [SMALL_STATE(160)] = 5260,
  [SMALL_STATE(161)] = 5282,
  [SMALL_STATE(162)] = 5304,
  [SMALL_STATE(163)] = 5324,
  [SMALL_STATE(164)] = 5344,
  [SMALL_STATE(165)] = 5366,
  [SMALL_STATE(166)] = 5384,
  [SMALL_STATE(167)] = 5406,
  [SMALL_STATE(168)] = 5428,
  [SMALL_STATE(169)] = 5446,
  [SMALL_STATE(170)] = 5468,
  [SMALL_STATE(171)] = 5490,
  [SMALL_STATE(172)] = 5512,
  [SMALL_STATE(173)] = 5534,
  [SMALL_STATE(174)] = 5556,
  [SMALL_STATE(175)] = 5578,
  [SMALL_STATE(176)] = 5598,
  [SMALL_STATE(177)] = 5620,
  [SMALL_STATE(178)] = 5638,
  [SMALL_STATE(179)] = 5656,
  [SMALL_STATE(180)] = 5678,
  [SMALL_STATE(181)] = 5696,
  [SMALL_STATE(182)] = 5714,
  [SMALL_STATE(183)] = 5736,
  [SMALL_STATE(184)] = 5758,
  [SMALL_STATE(185)] = 5780,
  [SMALL_STATE(186)] = 5798,
  [SMALL_STATE(187)] = 5820,
  [SMALL_STATE(188)] = 5842,
  [SMALL_STATE(189)] = 5864,
  [SMALL_STATE(190)] = 5884,
  [SMALL_STATE(191)] = 5906,
  [SMALL_STATE(192)] = 5924,
  [SMALL_STATE(193)] = 5946,
  [SMALL_STATE(194)] = 5964,
  [SMALL_STATE(195)] = 5986,
  [SMALL_STATE(196)] = 6008,
  [SMALL_STATE(197)] = 6028,
  [SMALL_STATE(198)] = 6050,
  [SMALL_STATE(199)] = 6070,
  [SMALL_STATE(200)] = 6085,
  [SMALL_STATE(201)] = 6104,
  [SMALL_STATE(202)] = 6123,
  [SMALL_STATE(203)] = 6139,
  [SMALL_STATE(204)] = 6155,
  [SMALL_STATE(205)] = 6169,
  [SMALL_STATE(206)] = 6185,
  [SMALL_STATE(207)] = 6201,
  [SMALL_STATE(208)] = 6217,
  [SMALL_STATE(209)] = 6233,
  [SMALL_STATE(210)] = 6249,
  [SMALL_STATE(211)] = 6265,
  [SMALL_STATE(212)] = 6281,
  [SMALL_STATE(213)] = 6297,
  [SMALL_STATE(214)] = 6311,
  [SMALL_STATE(215)] = 6327,
  [SMALL_STATE(216)] = 6343,
  [SMALL_STATE(217)] = 6359,
  [SMALL_STATE(218)] = 6373,
  [SMALL_STATE(219)] = 6389,
  [SMALL_STATE(220)] = 6405,
  [SMALL_STATE(221)] = 6419,
  [SMALL_STATE(222)] = 6435,
  [SMALL_STATE(223)] = 6451,
  [SMALL_STATE(224)] = 6464,
  [SMALL_STATE(225)] = 6477,
  [SMALL_STATE(226)] = 6490,
  [SMALL_STATE(227)] = 6503,
  [SMALL_STATE(228)] = 6516,
  [SMALL_STATE(229)] = 6529,
  [SMALL_STATE(230)] = 6542,
  [SMALL_STATE(231)] = 6555,
  [SMALL_STATE(232)] = 6568,
  [SMALL_STATE(233)] = 6581,
  [SMALL_STATE(234)] = 6594,
  [SMALL_STATE(235)] = 6607,
  [SMALL_STATE(236)] = 6620,
  [SMALL_STATE(237)] = 6633,
  [SMALL_STATE(238)] = 6646,
  [SMALL_STATE(239)] = 6659,
  [SMALL_STATE(240)] = 6672,
  [SMALL_STATE(241)] = 6685,
  [SMALL_STATE(242)] = 6698,
  [SMALL_STATE(243)] = 6711,
  [SMALL_STATE(244)] = 6724,
  [SMALL_STATE(245)] = 6737,
  [SMALL_STATE(246)] = 6750,
  [SMALL_STATE(247)] = 6763,
  [SMALL_STATE(248)] = 6776,
  [SMALL_STATE(249)] = 6789,
  [SMALL_STATE(250)] = 6802,
  [SMALL_STATE(251)] = 6815,
  [SMALL_STATE(252)] = 6828,
  [SMALL_STATE(253)] = 6841,
  [SMALL_STATE(254)] = 6854,
  [SMALL_STATE(255)] = 6867,
  [SMALL_STATE(256)] = 6880,
  [SMALL_STATE(257)] = 6893,
  [SMALL_STATE(258)] = 6906,
  [SMALL_STATE(259)] = 6919,
  [SMALL_STATE(260)] = 6932,
  [SMALL_STATE(261)] = 6945,
  [SMALL_STATE(262)] = 6949,
  [SMALL_STATE(263)] = 6953,
  [SMALL_STATE(264)] = 6957,
  [SMALL_STATE(265)] = 6961,
  [SMALL_STATE(266)] = 6965,
  [SMALL_STATE(267)] = 6969,
  [SMALL_STATE(268)] = 6973,
  [SMALL_STATE(269)] = 6977,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(42),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(12),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(81),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(30),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(145),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(128),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(163),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(145),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(257),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(245),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 21),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 22),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 31),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(234),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(86),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(26),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(154),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(85),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(154),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(128),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(163),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(257),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(245),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 20),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 29),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted, 2, .production_id = 11),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted, 2, .production_id = 11),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parened, 3, .production_id = 16),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parened, 3, .production_id = 16),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms0, 3, .production_id = 12),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms0, 3, .production_id = 12),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multistring, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multistring, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 5, .production_id = 25),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 5, .production_id = 25),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 6, .production_id = 32),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 6, .production_id = 32),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valsep, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valsep, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(29),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 2, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3, .production_id = 9),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 3, .production_id = 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 1),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(235),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(83),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(246),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(88),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(26),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(27),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat2, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 23),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 23),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 7),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, .production_id = 7),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3, .production_id = 9),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3, .production_id = 9),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 8),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 8),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat2, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, .production_id = 13),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, .production_id = 13),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 15),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 15),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 14),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 14),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 7),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 7),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, .production_id = 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, .production_id = 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2, .production_id = 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 13),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 13),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, .production_id = 5),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 10),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, .production_id = 10),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 7, .production_id = 35),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 7, .production_id = 34),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 33),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 6, .production_id = 33),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 30),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 28),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(28),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 27),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 27),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 26),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 26),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(199),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 24),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 24),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 19),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 19),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 18),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 18),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 2, .production_id = 6),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 17),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 17),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2), SHIFT_REPEAT(230),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [660] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
