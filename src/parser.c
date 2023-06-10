#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 211
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 5
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 39

enum {
  anon_sym_PIPE = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_COLON = 6,
  anon_sym_DOT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_AT = 10,
  sym_id = 11,
  sym_disabled = 12,
  sym_number = 13,
  anon_sym_DQUOTE_DQUOTE = 14,
  anon_sym_DQUOTE = 15,
  anon_sym_DQUOTE2 = 16,
  aux_sym_string_content_token1 = 17,
  sym_escape_sequence = 18,
  sym__valsep = 19,
  anon_sym_null = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  anon_sym_SQUOTE = 23,
  aux_sym__ms0_token1 = 24,
  anon_sym_BQUOTE = 25,
  aux_sym_comment_token1 = 26,
  anon_sym_SLASH = 27,
  sym_ms_start = 28,
  sym_ms_end = 29,
  sym_error_sentinel = 30,
  sym_top = 31,
  sym_entry = 32,
  sym_item = 33,
  sym_path = 34,
  sym_dotted = 35,
  sym_parened = 36,
  sym_decorator = 37,
  sym_pipe = 38,
  sym_value = 39,
  sym__plainval = 40,
  sym_list = 41,
  sym_map = 42,
  sym_string = 43,
  sym_jsonstring = 44,
  sym_string_content = 45,
  sym__primitive = 46,
  sym_multistring = 47,
  sym__ms0 = 48,
  sym__ms = 49,
  sym_comment = 50,
  aux_sym_top_repeat1 = 51,
  aux_sym_top_repeat2 = 52,
  aux_sym_entry_repeat1 = 53,
  aux_sym_entry_repeat2 = 54,
  aux_sym_path_repeat1 = 55,
  aux_sym_string_content_repeat1 = 56,
  aux_sym__ms_repeat1 = 57,
  alias_sym_decorators = 58,
  alias_sym_entries = 59,
  alias_sym_items = 60,
  alias_sym_ms_content = 61,
  alias_sym_pipes = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
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
  [sym__valsep] = "_valsep",
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
  [sym__valsep] = sym__valsep,
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
  [sym__valsep] = {
    .visible = false,
    .named = true,
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
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 3},
  [15] = {.index = 21, .length = 3},
  [16] = {.index = 24, .length = 3},
  [17] = {.index = 27, .length = 3},
  [18] = {.index = 30, .length = 3},
  [19] = {.index = 33, .length = 1},
  [20] = {.index = 34, .length = 3},
  [21] = {.index = 37, .length = 3},
  [22] = {.index = 40, .length = 4},
  [23] = {.index = 44, .length = 3},
  [24] = {.index = 47, .length = 4},
  [25] = {.index = 51, .length = 4},
  [27] = {.index = 55, .length = 1},
  [29] = {.index = 56, .length = 4},
  [30] = {.index = 60, .length = 4},
  [32] = {.index = 64, .length = 4},
  [33] = {.index = 68, .length = 4},
  [34] = {.index = 72, .length = 5},
  [35] = {.index = 55, .length = 1},
  [36] = {.index = 55, .length = 1},
  [38] = {.index = 77, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_plainval, 0},
  [1] =
    {field_plainval, 0, .inherited = true},
  [2] =
    {field_plainval, 1, .inherited = true},
  [3] =
    {field_key, 0},
    {field_value, 1},
  [5] =
    {field_pipes, 1},
    {field_plainval, 0, .inherited = true},
  [7] =
    {field_decorators, 0},
    {field_plainval, 1, .inherited = true},
  [9] =
    {field_disabled, 0},
    {field_plainval, 1, .inherited = true},
  [11] =
    {field_plainval, 2, .inherited = true},
  [12] =
    {field_key, 0},
    {field_value, 2},
  [14] =
    {field_id, 1},
  [15] =
    {field_key, 0},
    {field_pipes, 1},
    {field_value, 2},
  [18] =
    {field_disabled, 0},
    {field_key, 1},
    {field_value, 2},
  [21] =
    {field_decorators, 0},
    {field_key, 1},
    {field_value, 2},
  [24] =
    {field_decorators, 0},
    {field_pipes, 2},
    {field_plainval, 1, .inherited = true},
  [27] =
    {field_disabled, 0},
    {field_pipes, 2},
    {field_plainval, 1, .inherited = true},
  [30] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_plainval, 2, .inherited = true},
  [33] =
    {field_value, 1},
  [34] =
    {field_key, 0},
    {field_pipes, 1},
    {field_value, 3},
  [37] =
    {field_disabled, 0},
    {field_key, 1},
    {field_value, 3},
  [40] =
    {field_disabled, 0},
    {field_key, 1},
    {field_pipes, 2},
    {field_value, 3},
  [44] =
    {field_decorators, 0},
    {field_key, 1},
    {field_value, 3},
  [47] =
    {field_decorators, 0},
    {field_key, 1},
    {field_pipes, 2},
    {field_value, 3},
  [51] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_key, 2},
    {field_value, 3},
  [55] =
    {field_plainval, 3, .inherited = true},
  [56] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_pipes, 3},
    {field_plainval, 2, .inherited = true},
  [60] =
    {field_disabled, 0},
    {field_key, 1},
    {field_pipes, 2},
    {field_value, 4},
  [64] =
    {field_decorators, 0},
    {field_key, 1},
    {field_pipes, 2},
    {field_value, 4},
  [68] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_key, 2},
    {field_value, 4},
  [72] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_key, 2},
    {field_pipes, 3},
    {field_value, 4},
  [77] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_key, 2},
    {field_pipes, 3},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_entries,
  },
  [6] = {
    [1] = alias_sym_pipes,
  },
  [7] = {
    [0] = alias_sym_decorators,
  },
  [12] = {
    [1] = alias_sym_pipes,
  },
  [14] = {
    [1] = alias_sym_ms_content,
  },
  [15] = {
    [0] = alias_sym_decorators,
  },
  [16] = {
    [0] = alias_sym_decorators,
    [2] = alias_sym_pipes,
  },
  [17] = {
    [2] = alias_sym_pipes,
  },
  [18] = {
    [0] = alias_sym_decorators,
  },
  [20] = {
    [1] = alias_sym_pipes,
  },
  [22] = {
    [2] = alias_sym_pipes,
  },
  [23] = {
    [0] = alias_sym_decorators,
  },
  [24] = {
    [0] = alias_sym_decorators,
    [2] = alias_sym_pipes,
  },
  [25] = {
    [0] = alias_sym_decorators,
  },
  [26] = {
    [4] = alias_sym_entries,
  },
  [28] = {
    [4] = alias_sym_items,
  },
  [29] = {
    [0] = alias_sym_decorators,
    [3] = alias_sym_pipes,
  },
  [30] = {
    [2] = alias_sym_pipes,
  },
  [31] = {
    [2] = alias_sym_ms_content,
  },
  [32] = {
    [0] = alias_sym_decorators,
    [2] = alias_sym_pipes,
  },
  [33] = {
    [0] = alias_sym_decorators,
  },
  [34] = {
    [0] = alias_sym_decorators,
    [3] = alias_sym_pipes,
  },
  [35] = {
    [5] = alias_sym_entries,
  },
  [36] = {
    [5] = alias_sym_items,
  },
  [37] = {
    [2] = alias_sym_ms_content,
    [3] = alias_sym_ms_content,
  },
  [38] = {
    [0] = alias_sym_decorators,
    [3] = alias_sym_pipes,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 37,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 45,
  [48] = 44,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 70,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 71,
  [85] = 85,
  [86] = 86,
  [87] = 34,
  [88] = 36,
  [89] = 35,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 50,
  [95] = 95,
  [96] = 52,
  [97] = 97,
  [98] = 98,
  [99] = 51,
  [100] = 100,
  [101] = 49,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 85,
  [106] = 56,
  [107] = 64,
  [108] = 77,
  [109] = 82,
  [110] = 78,
  [111] = 62,
  [112] = 83,
  [113] = 59,
  [114] = 55,
  [115] = 75,
  [116] = 81,
  [117] = 69,
  [118] = 63,
  [119] = 57,
  [120] = 72,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 125,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 93,
  [143] = 143,
  [144] = 144,
  [145] = 104,
  [146] = 102,
  [147] = 103,
  [148] = 148,
  [149] = 148,
  [150] = 100,
  [151] = 95,
  [152] = 148,
  [153] = 153,
  [154] = 97,
  [155] = 155,
  [156] = 98,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 158,
  [161] = 161,
  [162] = 158,
  [163] = 163,
  [164] = 161,
  [165] = 163,
  [166] = 159,
  [167] = 163,
  [168] = 159,
  [169] = 161,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 174,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 172,
  [188] = 188,
  [189] = 184,
  [190] = 174,
  [191] = 191,
  [192] = 172,
  [193] = 188,
  [194] = 176,
  [195] = 183,
  [196] = 188,
  [197] = 180,
  [198] = 180,
  [199] = 183,
  [200] = 176,
  [201] = 186,
  [202] = 62,
  [203] = 64,
  [204] = 63,
  [205] = 59,
  [206] = 206,
  [207] = 207,
  [208] = 55,
  [209] = 56,
  [210] = 57,
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
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(61);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (sym_id_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead)) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_id_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_id_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
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
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
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
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(61);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (sym_id_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(61);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (sym_id_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(61);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (sym_id_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'N') ADVANCE(62);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(41);
      if (sym_id_character_set_4(lookahead)) ADVANCE(60);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(49);
      if (sym_id_character_set_4(lookahead)) ADVANCE(60);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(82);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(83);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(48);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(56);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(53);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(55);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(81);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(50);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(46);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(47);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(57);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(45);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(59);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(44);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(51);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'y') ADVANCE(62);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_id);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_disabled);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
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
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__valsep);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_id_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(89);
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
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
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
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 28},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 28},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 28},
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
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 29},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 29},
  [123] = {.lex_state = 29},
  [124] = {.lex_state = 29},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 28},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 29},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 88},
  [159] = {.lex_state = 88, .external_lex_state = 2},
  [160] = {.lex_state = 88},
  [161] = {.lex_state = 88},
  [162] = {.lex_state = 88},
  [163] = {.lex_state = 88, .external_lex_state = 2},
  [164] = {.lex_state = 88},
  [165] = {.lex_state = 88, .external_lex_state = 2},
  [166] = {.lex_state = 88, .external_lex_state = 2},
  [167] = {.lex_state = 88, .external_lex_state = 2},
  [168] = {.lex_state = 88, .external_lex_state = 2},
  [169] = {.lex_state = 88},
  [170] = {.lex_state = 88},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 88},
  [181] = {.lex_state = 88},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 88},
  [198] = {.lex_state = 88},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 2},
  [202] = {(TSStateId)(-1)},
  [203] = {(TSStateId)(-1)},
  [204] = {(TSStateId)(-1)},
  [205] = {(TSStateId)(-1)},
  [206] = {(TSStateId)(-1)},
  [207] = {(TSStateId)(-1)},
  [208] = {(TSStateId)(-1)},
  [209] = {(TSStateId)(-1)},
  [210] = {(TSStateId)(-1)},
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
    [sym__valsep] = ACTIONS(1),
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
    [sym_top] = STATE(191),
    [sym_entry] = STATE(123),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym_value] = STATE(177),
    [sym__plainval] = STATE(154),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(5),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(1),
    [aux_sym_top_repeat1] = STATE(74),
    [aux_sym_entry_repeat1] = STATE(25),
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
    [sym_path] = STATE(117),
    [sym_dotted] = STATE(52),
    [sym_parened] = STATE(52),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(124),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(13),
    [aux_sym_path_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [3] = {
    [sym_path] = STATE(117),
    [sym_dotted] = STATE(52),
    [sym_parened] = STATE(52),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(141),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(3),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(6),
    [aux_sym_path_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [4] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(124),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(4),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [5] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(141),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(5),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [6] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(133),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(6),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [7] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(140),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(7),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(9),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [8] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(138),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(8),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [9] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(131),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(9),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [10] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(10),
    [aux_sym_top_repeat2] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(81),
    [sym_id] = ACTIONS(84),
    [sym_disabled] = ACTIONS(87),
    [sym_number] = ACTIONS(90),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [11] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(141),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(11),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(6),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [12] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(124),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(12),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(13),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [13] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(137),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(13),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(50),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [14] = {
    [sym_path] = STATE(117),
    [sym_decorator] = STATE(102),
    [sym_pipe] = STATE(83),
    [sym_value] = STATE(121),
    [sym__plainval] = STATE(97),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_string] = STATE(105),
    [sym_jsonstring] = STATE(113),
    [sym__primitive] = STATE(117),
    [sym_multistring] = STATE(113),
    [sym__ms0] = STATE(111),
    [sym__ms] = STATE(111),
    [sym_comment] = STATE(14),
    [aux_sym_entry_repeat1] = STATE(33),
    [aux_sym_entry_repeat2] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [15] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(15),
    [aux_sym_top_repeat2] = STATE(19),
    [aux_sym_entry_repeat1] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(114),
    [sym_disabled] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
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
  [16] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(16),
    [aux_sym_top_repeat2] = STATE(17),
    [aux_sym_entry_repeat1] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(114),
    [sym_disabled] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
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
  [17] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(17),
    [aux_sym_top_repeat2] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(114),
    [sym_disabled] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
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
  [18] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(18),
    [aux_sym_top_repeat2] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(114),
    [sym_disabled] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
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
  [19] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(19),
    [aux_sym_top_repeat2] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(114),
    [sym_disabled] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
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
  [20] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(20),
    [aux_sym_top_repeat2] = STATE(18),
    [aux_sym_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(114),
    [sym_disabled] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
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
  [21] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(21),
    [aux_sym_top_repeat2] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(114),
    [sym_disabled] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
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
  [22] = {
    [sym_item] = STATE(90),
    [sym_path] = STATE(69),
    [sym_decorator] = STATE(102),
    [sym__plainval] = STATE(61),
    [sym_list] = STATE(69),
    [sym_map] = STATE(69),
    [sym_string] = STATE(85),
    [sym_jsonstring] = STATE(59),
    [sym__primitive] = STATE(69),
    [sym_multistring] = STATE(59),
    [sym__ms0] = STATE(62),
    [sym__ms] = STATE(62),
    [sym_comment] = STATE(22),
    [aux_sym_top_repeat2] = STATE(21),
    [aux_sym_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(114),
    [sym_disabled] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_entry_repeat1,
    STATE(97), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
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
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(24), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_entry_repeat1,
    STATE(97), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(126), 1,
      sym_value,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [142] = 21,
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
    ACTIONS(134), 1,
      sym_id,
    ACTIONS(136), 1,
      sym_disabled,
    ACTIONS(138), 1,
      sym_number,
    STATE(4), 1,
      sym_string,
    STATE(25), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(150), 1,
      sym__plainval,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
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
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(26), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_entry_repeat1,
    STATE(97), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(134), 1,
      sym_value,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [284] = 21,
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
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(140), 1,
      sym_disabled,
    STATE(27), 1,
      sym_comment,
    STATE(65), 1,
      sym__plainval,
    STATE(85), 1,
      sym_string,
    STATE(93), 1,
      aux_sym_entry_repeat1,
    STATE(102), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
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
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(28), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_entry_repeat1,
    STATE(97), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(135), 1,
      sym_value,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
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
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(29), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_entry_repeat1,
    STATE(97), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(130), 1,
      sym_value,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
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
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(30), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_entry_repeat1,
    STATE(97), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(127), 1,
      sym_value,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
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
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(31), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_entry_repeat1,
    STATE(97), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(129), 1,
      sym_value,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
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
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_entry_repeat1,
    STATE(97), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(136), 1,
      sym_value,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
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
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(33), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_entry_repeat1,
    STATE(100), 1,
      sym__plainval,
    STATE(102), 1,
      sym_decorator,
    STATE(105), 1,
      sym_string,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [778] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_path_repeat1,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(142), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [823] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(35), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(152), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [866] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(52), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(156), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [911] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    ACTIONS(158), 1,
      sym_disabled,
    STATE(37), 1,
      sym_comment,
    STATE(105), 1,
      sym_string,
    STATE(145), 1,
      sym__plainval,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [973] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(160), 1,
      sym_disabled,
    STATE(38), 1,
      sym_comment,
    STATE(77), 1,
      sym__plainval,
    STATE(85), 1,
      sym_string,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1035] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      sym_comment,
    STATE(85), 1,
      sym_string,
    STATE(178), 1,
      sym__plainval,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1097] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    ACTIONS(164), 1,
      sym_disabled,
    STATE(40), 1,
      sym_comment,
    STATE(105), 1,
      sym_string,
    STATE(108), 1,
      sym__plainval,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1159] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      sym_comment,
    STATE(85), 1,
      sym_string,
    STATE(179), 1,
      sym__plainval,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1221] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(168), 1,
      sym_disabled,
    STATE(42), 1,
      sym_comment,
    STATE(85), 1,
      sym_string,
    STATE(104), 1,
      sym__plainval,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1283] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    STATE(43), 1,
      sym_comment,
    STATE(67), 1,
      sym__plainval,
    STATE(85), 1,
      sym_string,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1342] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    STATE(44), 1,
      sym_comment,
    STATE(72), 1,
      sym__plainval,
    STATE(85), 1,
      sym_string,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1401] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    STATE(45), 1,
      sym_comment,
    STATE(85), 1,
      sym_string,
    STATE(103), 1,
      sym__plainval,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1460] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_number,
    STATE(46), 1,
      sym_comment,
    STATE(53), 1,
      sym__plainval,
    STATE(85), 1,
      sym_string,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1519] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(47), 1,
      sym_comment,
    STATE(105), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1578] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_id,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_BQUOTE,
    STATE(48), 1,
      sym_comment,
    STATE(105), 1,
      sym_string,
    STATE(120), 1,
      sym__plainval,
    STATE(111), 2,
      sym__ms0,
      sym__ms,
    STATE(113), 2,
      sym_jsonstring,
      sym_multistring,
    ACTIONS(55), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [1637] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(170), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1671] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      sym_pipe,
    STATE(50), 2,
      sym_comment,
      aux_sym_entry_repeat2,
    ACTIONS(179), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(174), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1709] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_comment,
    ACTIONS(183), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1743] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(187), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1777] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    STATE(53), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_entry_repeat2,
    STATE(83), 1,
      sym_pipe,
    ACTIONS(191), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(189), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1816] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_entry_repeat2,
    STATE(54), 1,
      sym_comment,
    STATE(83), 1,
      sym_pipe,
    ACTIONS(195), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1855] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(199), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(197), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1888] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(203), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1921] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(207), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1954] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_entry_repeat2,
    STATE(58), 1,
      sym_comment,
    STATE(83), 1,
      sym_pipe,
    ACTIONS(211), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(209), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1993] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(215), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2026] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_entry_repeat2,
    STATE(60), 1,
      sym_comment,
    STATE(83), 1,
      sym_pipe,
    ACTIONS(219), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2065] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_entry_repeat2,
    STATE(83), 1,
      sym_pipe,
    ACTIONS(223), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2104] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(227), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(225), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2137] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(231), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(229), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2170] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(235), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(233), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2203] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      aux_sym_entry_repeat2,
    STATE(65), 1,
      sym_comment,
    STATE(83), 1,
      sym_pipe,
    ACTIONS(239), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(237), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2242] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_entry_repeat2,
    STATE(66), 1,
      sym_comment,
    STATE(83), 1,
      sym_pipe,
    ACTIONS(243), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(241), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2281] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_entry_repeat2,
    STATE(67), 1,
      sym_comment,
    STATE(83), 1,
      sym_pipe,
    ACTIONS(247), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(245), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2320] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(251), 1,
      anon_sym_AT,
    ACTIONS(254), 1,
      sym_id,
    ACTIONS(257), 1,
      sym_disabled,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(263), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(272), 1,
      anon_sym_BQUOTE,
    STATE(11), 1,
      sym_string,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
    STATE(68), 2,
      sym_comment,
      aux_sym_top_repeat1,
  [2379] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(69), 1,
      sym_comment,
    ACTIONS(142), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2411] = 19,
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
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    STATE(11), 1,
      sym_string,
    STATE(70), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_top_repeat1,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [2471] = 19,
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
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_string,
    STATE(68), 1,
      aux_sym_top_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [2531] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(72), 1,
      sym_comment,
    ACTIONS(287), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2563] = 19,
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
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    STATE(11), 1,
      sym_string,
    STATE(73), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_top_repeat1,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [2623] = 19,
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
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_string,
    STATE(68), 1,
      aux_sym_top_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [2683] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      sym_comment,
    ACTIONS(293), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(291), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2715] = 19,
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
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_string,
    STATE(68), 1,
      aux_sym_top_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [2775] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(77), 1,
      sym_comment,
    ACTIONS(299), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(297), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2807] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(78), 1,
      sym_comment,
    ACTIONS(303), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(301), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2839] = 19,
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
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_string,
    STATE(79), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_top_repeat1,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [2899] = 19,
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
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    STATE(11), 1,
      sym_string,
    STATE(80), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_top_repeat1,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [2959] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      sym_comment,
    ACTIONS(309), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(307), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2991] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(311), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3023] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(83), 1,
      sym_comment,
    ACTIONS(317), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(315), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3055] = 19,
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
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_string,
    STATE(68), 1,
      aux_sym_top_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [3115] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(85), 1,
      sym_comment,
    ACTIONS(321), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3147] = 19,
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
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_id,
    ACTIONS(281), 1,
      sym_number,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_string,
    STATE(68), 1,
      aux_sym_top_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_entry_repeat1,
    STATE(123), 1,
      sym_entry,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [3207] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_path_repeat1,
    ACTIONS(142), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(96), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(33), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3246] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_path_repeat1,
    ACTIONS(156), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(96), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(154), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3285] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(89), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(96), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(144), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3322] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      sym__valsep,
    STATE(90), 1,
      sym_comment,
    ACTIONS(337), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(335), 10,
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
  [3354] = 16,
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
    ACTIONS(136), 1,
      sym_disabled,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(341), 1,
      sym_id,
    ACTIONS(343), 1,
      sym_number,
    STATE(12), 1,
      sym_string,
    STATE(91), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_entry_repeat1,
    STATE(146), 1,
      sym_decorator,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [3405] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      sym_comment,
    ACTIONS(345), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 10,
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
  [3434] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(349), 1,
      anon_sym_AT,
    STATE(102), 1,
      sym_decorator,
    STATE(93), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(352), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(347), 7,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3467] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    STATE(112), 1,
      sym_pipe,
    ACTIONS(179), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(94), 2,
      sym_comment,
      aux_sym_entry_repeat2,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3499] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_entry_repeat2,
    STATE(95), 1,
      sym_comment,
    STATE(112), 1,
      sym_pipe,
    ACTIONS(361), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3533] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      sym_comment,
    ACTIONS(187), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(185), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3561] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_entry_repeat2,
    STATE(112), 1,
      sym_pipe,
    ACTIONS(365), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3595] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_entry_repeat2,
    STATE(98), 1,
      sym_comment,
    STATE(112), 1,
      sym_pipe,
    ACTIONS(369), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3629] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_comment,
    ACTIONS(183), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(181), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3657] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(95), 1,
      aux_sym_entry_repeat2,
    STATE(100), 1,
      sym_comment,
    STATE(112), 1,
      sym_pipe,
    ACTIONS(373), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3691] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_comment,
    ACTIONS(172), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(170), 12,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3719] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      sym_comment,
    ACTIONS(377), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(375), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3746] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_comment,
    ACTIONS(381), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3773] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      sym_comment,
    ACTIONS(385), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(383), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3800] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      sym_comment,
    ACTIONS(321), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(63), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3826] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(106), 1,
      sym_comment,
    ACTIONS(203), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3852] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(107), 1,
      sym_comment,
    ACTIONS(235), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(233), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3878] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      sym_comment,
    ACTIONS(299), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(297), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3904] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(109), 1,
      sym_comment,
    ACTIONS(313), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(311), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3930] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      sym_comment,
    ACTIONS(303), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(301), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3956] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(225), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3982] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      sym_comment,
    ACTIONS(317), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(315), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4008] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(113), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(213), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4034] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      sym_comment,
    ACTIONS(199), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(197), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4060] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(115), 1,
      sym_comment,
    ACTIONS(293), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(291), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4086] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(116), 1,
      sym_comment,
    ACTIONS(309), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(307), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4112] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      sym_comment,
    ACTIONS(142), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(33), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4138] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(118), 1,
      sym_comment,
    ACTIONS(231), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(229), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4164] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(119), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(205), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4190] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(120), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(285), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4216] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(121), 1,
      sym_comment,
    ACTIONS(389), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4241] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(122), 1,
      sym_comment,
    ACTIONS(393), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4266] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(399), 1,
      sym__valsep,
    STATE(123), 1,
      sym_comment,
    ACTIONS(397), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4293] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(124), 1,
      sym_comment,
    ACTIONS(403), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(401), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4318] = 12,
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
    ACTIONS(405), 1,
      sym_id,
    ACTIONS(407), 1,
      sym_number,
    STATE(125), 1,
      sym_comment,
    STATE(189), 1,
      sym_string,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [4357] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(126), 1,
      sym_comment,
    ACTIONS(411), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(409), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4382] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(127), 1,
      sym_comment,
    ACTIONS(415), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(413), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4407] = 12,
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
    ACTIONS(417), 1,
      sym_id,
    ACTIONS(419), 1,
      sym_number,
    STATE(128), 1,
      sym_comment,
    STATE(184), 1,
      sym_string,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [4446] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(129), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(421), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4471] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(130), 1,
      sym_comment,
    ACTIONS(427), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(425), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4496] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(131), 1,
      sym_comment,
    ACTIONS(431), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(429), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4521] = 12,
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
    ACTIONS(433), 1,
      sym_id,
    ACTIONS(435), 1,
      sym_number,
    STATE(14), 1,
      sym_string,
    STATE(132), 1,
      sym_comment,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [4560] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(133), 1,
      sym_comment,
    ACTIONS(439), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(437), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4585] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(134), 1,
      sym_comment,
    ACTIONS(443), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(441), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4610] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(135), 1,
      sym_comment,
    ACTIONS(447), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(445), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4635] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(136), 1,
      sym_comment,
    ACTIONS(451), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(449), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4660] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(137), 1,
      sym_comment,
    ACTIONS(455), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(453), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4685] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(138), 1,
      sym_comment,
    ACTIONS(459), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(457), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4710] = 12,
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
    ACTIONS(461), 1,
      sym_id,
    ACTIONS(463), 1,
      sym_number,
    STATE(7), 1,
      sym_string,
    STATE(139), 1,
      sym_comment,
    STATE(59), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(62), 2,
      sym__ms0,
      sym__ms,
  [4749] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(140), 1,
      sym_comment,
    ACTIONS(467), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(465), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4774] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(141), 1,
      sym_comment,
    ACTIONS(471), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(469), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      sym__valsep,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4799] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(473), 1,
      anon_sym_AT,
    STATE(146), 1,
      sym_decorator,
    ACTIONS(352), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(142), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(347), 5,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4827] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4851] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(478), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
    ACTIONS(484), 1,
      anon_sym_BQUOTE,
    STATE(144), 1,
      sym_comment,
    STATE(207), 1,
      sym_string,
    STATE(202), 2,
      sym__ms0,
      sym__ms,
    STATE(205), 2,
      sym_jsonstring,
      sym_multistring,
  [4884] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      sym_comment,
    ACTIONS(385), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(383), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4906] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(146), 1,
      sym_comment,
    ACTIONS(377), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(375), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4928] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(147), 1,
      sym_comment,
    ACTIONS(381), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(379), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [4950] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    STATE(148), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_string_content_repeat1,
    STATE(172), 1,
      sym_string_content,
    ACTIONS(486), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [4970] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    STATE(149), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_string_content_repeat1,
    STATE(192), 1,
      sym_string_content,
    ACTIONS(486), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [4990] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_pipe,
    STATE(150), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_entry_repeat2,
  [5012] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym_entry_repeat2,
    STATE(83), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
  [5034] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    STATE(152), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_string_content_repeat1,
    STATE(187), 1,
      sym_string_content,
    ACTIONS(486), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5054] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_DQUOTE2,
    STATE(153), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(486), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5074] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_pipe,
    STATE(154), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_entry_repeat2,
  [5096] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_DQUOTE2,
    ACTIONS(494), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
    STATE(155), 2,
      sym_comment,
      aux_sym_string_content_repeat1,
  [5114] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym_entry_repeat2,
    STATE(83), 1,
      sym_pipe,
    STATE(156), 1,
      sym_comment,
  [5136] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    STATE(157), 1,
      sym_comment,
    ACTIONS(497), 3,
      anon_sym_DQUOTE2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5151] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      aux_sym__ms0_token1,
    STATE(158), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym__ms_repeat1,
  [5167] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym__ms0_token1,
    ACTIONS(503), 1,
      sym_ms_end,
    STATE(159), 1,
      sym_comment,
  [5183] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      aux_sym__ms0_token1,
    STATE(160), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym__ms_repeat1,
  [5199] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(507), 1,
      aux_sym__ms0_token1,
    STATE(160), 1,
      aux_sym__ms_repeat1,
    STATE(161), 1,
      sym_comment,
  [5215] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(509), 1,
      aux_sym__ms0_token1,
    STATE(162), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym__ms_repeat1,
  [5231] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym__ms0_token1,
    ACTIONS(511), 1,
      sym_ms_end,
    STATE(163), 1,
      sym_comment,
  [5247] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(513), 1,
      aux_sym__ms0_token1,
    STATE(162), 1,
      aux_sym__ms_repeat1,
    STATE(164), 1,
      sym_comment,
  [5263] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym__ms0_token1,
    ACTIONS(515), 1,
      sym_ms_end,
    STATE(165), 1,
      sym_comment,
  [5279] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym__ms0_token1,
    ACTIONS(517), 1,
      sym_ms_end,
    STATE(166), 1,
      sym_comment,
  [5295] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym__ms0_token1,
    ACTIONS(519), 1,
      sym_ms_end,
    STATE(167), 1,
      sym_comment,
  [5311] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym__ms0_token1,
    ACTIONS(521), 1,
      sym_ms_end,
    STATE(168), 1,
      sym_comment,
  [5327] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      aux_sym__ms0_token1,
    STATE(158), 1,
      aux_sym__ms_repeat1,
    STATE(169), 1,
      sym_comment,
  [5343] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(525), 1,
      aux_sym__ms0_token1,
    STATE(170), 2,
      sym_comment,
      aux_sym__ms_repeat1,
  [5357] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    STATE(171), 1,
      sym_comment,
  [5373] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(532), 1,
      anon_sym_DQUOTE2,
    STATE(172), 1,
      sym_comment,
  [5386] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      sym_comment,
  [5399] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(536), 1,
      sym_ms_start,
    STATE(174), 1,
      sym_comment,
  [5412] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(538), 1,
      sym_ms_start,
    STATE(175), 1,
      sym_comment,
  [5425] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      sym_comment,
  [5438] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_comment,
  [5451] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    STATE(178), 1,
      sym_comment,
  [5464] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(546), 1,
      anon_sym_PIPE,
    STATE(179), 1,
      sym_comment,
  [5477] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(548), 1,
      aux_sym__ms0_token1,
    STATE(180), 1,
      sym_comment,
  [5490] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym__ms0_token1,
    STATE(181), 1,
      sym_comment,
  [5503] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_comment,
  [5516] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym_comment,
  [5529] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_comment,
  [5542] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym_comment,
  [5555] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(558), 1,
      sym_id,
    STATE(186), 1,
      sym_comment,
  [5568] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(560), 1,
      anon_sym_DQUOTE2,
    STATE(187), 1,
      sym_comment,
  [5581] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym_comment,
  [5594] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [5607] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(566), 1,
      sym_ms_start,
    STATE(190), 1,
      sym_comment,
  [5620] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      sym_comment,
  [5633] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_DQUOTE2,
    STATE(192), 1,
      sym_comment,
  [5646] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(572), 1,
      anon_sym_SQUOTE,
    STATE(193), 1,
      sym_comment,
  [5659] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(574), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_comment,
  [5672] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_comment,
  [5685] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    STATE(196), 1,
      sym_comment,
  [5698] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(580), 1,
      aux_sym__ms0_token1,
    STATE(197), 1,
      sym_comment,
  [5711] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(582), 1,
      aux_sym__ms0_token1,
    STATE(198), 1,
      sym_comment,
  [5724] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(584), 1,
      anon_sym_SQUOTE,
    STATE(199), 1,
      sym_comment,
  [5737] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
    STATE(200), 1,
      sym_comment,
  [5750] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(588), 1,
      sym_id,
    STATE(201), 1,
      sym_comment,
  [5763] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [5767] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [5771] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [5775] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [5779] = 1,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
  [5783] = 1,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
  [5787] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [5791] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [5795] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 71,
  [SMALL_STATE(25)] = 142,
  [SMALL_STATE(26)] = 213,
  [SMALL_STATE(27)] = 284,
  [SMALL_STATE(28)] = 355,
  [SMALL_STATE(29)] = 426,
  [SMALL_STATE(30)] = 497,
  [SMALL_STATE(31)] = 568,
  [SMALL_STATE(32)] = 639,
  [SMALL_STATE(33)] = 710,
  [SMALL_STATE(34)] = 778,
  [SMALL_STATE(35)] = 823,
  [SMALL_STATE(36)] = 866,
  [SMALL_STATE(37)] = 911,
  [SMALL_STATE(38)] = 973,
  [SMALL_STATE(39)] = 1035,
  [SMALL_STATE(40)] = 1097,
  [SMALL_STATE(41)] = 1159,
  [SMALL_STATE(42)] = 1221,
  [SMALL_STATE(43)] = 1283,
  [SMALL_STATE(44)] = 1342,
  [SMALL_STATE(45)] = 1401,
  [SMALL_STATE(46)] = 1460,
  [SMALL_STATE(47)] = 1519,
  [SMALL_STATE(48)] = 1578,
  [SMALL_STATE(49)] = 1637,
  [SMALL_STATE(50)] = 1671,
  [SMALL_STATE(51)] = 1709,
  [SMALL_STATE(52)] = 1743,
  [SMALL_STATE(53)] = 1777,
  [SMALL_STATE(54)] = 1816,
  [SMALL_STATE(55)] = 1855,
  [SMALL_STATE(56)] = 1888,
  [SMALL_STATE(57)] = 1921,
  [SMALL_STATE(58)] = 1954,
  [SMALL_STATE(59)] = 1993,
  [SMALL_STATE(60)] = 2026,
  [SMALL_STATE(61)] = 2065,
  [SMALL_STATE(62)] = 2104,
  [SMALL_STATE(63)] = 2137,
  [SMALL_STATE(64)] = 2170,
  [SMALL_STATE(65)] = 2203,
  [SMALL_STATE(66)] = 2242,
  [SMALL_STATE(67)] = 2281,
  [SMALL_STATE(68)] = 2320,
  [SMALL_STATE(69)] = 2379,
  [SMALL_STATE(70)] = 2411,
  [SMALL_STATE(71)] = 2471,
  [SMALL_STATE(72)] = 2531,
  [SMALL_STATE(73)] = 2563,
  [SMALL_STATE(74)] = 2623,
  [SMALL_STATE(75)] = 2683,
  [SMALL_STATE(76)] = 2715,
  [SMALL_STATE(77)] = 2775,
  [SMALL_STATE(78)] = 2807,
  [SMALL_STATE(79)] = 2839,
  [SMALL_STATE(80)] = 2899,
  [SMALL_STATE(81)] = 2959,
  [SMALL_STATE(82)] = 2991,
  [SMALL_STATE(83)] = 3023,
  [SMALL_STATE(84)] = 3055,
  [SMALL_STATE(85)] = 3115,
  [SMALL_STATE(86)] = 3147,
  [SMALL_STATE(87)] = 3207,
  [SMALL_STATE(88)] = 3246,
  [SMALL_STATE(89)] = 3285,
  [SMALL_STATE(90)] = 3322,
  [SMALL_STATE(91)] = 3354,
  [SMALL_STATE(92)] = 3405,
  [SMALL_STATE(93)] = 3434,
  [SMALL_STATE(94)] = 3467,
  [SMALL_STATE(95)] = 3499,
  [SMALL_STATE(96)] = 3533,
  [SMALL_STATE(97)] = 3561,
  [SMALL_STATE(98)] = 3595,
  [SMALL_STATE(99)] = 3629,
  [SMALL_STATE(100)] = 3657,
  [SMALL_STATE(101)] = 3691,
  [SMALL_STATE(102)] = 3719,
  [SMALL_STATE(103)] = 3746,
  [SMALL_STATE(104)] = 3773,
  [SMALL_STATE(105)] = 3800,
  [SMALL_STATE(106)] = 3826,
  [SMALL_STATE(107)] = 3852,
  [SMALL_STATE(108)] = 3878,
  [SMALL_STATE(109)] = 3904,
  [SMALL_STATE(110)] = 3930,
  [SMALL_STATE(111)] = 3956,
  [SMALL_STATE(112)] = 3982,
  [SMALL_STATE(113)] = 4008,
  [SMALL_STATE(114)] = 4034,
  [SMALL_STATE(115)] = 4060,
  [SMALL_STATE(116)] = 4086,
  [SMALL_STATE(117)] = 4112,
  [SMALL_STATE(118)] = 4138,
  [SMALL_STATE(119)] = 4164,
  [SMALL_STATE(120)] = 4190,
  [SMALL_STATE(121)] = 4216,
  [SMALL_STATE(122)] = 4241,
  [SMALL_STATE(123)] = 4266,
  [SMALL_STATE(124)] = 4293,
  [SMALL_STATE(125)] = 4318,
  [SMALL_STATE(126)] = 4357,
  [SMALL_STATE(127)] = 4382,
  [SMALL_STATE(128)] = 4407,
  [SMALL_STATE(129)] = 4446,
  [SMALL_STATE(130)] = 4471,
  [SMALL_STATE(131)] = 4496,
  [SMALL_STATE(132)] = 4521,
  [SMALL_STATE(133)] = 4560,
  [SMALL_STATE(134)] = 4585,
  [SMALL_STATE(135)] = 4610,
  [SMALL_STATE(136)] = 4635,
  [SMALL_STATE(137)] = 4660,
  [SMALL_STATE(138)] = 4685,
  [SMALL_STATE(139)] = 4710,
  [SMALL_STATE(140)] = 4749,
  [SMALL_STATE(141)] = 4774,
  [SMALL_STATE(142)] = 4799,
  [SMALL_STATE(143)] = 4827,
  [SMALL_STATE(144)] = 4851,
  [SMALL_STATE(145)] = 4884,
  [SMALL_STATE(146)] = 4906,
  [SMALL_STATE(147)] = 4928,
  [SMALL_STATE(148)] = 4950,
  [SMALL_STATE(149)] = 4970,
  [SMALL_STATE(150)] = 4990,
  [SMALL_STATE(151)] = 5012,
  [SMALL_STATE(152)] = 5034,
  [SMALL_STATE(153)] = 5054,
  [SMALL_STATE(154)] = 5074,
  [SMALL_STATE(155)] = 5096,
  [SMALL_STATE(156)] = 5114,
  [SMALL_STATE(157)] = 5136,
  [SMALL_STATE(158)] = 5151,
  [SMALL_STATE(159)] = 5167,
  [SMALL_STATE(160)] = 5183,
  [SMALL_STATE(161)] = 5199,
  [SMALL_STATE(162)] = 5215,
  [SMALL_STATE(163)] = 5231,
  [SMALL_STATE(164)] = 5247,
  [SMALL_STATE(165)] = 5263,
  [SMALL_STATE(166)] = 5279,
  [SMALL_STATE(167)] = 5295,
  [SMALL_STATE(168)] = 5311,
  [SMALL_STATE(169)] = 5327,
  [SMALL_STATE(170)] = 5343,
  [SMALL_STATE(171)] = 5357,
  [SMALL_STATE(172)] = 5373,
  [SMALL_STATE(173)] = 5386,
  [SMALL_STATE(174)] = 5399,
  [SMALL_STATE(175)] = 5412,
  [SMALL_STATE(176)] = 5425,
  [SMALL_STATE(177)] = 5438,
  [SMALL_STATE(178)] = 5451,
  [SMALL_STATE(179)] = 5464,
  [SMALL_STATE(180)] = 5477,
  [SMALL_STATE(181)] = 5490,
  [SMALL_STATE(182)] = 5503,
  [SMALL_STATE(183)] = 5516,
  [SMALL_STATE(184)] = 5529,
  [SMALL_STATE(185)] = 5542,
  [SMALL_STATE(186)] = 5555,
  [SMALL_STATE(187)] = 5568,
  [SMALL_STATE(188)] = 5581,
  [SMALL_STATE(189)] = 5594,
  [SMALL_STATE(190)] = 5607,
  [SMALL_STATE(191)] = 5620,
  [SMALL_STATE(192)] = 5633,
  [SMALL_STATE(193)] = 5646,
  [SMALL_STATE(194)] = 5659,
  [SMALL_STATE(195)] = 5672,
  [SMALL_STATE(196)] = 5685,
  [SMALL_STATE(197)] = 5698,
  [SMALL_STATE(198)] = 5711,
  [SMALL_STATE(199)] = 5724,
  [SMALL_STATE(200)] = 5737,
  [SMALL_STATE(201)] = 5750,
  [SMALL_STATE(202)] = 5763,
  [SMALL_STATE(203)] = 5767,
  [SMALL_STATE(204)] = 5771,
  [SMALL_STATE(205)] = 5775,
  [SMALL_STATE(206)] = 5779,
  [SMALL_STATE(207)] = 5783,
  [SMALL_STATE(208)] = 5787,
  [SMALL_STATE(209)] = 5791,
  [SMALL_STATE(210)] = 5795,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(79),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(16),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(42),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(34),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(43),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(85),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(55),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(148),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(85),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(180),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 2), SHIFT_REPEAT(190),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 36),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 27),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 28),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(201),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(128),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted, 2, .production_id = 11),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted, 2, .production_id = 11),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(38),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat2, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parened, 3, .production_id = 19),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parened, 3, .production_id = 19),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 18),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 18),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 16),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 16),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 6, .production_id = 37),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 6, .production_id = 37),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 5, .production_id = 31),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 5, .production_id = 31),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 29),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 29),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 17),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 17),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multistring, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multistring, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms0, 3, .production_id = 14),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms0, 3, .production_id = 14),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 7),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 6),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 8),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 8),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(37),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(11),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(132),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(11),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(55),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(148),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(180),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(190),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3, .production_id = 9),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3, .production_id = 9),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 26),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2, .production_id = 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2, .production_id = 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat2, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 35),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(186),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(125),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat2, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat2, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(42),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(40),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, .production_id = 16),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, .production_id = 16),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 6),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, .production_id = 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 7),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, .production_id = 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3, .production_id = 9),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 3, .production_id = 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2, .production_id = 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 2, .production_id = 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 13),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 23),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 23),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 15),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, .production_id = 15),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 20),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 20),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 30),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 30),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 32),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 32),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 33),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 33),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 34),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 34),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 12),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, .production_id = 12),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 10),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, .production_id = 10),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 38),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 6, .production_id = 38),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 21),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 21),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 24),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 24),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 22),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 22),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 25),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 25),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, .production_id = 5),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, .production_id = 5),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(37),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(157),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2), SHIFT_REPEAT(185),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [568] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
