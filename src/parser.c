#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 269
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 4
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 30

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
  sym_entries = 33,
  sym_entry = 34,
  sym_item = 35,
  sym_path = 36,
  sym_dotted = 37,
  sym_parened = 38,
  sym_decorator = 39,
  sym_pipe = 40,
  sym_value = 41,
  sym__plainval = 42,
  sym_list = 43,
  sym_map = 44,
  sym_string = 45,
  sym_jsonstring = 46,
  sym_string_content = 47,
  sym__valsep = 48,
  sym__primitive = 49,
  sym_multistring = 50,
  sym__ms0 = 51,
  sym__ms = 52,
  sym_comment = 53,
  aux_sym_top_repeat1 = 54,
  aux_sym_entries_repeat1 = 55,
  aux_sym_entry_repeat1 = 56,
  aux_sym_entry_repeat2 = 57,
  aux_sym_path_repeat1 = 58,
  aux_sym_string_content_repeat1 = 59,
  aux_sym__ms_repeat1 = 60,
  alias_sym_decorators = 61,
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
  [sym_entries] = "entries",
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
  [aux_sym_entries_repeat1] = "entries_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_entry_repeat2] = "entry_repeat2",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym__ms_repeat1] = "_ms_repeat1",
  [alias_sym_decorators] = "decorators",
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
  [sym_entries] = sym_entries,
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
  [aux_sym_entries_repeat1] = aux_sym_entries_repeat1,
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
  [aux_sym_entry_repeat2] = aux_sym_entry_repeat2,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym__ms_repeat1] = aux_sym__ms_repeat1,
  [alias_sym_decorators] = alias_sym_decorators,
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
  [sym_entries] = {
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
  [aux_sym_entries_repeat1] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 3},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 3},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 4},
  [21] = {.index = 37, .length = 4},
  [23] = {.index = 41, .length = 4},
  [24] = {.index = 45, .length = 4},
  [26] = {.index = 32, .length = 1},
  [28] = {.index = 49, .length = 5},
  [29] = {.index = 32, .length = 1},
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
  [4] = {
    [1] = alias_sym_pipes,
  },
  [5] = {
    [0] = alias_sym_decorators,
  },
  [10] = {
    [1] = alias_sym_ms_content,
  },
  [11] = {
    [0] = alias_sym_decorators,
    [2] = alias_sym_pipes,
  },
  [12] = {
    [2] = alias_sym_pipes,
  },
  [13] = {
    [0] = alias_sym_decorators,
  },
  [15] = {
    [1] = alias_sym_pipes,
  },
  [17] = {
    [0] = alias_sym_decorators,
  },
  [19] = {
    [4] = alias_sym_items,
  },
  [20] = {
    [0] = alias_sym_decorators,
    [3] = alias_sym_pipes,
  },
  [21] = {
    [2] = alias_sym_pipes,
  },
  [22] = {
    [2] = alias_sym_ms_content,
  },
  [23] = {
    [0] = alias_sym_decorators,
    [2] = alias_sym_pipes,
  },
  [24] = {
    [0] = alias_sym_decorators,
  },
  [25] = {
    [4] = alias_sym_items,
    [5] = alias_sym_items,
  },
  [26] = {
    [5] = alias_sym_items,
  },
  [27] = {
    [2] = alias_sym_ms_content,
    [3] = alias_sym_ms_content,
  },
  [28] = {
    [0] = alias_sym_decorators,
    [3] = alias_sym_pipes,
  },
  [29] = {
    [5] = alias_sym_items,
    [6] = alias_sym_items,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_item, 2,
    sym_item,
    alias_sym_items,
  aux_sym_top_repeat1, 2,
    aux_sym_top_repeat1,
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 3,
  [11] = 8,
  [12] = 8,
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
  [28] = 24,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 43,
  [46] = 42,
  [47] = 43,
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
  [71] = 38,
  [72] = 37,
  [73] = 73,
  [74] = 74,
  [75] = 36,
  [76] = 76,
  [77] = 36,
  [78] = 37,
  [79] = 38,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 81,
  [85] = 85,
  [86] = 86,
  [87] = 51,
  [88] = 67,
  [89] = 50,
  [90] = 61,
  [91] = 49,
  [92] = 49,
  [93] = 93,
  [94] = 50,
  [95] = 95,
  [96] = 96,
  [97] = 51,
  [98] = 98,
  [99] = 99,
  [100] = 68,
  [101] = 63,
  [102] = 57,
  [103] = 55,
  [104] = 74,
  [105] = 59,
  [106] = 54,
  [107] = 70,
  [108] = 73,
  [109] = 58,
  [110] = 76,
  [111] = 52,
  [112] = 56,
  [113] = 66,
  [114] = 65,
  [115] = 53,
  [116] = 64,
  [117] = 62,
  [118] = 52,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 66,
  [125] = 63,
  [126] = 65,
  [127] = 68,
  [128] = 128,
  [129] = 58,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 56,
  [134] = 55,
  [135] = 135,
  [136] = 136,
  [137] = 53,
  [138] = 57,
  [139] = 59,
  [140] = 70,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 54,
  [145] = 64,
  [146] = 62,
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
  [160] = 160,
  [161] = 141,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 135,
  [166] = 166,
  [167] = 142,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 158,
  [174] = 93,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 160,
  [180] = 170,
  [181] = 181,
  [182] = 182,
  [183] = 159,
  [184] = 176,
  [185] = 185,
  [186] = 186,
  [187] = 160,
  [188] = 170,
  [189] = 128,
  [190] = 159,
  [191] = 159,
  [192] = 176,
  [193] = 158,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 122,
  [200] = 200,
  [201] = 201,
  [202] = 200,
  [203] = 198,
  [204] = 204,
  [205] = 200,
  [206] = 200,
  [207] = 201,
  [208] = 130,
  [209] = 198,
  [210] = 119,
  [211] = 211,
  [212] = 201,
  [213] = 211,
  [214] = 198,
  [215] = 211,
  [216] = 216,
  [217] = 201,
  [218] = 211,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 226,
  [229] = 229,
  [230] = 230,
  [231] = 226,
  [232] = 232,
  [233] = 233,
  [234] = 223,
  [235] = 224,
  [236] = 225,
  [237] = 226,
  [238] = 238,
  [239] = 227,
  [240] = 240,
  [241] = 223,
  [242] = 224,
  [243] = 225,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 229,
  [248] = 225,
  [249] = 220,
  [250] = 232,
  [251] = 224,
  [252] = 229,
  [253] = 227,
  [254] = 220,
  [255] = 232,
  [256] = 256,
  [257] = 229,
  [258] = 220,
  [259] = 232,
  [260] = 57,
  [261] = 261,
  [262] = 58,
  [263] = 52,
  [264] = 56,
  [265] = 53,
  [266] = 55,
  [267] = 54,
  [268] = 268,
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
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 30},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 30},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 30},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 30},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 29},
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
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 30},
  [163] = {.lex_state = 30},
  [164] = {.lex_state = 30},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 30},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 30},
  [169] = {.lex_state = 30},
  [170] = {.lex_state = 30},
  [171] = {.lex_state = 30},
  [172] = {.lex_state = 30},
  [173] = {.lex_state = 30},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 30},
  [177] = {.lex_state = 30},
  [178] = {.lex_state = 30},
  [179] = {.lex_state = 30},
  [180] = {.lex_state = 30},
  [181] = {.lex_state = 30},
  [182] = {.lex_state = 30},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 30},
  [185] = {.lex_state = 30},
  [186] = {.lex_state = 30},
  [187] = {.lex_state = 30},
  [188] = {.lex_state = 30},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 30},
  [193] = {.lex_state = 30},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 30},
  [197] = {.lex_state = 30},
  [198] = {.lex_state = 90},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 90},
  [201] = {.lex_state = 90, .external_lex_state = 2},
  [202] = {.lex_state = 90},
  [203] = {.lex_state = 90},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 90},
  [206] = {.lex_state = 90},
  [207] = {.lex_state = 90, .external_lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 90},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 90, .external_lex_state = 2},
  [212] = {.lex_state = 90, .external_lex_state = 2},
  [213] = {.lex_state = 90, .external_lex_state = 2},
  [214] = {.lex_state = 90},
  [215] = {.lex_state = 90, .external_lex_state = 2},
  [216] = {.lex_state = 90},
  [217] = {.lex_state = 90, .external_lex_state = 2},
  [218] = {.lex_state = 90, .external_lex_state = 2},
  [219] = {.lex_state = 90},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0, .external_lex_state = 3},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 90},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 90},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 90},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 90},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {(TSStateId)(-1)},
  [261] = {(TSStateId)(-1)},
  [262] = {(TSStateId)(-1)},
  [263] = {(TSStateId)(-1)},
  [264] = {(TSStateId)(-1)},
  [265] = {(TSStateId)(-1)},
  [266] = {(TSStateId)(-1)},
  [267] = {(TSStateId)(-1)},
  [268] = {(TSStateId)(-1)},
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
    [sym_top] = STATE(222),
    [sym_entries] = STATE(256),
    [sym_entry] = STATE(169),
    [sym_path] = STATE(64),
    [sym_decorator] = STATE(74),
    [sym_value] = STATE(240),
    [sym__plainval] = STATE(165),
    [sym_list] = STATE(64),
    [sym_map] = STATE(64),
    [sym_string] = STATE(148),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(64),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(1),
    [aux_sym_entries_repeat1] = STATE(48),
    [aux_sym_entry_repeat1] = STATE(19),
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
    [sym_item] = STATE(197),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(2),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(17),
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
    [sym_item] = STATE(180),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(3),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(72),
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
    [sym_item] = STATE(170),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(4),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
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
    [sym_item] = STATE(178),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(5),
    [aux_sym_top_repeat1] = STATE(9),
    [aux_sym_entry_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
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
    [sym_item] = STATE(162),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(6),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
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
    [sym_item] = STATE(166),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(7),
    [aux_sym_top_repeat1] = STATE(6),
    [aux_sym_entry_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
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
    [sym_item] = STATE(192),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(8),
    [aux_sym_top_repeat1] = STATE(4),
    [aux_sym_entry_repeat1] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(90),
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
    [sym_item] = STATE(168),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(9),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
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
    [sym_item] = STATE(188),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(10),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
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
    [sym_item] = STATE(176),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(11),
    [aux_sym_top_repeat1] = STATE(3),
    [aux_sym_entry_repeat1] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(96),
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
    [sym_item] = STATE(184),
    [sym_path] = STATE(145),
    [sym_decorator] = STATE(74),
    [sym__plainval] = STATE(147),
    [sym_list] = STATE(145),
    [sym_map] = STATE(145),
    [sym_string] = STATE(146),
    [sym_jsonstring] = STATE(133),
    [sym__primitive] = STATE(145),
    [sym_multistring] = STATE(133),
    [sym__ms0] = STATE(118),
    [sym__ms] = STATE(118),
    [sym_comment] = STATE(12),
    [aux_sym_top_repeat1] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(13), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(185), 1,
      sym_value,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(14), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(181), 1,
      sym_value,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(15), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(186), 1,
      sym_value,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(16), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(177), 1,
      sym_value,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(100), 1,
      sym_disabled,
    STATE(17), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(131), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(18), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(172), 1,
      sym_value,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [426] = 21,
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
    STATE(19), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(149), 1,
      sym_string,
    STATE(161), 1,
      sym__plainval,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(171), 1,
      sym_value,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [568] = 21,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(21), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(182), 1,
      sym_value,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(22), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(135), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(163), 1,
      sym_value,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(23), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_entry_repeat1,
    STATE(74), 1,
      sym_decorator,
    STATE(141), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
      sym_id,
    ACTIONS(110), 1,
      sym_disabled,
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
    STATE(62), 1,
      sym_string,
    STATE(73), 1,
      sym__plainval,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 4,
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
    ACTIONS(108), 1,
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
      sym_disabled,
    STATE(25), 1,
      sym_comment,
    STATE(62), 1,
      sym_string,
    STATE(208), 1,
      sym__plainval,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [902] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
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
    ACTIONS(124), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      sym_comment,
    STATE(62), 1,
      sym_string,
    STATE(246), 1,
      sym__plainval,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [964] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
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
    ACTIONS(126), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      sym_comment,
    STATE(62), 1,
      sym_string,
    STATE(238), 1,
      sym__plainval,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1026] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      sym_id,
    ACTIONS(134), 1,
      sym_disabled,
    ACTIONS(136), 1,
      sym_number,
    ACTIONS(138), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_BQUOTE,
    STATE(28), 1,
      sym_comment,
    STATE(108), 1,
      sym__plainval,
    STATE(117), 1,
      sym_string,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(112), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(142), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1088] = 18,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(148), 1,
      sym_disabled,
    STATE(29), 1,
      sym_comment,
    STATE(130), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(30), 1,
      sym_comment,
    STATE(120), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(31), 1,
      sym_comment,
    STATE(122), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1268] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
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
    STATE(32), 1,
      sym_comment,
    STATE(62), 1,
      sym_string,
    STATE(199), 1,
      sym__plainval,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1327] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      sym_id,
    ACTIONS(136), 1,
      sym_number,
    ACTIONS(138), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_BQUOTE,
    STATE(33), 1,
      sym_comment,
    STATE(110), 1,
      sym__plainval,
    STATE(117), 1,
      sym_string,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(112), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(142), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 4,
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
    ACTIONS(108), 1,
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
    STATE(62), 1,
      sym_string,
    STATE(76), 1,
      sym__plainval,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1445] = 17,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    STATE(35), 1,
      sym_comment,
    STATE(123), 1,
      sym__plainval,
    STATE(146), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(80), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 4,
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
    STATE(51), 2,
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
    STATE(51), 2,
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
    STATE(51), 2,
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
  [1628] = 20,
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
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    STATE(39), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_entries_repeat1,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(169), 1,
      sym_entry,
    STATE(233), 1,
      sym_entries,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [1691] = 20,
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
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    STATE(40), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_entries_repeat1,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(169), 1,
      sym_entry,
    STATE(230), 1,
      sym_entries,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [1754] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      anon_sym_AT,
    ACTIONS(183), 1,
      sym_id,
    ACTIONS(186), 1,
      sym_disabled,
    ACTIONS(189), 1,
      sym_number,
    ACTIONS(192), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_BQUOTE,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(196), 1,
      sym_entry,
    STATE(41), 2,
      sym_comment,
      aux_sym_entries_repeat1,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [1812] = 19,
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
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_entries_repeat1,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(193), 1,
      sym_entry,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [1872] = 19,
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
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_entries_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(187), 1,
      sym_entry,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [1932] = 19,
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
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_entries_repeat1,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(173), 1,
      sym_entry,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [1992] = 19,
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
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_entries_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(179), 1,
      sym_entry,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [2052] = 19,
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
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_entries_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(158), 1,
      sym_entry,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [2112] = 19,
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
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_entries_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(160), 1,
      sym_entry,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [2172] = 18,
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
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    STATE(41), 1,
      aux_sym_entries_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(152), 1,
      sym_string,
    STATE(164), 1,
      sym_entry,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [2229] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_comment,
    ACTIONS(218), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(216), 12,
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
  [2260] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      sym_comment,
    ACTIONS(222), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 12,
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
  [2291] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [2322] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(230), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 11,
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
  [2352] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(234), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(232), 11,
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
  [2382] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [2412] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [2442] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [2472] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [2502] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [2532] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(258), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 10,
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
  [2561] = 16,
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
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(260), 1,
      sym_id,
    ACTIONS(262), 1,
      sym_number,
    STATE(60), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_entry_repeat1,
    STATE(104), 1,
      sym_decorator,
    STATE(153), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [2612] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(61), 1,
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
  [2641] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(62), 1,
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
  [2670] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(63), 1,
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
  [2699] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(64), 1,
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
  [2728] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [2757] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(66), 1,
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
  [2786] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(286), 1,
      anon_sym_AT,
    STATE(74), 1,
      sym_decorator,
    STATE(67), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(289), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 7,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2819] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      sym_comment,
    ACTIONS(293), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(291), 10,
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
  [2848] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(69), 1,
      sym_comment,
    ACTIONS(295), 5,
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
  [2877] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(70), 1,
      sym_comment,
    ACTIONS(299), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(297), 10,
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
  [2906] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_path_repeat1,
    ACTIONS(170), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(87), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(168), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2941] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(87), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(160), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2976] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(307), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(305), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3003] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(74), 1,
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
  [3030] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(87), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(150), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3063] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(76), 1,
      sym_comment,
    ACTIONS(321), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(319), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3090] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    STATE(77), 2,
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
  [3122] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_path_repeat1,
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
  [3156] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(79), 1,
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
  [3190] = 12,
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
    ACTIONS(335), 1,
      sym_id,
    ACTIONS(337), 1,
      sym_number,
    STATE(80), 1,
      sym_comment,
    STATE(151), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [3229] = 12,
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
    ACTIONS(339), 1,
      sym_id,
    ACTIONS(341), 1,
      sym_number,
    STATE(81), 1,
      sym_comment,
    STATE(239), 1,
      sym_string,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
  [3268] = 12,
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
    ACTIONS(343), 1,
      sym_id,
    ACTIONS(345), 1,
      sym_number,
    STATE(82), 1,
      sym_comment,
    STATE(227), 1,
      sym_string,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
  [3307] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      aux_sym_entry_token1,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(119), 1,
      sym_pipe,
    STATE(157), 1,
      aux_sym_entry_repeat2,
    STATE(51), 2,
      sym_dotted,
      sym_parened,
  [3348] = 12,
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
    ACTIONS(357), 1,
      sym_id,
    ACTIONS(359), 1,
      sym_number,
    STATE(84), 1,
      sym_comment,
    STATE(253), 1,
      sym_string,
    STATE(52), 2,
      sym__ms0,
      sym__ms,
    STATE(56), 2,
      sym_jsonstring,
      sym_multistring,
  [3387] = 12,
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
    ACTIONS(361), 1,
      sym_id,
    ACTIONS(363), 1,
      sym_number,
    STATE(85), 1,
      sym_comment,
    STATE(156), 1,
      sym_string,
    STATE(118), 2,
      sym__ms0,
      sym__ms,
    STATE(133), 2,
      sym_jsonstring,
      sym_multistring,
  [3426] = 13,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(367), 1,
      aux_sym_entry_token1,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(119), 1,
      sym_pipe,
    STATE(150), 1,
      aux_sym_entry_repeat2,
    STATE(51), 2,
      sym_dotted,
      sym_parened,
  [3467] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(87), 1,
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
  [3491] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(369), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_decorator,
    ACTIONS(289), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(88), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(284), 5,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3519] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_comment,
    ACTIONS(222), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(220), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3543] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [3567] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_comment,
    ACTIONS(218), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(216), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3591] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(218), 7,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3614] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_pipe,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    STATE(93), 2,
      sym_comment,
      aux_sym_entry_repeat2,
    ACTIONS(377), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3641] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(222), 7,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3664] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_comment,
    ACTIONS(381), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(178), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3689] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      sym_comment,
    ACTIONS(381), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(178), 7,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3712] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(226), 7,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3735] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym_BQUOTE,
    STATE(98), 1,
      sym_comment,
    STATE(261), 1,
      sym_string,
    STATE(263), 2,
      sym__ms0,
      sym__ms,
    STATE(264), 2,
      sym_jsonstring,
      sym_multistring,
  [3768] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      sym_comment,
    ACTIONS(381), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(178), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3793] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      sym_comment,
    ACTIONS(293), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(291), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3815] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(101), 1,
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
  [3837] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(102), 1,
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
  [3859] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(103), 1,
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
  [3881] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(104), 1,
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
  [3903] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
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
  [3925] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(106), 1,
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
  [3947] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(107), 1,
      sym_comment,
    ACTIONS(299), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(297), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3969] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      sym_comment,
    ACTIONS(307), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(305), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3991] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(109), 1,
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
  [4013] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      sym_comment,
    ACTIONS(321), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(319), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4035] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      sym_comment,
    ACTIONS(230), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(228), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4057] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(112), 1,
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
  [4079] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(113), 1,
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
  [4101] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(114), 1,
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
  [4123] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      sym_comment,
    ACTIONS(234), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(232), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4145] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(116), 1,
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
  [4167] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(117), 1,
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
  [4189] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(230), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4210] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(119), 1,
      sym_comment,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(395), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4231] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_pipe,
    STATE(120), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_entry_repeat2,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(399), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4258] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(121), 1,
      sym_comment,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(403), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4285] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(407), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4306] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_pipe,
    STATE(123), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_entry_repeat2,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(411), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4333] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
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
  [4354] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(125), 1,
      sym_comment,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(274), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4375] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(126), 1,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(278), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4396] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(293), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4417] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(128), 1,
      sym_comment,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(415), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4444] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(254), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4465] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(419), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4486] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_pipe,
    STATE(121), 1,
      aux_sym_entry_repeat2,
    STATE(131), 1,
      sym_comment,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(423), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4513] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(132), 1,
      sym_comment,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(427), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4540] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(133), 1,
      sym_comment,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(246), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4561] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(134), 1,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(242), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4582] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_pipe,
    STATE(135), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_entry_repeat2,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(431), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4609] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(136), 1,
      sym_comment,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(435), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4636] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(137), 1,
      sym_comment,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(234), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4657] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(138), 1,
      sym_comment,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(250), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4678] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(139), 1,
      sym_comment,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(258), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4699] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(140), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(299), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4720] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_pipe,
    STATE(128), 1,
      aux_sym_entry_repeat2,
    STATE(141), 1,
      sym_comment,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(439), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4747] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(142), 1,
      sym_comment,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(443), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4774] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(143), 1,
      sym_comment,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(447), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4801] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(144), 1,
      sym_comment,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(238), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4822] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(145), 1,
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
  [4843] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(146), 1,
      sym_comment,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(270), 5,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4864] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_pipe,
    STATE(143), 1,
      aux_sym_entry_repeat2,
    STATE(147), 1,
      sym_comment,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(451), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4891] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      aux_sym_entry_token1,
    STATE(119), 1,
      sym_pipe,
    STATE(148), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_entry_repeat2,
  [4919] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(367), 1,
      aux_sym_entry_token1,
    STATE(119), 1,
      sym_pipe,
    STATE(149), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_entry_repeat2,
  [4947] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(453), 1,
      anon_sym_COLON,
    ACTIONS(455), 1,
      aux_sym_entry_token1,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(150), 1,
      sym_comment,
  [4972] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      aux_sym_entry_token1,
    STATE(119), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_entry_repeat2,
  [4997] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      aux_sym_entry_token1,
    STATE(119), 1,
      sym_pipe,
    STATE(152), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_entry_repeat2,
  [5022] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(367), 1,
      aux_sym_entry_token1,
    STATE(119), 1,
      sym_pipe,
    STATE(150), 1,
      aux_sym_entry_repeat2,
    STATE(153), 1,
      sym_comment,
  [5047] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      aux_sym_entry_token1,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(154), 1,
      sym_comment,
  [5072] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      aux_sym_entry_token1,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(155), 1,
      sym_comment,
  [5097] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      aux_sym_entry_token1,
    STATE(119), 1,
      sym_pipe,
    STATE(154), 1,
      aux_sym_entry_repeat2,
    STATE(156), 1,
      sym_comment,
  [5122] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(473), 1,
      anon_sym_COLON,
    ACTIONS(475), 1,
      aux_sym_entry_token1,
    STATE(93), 1,
      aux_sym_entry_repeat2,
    STATE(119), 1,
      sym_pipe,
    STATE(157), 1,
      sym_comment,
  [5147] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym__valsep,
    STATE(158), 1,
      sym_comment,
  [5169] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(159), 1,
      sym_comment,
    STATE(175), 1,
      aux_sym_string_content_repeat1,
    STATE(242), 1,
      sym_string_content,
    ACTIONS(483), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5189] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__valsep,
    STATE(160), 1,
      sym_comment,
  [5211] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 1,
      anon_sym_PIPE,
    STATE(161), 1,
      sym_comment,
    STATE(189), 1,
      aux_sym_entry_repeat2,
    STATE(210), 1,
      sym_pipe,
  [5233] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym__valsep,
    STATE(162), 1,
      sym_comment,
  [5255] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(497), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5273] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      sym__valsep,
    STATE(164), 1,
      sym_comment,
  [5295] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 1,
      anon_sym_PIPE,
    STATE(165), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_entry_repeat2,
    STATE(210), 1,
      sym_pipe,
  [5317] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym__valsep,
    STATE(166), 1,
      sym_comment,
  [5339] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 1,
      anon_sym_PIPE,
    STATE(167), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_entry_repeat2,
    STATE(210), 1,
      sym_pipe,
  [5361] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym__valsep,
    STATE(168), 1,
      sym_comment,
  [5383] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym__valsep,
    STATE(169), 1,
      sym_comment,
  [5405] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__valsep,
    STATE(170), 1,
      sym_comment,
  [5427] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(171), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(507), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5445] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(172), 1,
      sym_comment,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(511), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5463] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__valsep,
    STATE(173), 1,
      sym_comment,
  [5485] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(515), 1,
      anon_sym_PIPE,
    STATE(210), 1,
      sym_pipe,
    STATE(174), 2,
      sym_comment,
      aux_sym_entry_repeat2,
  [5505] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(518), 1,
      anon_sym_DQUOTE2,
    STATE(175), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(483), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5525] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__valsep,
    STATE(176), 1,
      sym_comment,
  [5547] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(177), 1,
      sym_comment,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(524), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5565] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym__valsep,
    STATE(178), 1,
      sym_comment,
  [5587] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__valsep,
    STATE(179), 1,
      sym_comment,
  [5609] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__valsep,
    STATE(180), 1,
      sym_comment,
  [5631] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(181), 1,
      sym_comment,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5649] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(182), 1,
      sym_comment,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5667] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(175), 1,
      aux_sym_string_content_repeat1,
    STATE(183), 1,
      sym_comment,
    STATE(251), 1,
      sym_string_content,
    ACTIONS(483), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5687] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__valsep,
    STATE(184), 1,
      sym_comment,
  [5709] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(185), 1,
      sym_comment,
    ACTIONS(540), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(542), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5727] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(186), 1,
      sym_comment,
    ACTIONS(544), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
    ACTIONS(546), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5745] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__valsep,
    STATE(187), 1,
      sym_comment,
  [5767] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__valsep,
    STATE(188), 1,
      sym_comment,
  [5789] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 1,
      anon_sym_PIPE,
    STATE(174), 1,
      aux_sym_entry_repeat2,
    STATE(189), 1,
      sym_comment,
    STATE(210), 1,
      sym_pipe,
  [5811] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(175), 1,
      aux_sym_string_content_repeat1,
    STATE(190), 1,
      sym_comment,
    STATE(224), 1,
      sym_string_content,
    ACTIONS(483), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5831] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(175), 1,
      aux_sym_string_content_repeat1,
    STATE(191), 1,
      sym_comment,
    STATE(235), 1,
      sym_string_content,
    ACTIONS(483), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5851] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__valsep,
    STATE(192), 1,
      sym_comment,
  [5873] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__valsep,
    STATE(193), 1,
      sym_comment,
  [5895] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      anon_sym_DQUOTE2,
    ACTIONS(558), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
    STATE(194), 2,
      sym_comment,
      aux_sym_string_content_repeat1,
  [5913] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    STATE(195), 1,
      sym_comment,
    ACTIONS(561), 3,
      anon_sym_DQUOTE2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5928] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      aux_sym_entry_token1,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym__valsep,
    STATE(196), 1,
      sym_comment,
  [5947] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym_entry_token1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym__valsep,
    STATE(197), 1,
      sym_comment,
  [5966] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(563), 1,
      aux_sym__ms0_token1,
    STATE(198), 1,
      sym_comment,
    STATE(200), 1,
      aux_sym__ms_repeat1,
  [5982] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(199), 1,
      sym_comment,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [5996] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(565), 1,
      aux_sym__ms0_token1,
    STATE(200), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym__ms_repeat1,
  [6012] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    ACTIONS(569), 1,
      sym_ms_end,
    STATE(201), 1,
      sym_comment,
  [6028] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(571), 1,
      aux_sym__ms0_token1,
    STATE(202), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym__ms_repeat1,
  [6044] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(573), 1,
      aux_sym__ms0_token1,
    STATE(202), 1,
      aux_sym__ms_repeat1,
    STATE(203), 1,
      sym_comment,
  [6060] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
    ACTIONS(577), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym_comment,
  [6076] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(579), 1,
      aux_sym__ms0_token1,
    STATE(205), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym__ms_repeat1,
  [6092] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      aux_sym__ms0_token1,
    STATE(206), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym__ms_repeat1,
  [6108] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    ACTIONS(583), 1,
      sym_ms_end,
    STATE(207), 1,
      sym_comment,
  [6124] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(208), 1,
      sym_comment,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [6138] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(585), 1,
      aux_sym__ms0_token1,
    STATE(205), 1,
      aux_sym__ms_repeat1,
    STATE(209), 1,
      sym_comment,
  [6154] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(210), 1,
      sym_comment,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
  [6168] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    ACTIONS(587), 1,
      sym_ms_end,
    STATE(211), 1,
      sym_comment,
  [6184] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    ACTIONS(589), 1,
      sym_ms_end,
    STATE(212), 1,
      sym_comment,
  [6200] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    ACTIONS(591), 1,
      sym_ms_end,
    STATE(213), 1,
      sym_comment,
  [6216] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(593), 1,
      aux_sym__ms0_token1,
    STATE(206), 1,
      aux_sym__ms_repeat1,
    STATE(214), 1,
      sym_comment,
  [6232] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    ACTIONS(595), 1,
      sym_ms_end,
    STATE(215), 1,
      sym_comment,
  [6248] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(597), 1,
      aux_sym__ms0_token1,
    STATE(216), 2,
      sym_comment,
      aux_sym__ms_repeat1,
  [6262] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    ACTIONS(600), 1,
      sym_ms_end,
    STATE(217), 1,
      sym_comment,
  [6278] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    ACTIONS(602), 1,
      sym_ms_end,
    STATE(218), 1,
      sym_comment,
  [6294] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(567), 1,
      aux_sym__ms0_token1,
    STATE(219), 1,
      sym_comment,
  [6307] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_SQUOTE,
    STATE(220), 1,
      sym_comment,
  [6320] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    STATE(221), 1,
      sym_comment,
  [6333] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    STATE(222), 1,
      sym_comment,
  [6346] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(610), 1,
      sym_id,
    STATE(223), 1,
      sym_comment,
  [6359] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(612), 1,
      anon_sym_DQUOTE2,
    STATE(224), 1,
      sym_comment,
  [6372] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      sym_comment,
  [6385] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(616), 1,
      sym_ms_start,
    STATE(226), 1,
      sym_comment,
  [6398] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_comment,
  [6411] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(620), 1,
      sym_ms_start,
    STATE(228), 1,
      sym_comment,
  [6424] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(622), 1,
      aux_sym__ms0_token1,
    STATE(229), 1,
      sym_comment,
  [6437] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_comment,
  [6450] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(626), 1,
      sym_ms_start,
    STATE(231), 1,
      sym_comment,
  [6463] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      sym_comment,
  [6476] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    STATE(233), 1,
      sym_comment,
  [6489] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(632), 1,
      sym_id,
    STATE(234), 1,
      sym_comment,
  [6502] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(634), 1,
      anon_sym_DQUOTE2,
    STATE(235), 1,
      sym_comment,
  [6515] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym_comment,
  [6528] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(638), 1,
      sym_ms_start,
    STATE(237), 1,
      sym_comment,
  [6541] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(640), 1,
      anon_sym_PIPE,
    STATE(238), 1,
      sym_comment,
  [6554] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      sym_comment,
  [6567] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      sym_comment,
  [6580] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(646), 1,
      sym_id,
    STATE(241), 1,
      sym_comment,
  [6593] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(648), 1,
      anon_sym_DQUOTE2,
    STATE(242), 1,
      sym_comment,
  [6606] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym_comment,
  [6619] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(652), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      sym_comment,
  [6632] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_comment,
  [6645] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(656), 1,
      anon_sym_PIPE,
    STATE(246), 1,
      sym_comment,
  [6658] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(658), 1,
      aux_sym__ms0_token1,
    STATE(247), 1,
      sym_comment,
  [6671] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(660), 1,
      anon_sym_SQUOTE,
    STATE(248), 1,
      sym_comment,
  [6684] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(249), 1,
      sym_comment,
  [6697] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(664), 1,
      anon_sym_SQUOTE,
    STATE(250), 1,
      sym_comment,
  [6710] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_DQUOTE2,
    STATE(251), 1,
      sym_comment,
  [6723] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(668), 1,
      aux_sym__ms0_token1,
    STATE(252), 1,
      sym_comment,
  [6736] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym_comment,
  [6749] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(672), 1,
      anon_sym_SQUOTE,
    STATE(254), 1,
      sym_comment,
  [6762] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      sym_comment,
  [6775] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    STATE(256), 1,
      sym_comment,
  [6788] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      aux_sym_comment_token1,
    ACTIONS(676), 1,
      aux_sym__ms0_token1,
    STATE(257), 1,
      sym_comment,
  [6801] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      sym_comment,
  [6814] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(680), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym_comment,
  [6827] = 1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
  [6831] = 1,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
  [6835] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [6839] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [6843] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [6847] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [6851] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [6855] = 1,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [6859] = 1,
    ACTIONS(684), 1,
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
  [SMALL_STATE(40)] = 1691,
  [SMALL_STATE(41)] = 1754,
  [SMALL_STATE(42)] = 1812,
  [SMALL_STATE(43)] = 1872,
  [SMALL_STATE(44)] = 1932,
  [SMALL_STATE(45)] = 1992,
  [SMALL_STATE(46)] = 2052,
  [SMALL_STATE(47)] = 2112,
  [SMALL_STATE(48)] = 2172,
  [SMALL_STATE(49)] = 2229,
  [SMALL_STATE(50)] = 2260,
  [SMALL_STATE(51)] = 2291,
  [SMALL_STATE(52)] = 2322,
  [SMALL_STATE(53)] = 2352,
  [SMALL_STATE(54)] = 2382,
  [SMALL_STATE(55)] = 2412,
  [SMALL_STATE(56)] = 2442,
  [SMALL_STATE(57)] = 2472,
  [SMALL_STATE(58)] = 2502,
  [SMALL_STATE(59)] = 2532,
  [SMALL_STATE(60)] = 2561,
  [SMALL_STATE(61)] = 2612,
  [SMALL_STATE(62)] = 2641,
  [SMALL_STATE(63)] = 2670,
  [SMALL_STATE(64)] = 2699,
  [SMALL_STATE(65)] = 2728,
  [SMALL_STATE(66)] = 2757,
  [SMALL_STATE(67)] = 2786,
  [SMALL_STATE(68)] = 2819,
  [SMALL_STATE(69)] = 2848,
  [SMALL_STATE(70)] = 2877,
  [SMALL_STATE(71)] = 2906,
  [SMALL_STATE(72)] = 2941,
  [SMALL_STATE(73)] = 2976,
  [SMALL_STATE(74)] = 3003,
  [SMALL_STATE(75)] = 3030,
  [SMALL_STATE(76)] = 3063,
  [SMALL_STATE(77)] = 3090,
  [SMALL_STATE(78)] = 3122,
  [SMALL_STATE(79)] = 3156,
  [SMALL_STATE(80)] = 3190,
  [SMALL_STATE(81)] = 3229,
  [SMALL_STATE(82)] = 3268,
  [SMALL_STATE(83)] = 3307,
  [SMALL_STATE(84)] = 3348,
  [SMALL_STATE(85)] = 3387,
  [SMALL_STATE(86)] = 3426,
  [SMALL_STATE(87)] = 3467,
  [SMALL_STATE(88)] = 3491,
  [SMALL_STATE(89)] = 3519,
  [SMALL_STATE(90)] = 3543,
  [SMALL_STATE(91)] = 3567,
  [SMALL_STATE(92)] = 3591,
  [SMALL_STATE(93)] = 3614,
  [SMALL_STATE(94)] = 3641,
  [SMALL_STATE(95)] = 3664,
  [SMALL_STATE(96)] = 3689,
  [SMALL_STATE(97)] = 3712,
  [SMALL_STATE(98)] = 3735,
  [SMALL_STATE(99)] = 3768,
  [SMALL_STATE(100)] = 3793,
  [SMALL_STATE(101)] = 3815,
  [SMALL_STATE(102)] = 3837,
  [SMALL_STATE(103)] = 3859,
  [SMALL_STATE(104)] = 3881,
  [SMALL_STATE(105)] = 3903,
  [SMALL_STATE(106)] = 3925,
  [SMALL_STATE(107)] = 3947,
  [SMALL_STATE(108)] = 3969,
  [SMALL_STATE(109)] = 3991,
  [SMALL_STATE(110)] = 4013,
  [SMALL_STATE(111)] = 4035,
  [SMALL_STATE(112)] = 4057,
  [SMALL_STATE(113)] = 4079,
  [SMALL_STATE(114)] = 4101,
  [SMALL_STATE(115)] = 4123,
  [SMALL_STATE(116)] = 4145,
  [SMALL_STATE(117)] = 4167,
  [SMALL_STATE(118)] = 4189,
  [SMALL_STATE(119)] = 4210,
  [SMALL_STATE(120)] = 4231,
  [SMALL_STATE(121)] = 4258,
  [SMALL_STATE(122)] = 4285,
  [SMALL_STATE(123)] = 4306,
  [SMALL_STATE(124)] = 4333,
  [SMALL_STATE(125)] = 4354,
  [SMALL_STATE(126)] = 4375,
  [SMALL_STATE(127)] = 4396,
  [SMALL_STATE(128)] = 4417,
  [SMALL_STATE(129)] = 4444,
  [SMALL_STATE(130)] = 4465,
  [SMALL_STATE(131)] = 4486,
  [SMALL_STATE(132)] = 4513,
  [SMALL_STATE(133)] = 4540,
  [SMALL_STATE(134)] = 4561,
  [SMALL_STATE(135)] = 4582,
  [SMALL_STATE(136)] = 4609,
  [SMALL_STATE(137)] = 4636,
  [SMALL_STATE(138)] = 4657,
  [SMALL_STATE(139)] = 4678,
  [SMALL_STATE(140)] = 4699,
  [SMALL_STATE(141)] = 4720,
  [SMALL_STATE(142)] = 4747,
  [SMALL_STATE(143)] = 4774,
  [SMALL_STATE(144)] = 4801,
  [SMALL_STATE(145)] = 4822,
  [SMALL_STATE(146)] = 4843,
  [SMALL_STATE(147)] = 4864,
  [SMALL_STATE(148)] = 4891,
  [SMALL_STATE(149)] = 4919,
  [SMALL_STATE(150)] = 4947,
  [SMALL_STATE(151)] = 4972,
  [SMALL_STATE(152)] = 4997,
  [SMALL_STATE(153)] = 5022,
  [SMALL_STATE(154)] = 5047,
  [SMALL_STATE(155)] = 5072,
  [SMALL_STATE(156)] = 5097,
  [SMALL_STATE(157)] = 5122,
  [SMALL_STATE(158)] = 5147,
  [SMALL_STATE(159)] = 5169,
  [SMALL_STATE(160)] = 5189,
  [SMALL_STATE(161)] = 5211,
  [SMALL_STATE(162)] = 5233,
  [SMALL_STATE(163)] = 5255,
  [SMALL_STATE(164)] = 5273,
  [SMALL_STATE(165)] = 5295,
  [SMALL_STATE(166)] = 5317,
  [SMALL_STATE(167)] = 5339,
  [SMALL_STATE(168)] = 5361,
  [SMALL_STATE(169)] = 5383,
  [SMALL_STATE(170)] = 5405,
  [SMALL_STATE(171)] = 5427,
  [SMALL_STATE(172)] = 5445,
  [SMALL_STATE(173)] = 5463,
  [SMALL_STATE(174)] = 5485,
  [SMALL_STATE(175)] = 5505,
  [SMALL_STATE(176)] = 5525,
  [SMALL_STATE(177)] = 5547,
  [SMALL_STATE(178)] = 5565,
  [SMALL_STATE(179)] = 5587,
  [SMALL_STATE(180)] = 5609,
  [SMALL_STATE(181)] = 5631,
  [SMALL_STATE(182)] = 5649,
  [SMALL_STATE(183)] = 5667,
  [SMALL_STATE(184)] = 5687,
  [SMALL_STATE(185)] = 5709,
  [SMALL_STATE(186)] = 5727,
  [SMALL_STATE(187)] = 5745,
  [SMALL_STATE(188)] = 5767,
  [SMALL_STATE(189)] = 5789,
  [SMALL_STATE(190)] = 5811,
  [SMALL_STATE(191)] = 5831,
  [SMALL_STATE(192)] = 5851,
  [SMALL_STATE(193)] = 5873,
  [SMALL_STATE(194)] = 5895,
  [SMALL_STATE(195)] = 5913,
  [SMALL_STATE(196)] = 5928,
  [SMALL_STATE(197)] = 5947,
  [SMALL_STATE(198)] = 5966,
  [SMALL_STATE(199)] = 5982,
  [SMALL_STATE(200)] = 5996,
  [SMALL_STATE(201)] = 6012,
  [SMALL_STATE(202)] = 6028,
  [SMALL_STATE(203)] = 6044,
  [SMALL_STATE(204)] = 6060,
  [SMALL_STATE(205)] = 6076,
  [SMALL_STATE(206)] = 6092,
  [SMALL_STATE(207)] = 6108,
  [SMALL_STATE(208)] = 6124,
  [SMALL_STATE(209)] = 6138,
  [SMALL_STATE(210)] = 6154,
  [SMALL_STATE(211)] = 6168,
  [SMALL_STATE(212)] = 6184,
  [SMALL_STATE(213)] = 6200,
  [SMALL_STATE(214)] = 6216,
  [SMALL_STATE(215)] = 6232,
  [SMALL_STATE(216)] = 6248,
  [SMALL_STATE(217)] = 6262,
  [SMALL_STATE(218)] = 6278,
  [SMALL_STATE(219)] = 6294,
  [SMALL_STATE(220)] = 6307,
  [SMALL_STATE(221)] = 6320,
  [SMALL_STATE(222)] = 6333,
  [SMALL_STATE(223)] = 6346,
  [SMALL_STATE(224)] = 6359,
  [SMALL_STATE(225)] = 6372,
  [SMALL_STATE(226)] = 6385,
  [SMALL_STATE(227)] = 6398,
  [SMALL_STATE(228)] = 6411,
  [SMALL_STATE(229)] = 6424,
  [SMALL_STATE(230)] = 6437,
  [SMALL_STATE(231)] = 6450,
  [SMALL_STATE(232)] = 6463,
  [SMALL_STATE(233)] = 6476,
  [SMALL_STATE(234)] = 6489,
  [SMALL_STATE(235)] = 6502,
  [SMALL_STATE(236)] = 6515,
  [SMALL_STATE(237)] = 6528,
  [SMALL_STATE(238)] = 6541,
  [SMALL_STATE(239)] = 6554,
  [SMALL_STATE(240)] = 6567,
  [SMALL_STATE(241)] = 6580,
  [SMALL_STATE(242)] = 6593,
  [SMALL_STATE(243)] = 6606,
  [SMALL_STATE(244)] = 6619,
  [SMALL_STATE(245)] = 6632,
  [SMALL_STATE(246)] = 6645,
  [SMALL_STATE(247)] = 6658,
  [SMALL_STATE(248)] = 6671,
  [SMALL_STATE(249)] = 6684,
  [SMALL_STATE(250)] = 6697,
  [SMALL_STATE(251)] = 6710,
  [SMALL_STATE(252)] = 6723,
  [SMALL_STATE(253)] = 6736,
  [SMALL_STATE(254)] = 6749,
  [SMALL_STATE(255)] = 6762,
  [SMALL_STATE(256)] = 6775,
  [SMALL_STATE(257)] = 6788,
  [SMALL_STATE(258)] = 6801,
  [SMALL_STATE(259)] = 6814,
  [SMALL_STATE(260)] = 6827,
  [SMALL_STATE(261)] = 6831,
  [SMALL_STATE(262)] = 6835,
  [SMALL_STATE(263)] = 6839,
  [SMALL_STATE(264)] = 6843,
  [SMALL_STATE(265)] = 6847,
  [SMALL_STATE(266)] = 6851,
  [SMALL_STATE(267)] = 6855,
  [SMALL_STATE(268)] = 6859,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(44),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(11),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(24),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(78),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(35),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(146),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(137),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(183),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(146),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(229),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(228),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 26),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 18),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 19),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(241),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(84),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(28),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(152),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(85),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(152),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(137),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(183),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(229),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(228),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted, 2, .production_id = 9),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted, 2, .production_id = 9),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parened, 3, .production_id = 14),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parened, 3, .production_id = 14),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multistring, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multistring, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 6, .production_id = 27),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 6, .production_id = 27),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 5, .production_id = 22),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 5, .production_id = 22),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms0, 3, .production_id = 10),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms0, 3, .production_id = 10),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valsep, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valsep, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(24),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 2, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 1),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(234),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(81),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3, .production_id = 7),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 3, .production_id = 7),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(223),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(82),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(28),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(29),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat2, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entries, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entries_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entries, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat2, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 13),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 13),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 11),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 11),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3, .production_id = 7),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 6),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, .production_id = 11),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, .production_id = 11),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2, .production_id = 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 20),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 20),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 12),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 12),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, .production_id = 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, .production_id = 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, .production_id = 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 7, .production_id = 29),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 28),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 6, .production_id = 28),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 25),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entries, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 24),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 24),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 23),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 23),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(25),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 21),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 21),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 8),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, .production_id = 8),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 17),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 17),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 16),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 16),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 15),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 15),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(195),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2), SHIFT_REPEAT(221),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [608] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 18),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
