#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 255
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 3
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 22

enum {
  anon_sym_PIPE = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  aux_sym_entry_token1 = 6,
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
  anon_sym_COMMA = 19,
  aux_sym__valsep_token1 = 20,
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
  aux_sym_entries_repeat1 = 54,
  aux_sym_entry_repeat1 = 55,
  aux_sym_path_repeat1 = 56,
  aux_sym_string_content_repeat1 = 57,
  aux_sym__ms_repeat1 = 58,
  alias_sym_decorators = 59,
  alias_sym_items = 60,
  alias_sym_ms_content = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [aux_sym__valsep_token1] = "_valsep_token1",
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
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym__ms_repeat1] = "_ms_repeat1",
  [alias_sym_decorators] = "decorators",
  [alias_sym_items] = "items",
  [alias_sym_ms_content] = "ms_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [aux_sym__valsep_token1] = aux_sym__valsep_token1,
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
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym__ms_repeat1] = aux_sym__ms_repeat1,
  [alias_sym_decorators] = alias_sym_decorators,
  [alias_sym_items] = alias_sym_items,
  [alias_sym_ms_content] = alias_sym_ms_content,
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
  [aux_sym__valsep_token1] = {
    .visible = false,
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
};

enum {
  field_decorators = 1,
  field_disabled = 2,
  field_id = 3,
  field_key = 4,
  field_plainval = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_decorators] = "decorators",
  [field_disabled] = "disabled",
  [field_id] = "id",
  [field_key] = "key",
  [field_plainval] = "plainval",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 4},
  [19] = {.index = 21, .length = 1},
  [21] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_plainval, 0},
  [1] =
    {field_plainval, 0, .inherited = true},
  [2] =
    {field_plainval, 1, .inherited = true},
  [3] =
    {field_decorators, 0},
    {field_plainval, 1, .inherited = true},
  [5] =
    {field_disabled, 0},
    {field_plainval, 1, .inherited = true},
  [7] =
    {field_plainval, 2, .inherited = true},
  [8] =
    {field_key, 0},
    {field_value, 2},
  [10] =
    {field_id, 1},
  [11] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_plainval, 2, .inherited = true},
  [14] =
    {field_value, 1},
  [15] =
    {field_disabled, 0},
    {field_key, 1},
    {field_value, 3},
  [18] =
    {field_decorators, 0},
    {field_key, 1},
    {field_value, 3},
  [21] =
    {field_plainval, 3, .inherited = true},
  [22] =
    {field_decorators, 0},
    {field_disabled, 1},
    {field_key, 2},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_decorators,
  },
  [9] = {
    [1] = alias_sym_ms_content,
  },
  [10] = {
    [0] = alias_sym_decorators,
  },
  [13] = {
    [0] = alias_sym_decorators,
  },
  [15] = {
    [4] = alias_sym_items,
  },
  [16] = {
    [2] = alias_sym_ms_content,
  },
  [17] = {
    [0] = alias_sym_decorators,
  },
  [18] = {
    [4] = alias_sym_items,
    [5] = alias_sym_items,
  },
  [19] = {
    [5] = alias_sym_items,
  },
  [20] = {
    [2] = alias_sym_ms_content,
    [3] = alias_sym_ms_content,
  },
  [21] = {
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
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 33,
  [38] = 35,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
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
  [65] = 28,
  [66] = 66,
  [67] = 29,
  [68] = 31,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 69,
  [73] = 69,
  [74] = 58,
  [75] = 44,
  [76] = 29,
  [77] = 31,
  [78] = 41,
  [79] = 28,
  [80] = 43,
  [81] = 42,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 45,
  [87] = 62,
  [88] = 48,
  [89] = 51,
  [90] = 56,
  [91] = 52,
  [92] = 63,
  [93] = 46,
  [94] = 54,
  [95] = 50,
  [96] = 49,
  [97] = 53,
  [98] = 57,
  [99] = 59,
  [100] = 61,
  [101] = 66,
  [102] = 64,
  [103] = 60,
  [104] = 43,
  [105] = 41,
  [106] = 106,
  [107] = 42,
  [108] = 108,
  [109] = 61,
  [110] = 49,
  [111] = 46,
  [112] = 48,
  [113] = 51,
  [114] = 59,
  [115] = 57,
  [116] = 56,
  [117] = 52,
  [118] = 62,
  [119] = 45,
  [120] = 60,
  [121] = 50,
  [122] = 53,
  [123] = 54,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 125,
  [138] = 138,
  [139] = 139,
  [140] = 129,
  [141] = 141,
  [142] = 126,
  [143] = 124,
  [144] = 125,
  [145] = 134,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 124,
  [153] = 153,
  [154] = 134,
  [155] = 129,
  [156] = 126,
  [157] = 124,
  [158] = 124,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 59,
  [164] = 164,
  [165] = 165,
  [166] = 164,
  [167] = 165,
  [168] = 164,
  [169] = 165,
  [170] = 164,
  [171] = 165,
  [172] = 45,
  [173] = 60,
  [174] = 50,
  [175] = 162,
  [176] = 176,
  [177] = 162,
  [178] = 162,
  [179] = 53,
  [180] = 176,
  [181] = 162,
  [182] = 182,
  [183] = 176,
  [184] = 176,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 176,
  [189] = 164,
  [190] = 165,
  [191] = 57,
  [192] = 62,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 193,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 202,
  [205] = 205,
  [206] = 139,
  [207] = 201,
  [208] = 200,
  [209] = 209,
  [210] = 200,
  [211] = 201,
  [212] = 212,
  [213] = 193,
  [214] = 202,
  [215] = 209,
  [216] = 216,
  [217] = 200,
  [218] = 201,
  [219] = 209,
  [220] = 220,
  [221] = 200,
  [222] = 201,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 197,
  [227] = 227,
  [228] = 198,
  [229] = 216,
  [230] = 230,
  [231] = 197,
  [232] = 209,
  [233] = 198,
  [234] = 216,
  [235] = 235,
  [236] = 197,
  [237] = 198,
  [238] = 216,
  [239] = 239,
  [240] = 197,
  [241] = 198,
  [242] = 216,
  [243] = 128,
  [244] = 209,
  [245] = 245,
  [246] = 60,
  [247] = 45,
  [248] = 62,
  [249] = 59,
  [250] = 57,
  [251] = 251,
  [252] = 252,
  [253] = 50,
  [254] = 53,
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
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '~') ADVANCE(64);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (sym_id_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead)) ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_id_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_id_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
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
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
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
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '~') ADVANCE(64);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (sym_id_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 28:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (sym_id_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (sym_id_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_entry_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_entry_token1);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'N') ADVANCE(65);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(44);
      if (sym_id_character_set_4(lookahead)) ADVANCE(63);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(52);
      if (sym_id_character_set_4(lookahead)) ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(86);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(87);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(51);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(59);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(56);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(58);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(85);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(53);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(49);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(50);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(60);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(48);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(62);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(47);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(54);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'y') ADVANCE(65);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_id);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_disabled);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
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
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__valsep_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_id_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__ms0_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(93);
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
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
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
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 30},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 28},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 30},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 31},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 30},
  [110] = {.lex_state = 30},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 30},
  [116] = {.lex_state = 30},
  [117] = {.lex_state = 30},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 30},
  [120] = {.lex_state = 30},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 30},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 30},
  [126] = {.lex_state = 30},
  [127] = {.lex_state = 30},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 30},
  [130] = {.lex_state = 30},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 1},
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
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 30},
  [146] = {.lex_state = 30},
  [147] = {.lex_state = 30},
  [148] = {.lex_state = 30},
  [149] = {.lex_state = 30},
  [150] = {.lex_state = 30},
  [151] = {.lex_state = 30},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 30},
  [155] = {.lex_state = 30},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 92, .external_lex_state = 2},
  [163] = {.lex_state = 31},
  [164] = {.lex_state = 92},
  [165] = {.lex_state = 92},
  [166] = {.lex_state = 92},
  [167] = {.lex_state = 92},
  [168] = {.lex_state = 92},
  [169] = {.lex_state = 92},
  [170] = {.lex_state = 92},
  [171] = {.lex_state = 92},
  [172] = {.lex_state = 31},
  [173] = {.lex_state = 31},
  [174] = {.lex_state = 31},
  [175] = {.lex_state = 92, .external_lex_state = 2},
  [176] = {.lex_state = 92, .external_lex_state = 2},
  [177] = {.lex_state = 92, .external_lex_state = 2},
  [178] = {.lex_state = 92, .external_lex_state = 2},
  [179] = {.lex_state = 31},
  [180] = {.lex_state = 92, .external_lex_state = 2},
  [181] = {.lex_state = 92, .external_lex_state = 2},
  [182] = {.lex_state = 92},
  [183] = {.lex_state = 92, .external_lex_state = 2},
  [184] = {.lex_state = 92, .external_lex_state = 2},
  [185] = {.lex_state = 31},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 31},
  [188] = {.lex_state = 92, .external_lex_state = 2},
  [189] = {.lex_state = 92},
  [190] = {.lex_state = 92},
  [191] = {.lex_state = 31},
  [192] = {.lex_state = 31},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 31},
  [197] = {.lex_state = 92},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 31},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 31},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0, .external_lex_state = 3},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0, .external_lex_state = 3},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 31},
  [226] = {.lex_state = 92},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 92},
  [232] = {.lex_state = 0, .external_lex_state = 3},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 92},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 92},
  [240] = {.lex_state = 92},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 0},
  [246] = {(TSStateId)(-1)},
  [247] = {(TSStateId)(-1)},
  [248] = {(TSStateId)(-1)},
  [249] = {(TSStateId)(-1)},
  [250] = {(TSStateId)(-1)},
  [251] = {(TSStateId)(-1)},
  [252] = {(TSStateId)(-1)},
  [253] = {(TSStateId)(-1)},
  [254] = {(TSStateId)(-1)},
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
    [sym_top] = STATE(245),
    [sym_entries] = STATE(235),
    [sym_entry] = STATE(136),
    [sym_path] = STATE(54),
    [sym_decorator] = STATE(63),
    [sym_value] = STATE(205),
    [sym__plainval] = STATE(243),
    [sym_list] = STATE(54),
    [sym_map] = STATE(54),
    [sym_string] = STATE(185),
    [sym_jsonstring] = STATE(172),
    [sym__primitive] = STATE(54),
    [sym_multistring] = STATE(172),
    [sym__ms0] = STATE(173),
    [sym__ms] = STATE(173),
    [sym_comment] = STATE(1),
    [aux_sym_entries_repeat1] = STATE(40),
    [aux_sym_entry_repeat1] = STATE(18),
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
    [sym_item] = STATE(160),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(2),
    [aux_sym_top_repeat1] = STATE(2),
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
    [sym_item] = STATE(155),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(3),
    [aux_sym_top_repeat1] = STATE(7),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [4] = {
    [sym_item] = STATE(129),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(4),
    [aux_sym_top_repeat1] = STATE(8),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [5] = {
    [sym_item] = STATE(140),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(5),
    [aux_sym_top_repeat1] = STATE(6),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [6] = {
    [sym_item] = STATE(126),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(6),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [7] = {
    [sym_item] = STATE(142),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(7),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [8] = {
    [sym_item] = STATE(156),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(8),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [9] = {
    [sym_item] = STATE(141),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(9),
    [aux_sym_top_repeat1] = STATE(12),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [10] = {
    [sym_item] = STATE(127),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(10),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [11] = {
    [sym_item] = STATE(130),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(11),
    [aux_sym_top_repeat1] = STATE(10),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(5),
  },
  [12] = {
    [sym_item] = STATE(131),
    [sym_path] = STATE(123),
    [sym_decorator] = STATE(63),
    [sym__plainval] = STATE(138),
    [sym_list] = STATE(123),
    [sym_map] = STATE(123),
    [sym_string] = STATE(110),
    [sym_jsonstring] = STATE(119),
    [sym__primitive] = STATE(123),
    [sym_multistring] = STATE(119),
    [sym__ms0] = STATE(120),
    [sym__ms] = STATE(120),
    [sym_comment] = STATE(12),
    [aux_sym_top_repeat1] = STATE(2),
    [aux_sym_entry_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(15),
    [sym_id] = ACTIONS(74),
    [sym_disabled] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(88),
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    ACTIONS(108), 1,
      sym_disabled,
    STATE(13), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_entry_repeat1,
    STATE(63), 1,
      sym_decorator,
    STATE(110), 1,
      sym_string,
    STATE(150), 1,
      sym__plainval,
    STATE(119), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(120), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(84), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    STATE(14), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_entry_repeat1,
    STATE(63), 1,
      sym_decorator,
    STATE(110), 1,
      sym_string,
    STATE(128), 1,
      sym__plainval,
    STATE(146), 1,
      sym_value,
    STATE(119), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(120), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(84), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_entry_repeat1,
    STATE(63), 1,
      sym_decorator,
    STATE(110), 1,
      sym_string,
    STATE(128), 1,
      sym__plainval,
    STATE(133), 1,
      sym_value,
    STATE(119), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(120), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(84), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_entry_repeat1,
    STATE(63), 1,
      sym_decorator,
    STATE(110), 1,
      sym_string,
    STATE(128), 1,
      sym__plainval,
    STATE(148), 1,
      sym_value,
    STATE(119), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(120), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(84), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 4,
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
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_entry_repeat1,
    STATE(63), 1,
      sym_decorator,
    STATE(110), 1,
      sym_string,
    STATE(128), 1,
      sym__plainval,
    STATE(151), 1,
      sym_value,
    STATE(119), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(120), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(84), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [355] = 21,
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
    ACTIONS(110), 1,
      sym_id,
    ACTIONS(112), 1,
      sym_disabled,
    ACTIONS(114), 1,
      sym_number,
    STATE(18), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_entry_repeat1,
    STATE(63), 1,
      sym_decorator,
    STATE(187), 1,
      sym_string,
    STATE(206), 1,
      sym__plainval,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [426] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_entry_repeat1,
    STATE(63), 1,
      sym_decorator,
    STATE(110), 1,
      sym_string,
    STATE(139), 1,
      sym__plainval,
    STATE(119), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(120), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(84), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [494] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_id,
    ACTIONS(118), 1,
      sym_disabled,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    STATE(20), 1,
      sym_comment,
    STATE(49), 1,
      sym_string,
    STATE(66), 1,
      sym__plainval,
    STATE(45), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(60), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [556] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      sym_id,
    ACTIONS(136), 1,
      sym_disabled,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(140), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_BQUOTE,
    STATE(21), 1,
      sym_comment,
    STATE(96), 1,
      sym_string,
    STATE(101), 1,
      sym__plainval,
    STATE(86), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(103), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(144), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(94), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [618] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_id,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    STATE(22), 1,
      sym_comment,
    STATE(49), 1,
      sym_string,
    STATE(224), 1,
      sym__plainval,
    STATE(45), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(60), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [680] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_id,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    ACTIONS(152), 1,
      anon_sym_PIPE,
    STATE(23), 1,
      sym_comment,
    STATE(49), 1,
      sym_string,
    STATE(195), 1,
      sym__plainval,
    STATE(45), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(60), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [742] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    STATE(24), 1,
      sym_comment,
    STATE(110), 1,
      sym_string,
    STATE(149), 1,
      sym__plainval,
    STATE(119), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(120), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(84), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [801] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      sym_id,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(140), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_BQUOTE,
    STATE(25), 1,
      sym_comment,
    STATE(96), 1,
      sym_string,
    STATE(102), 1,
      sym__plainval,
    STATE(86), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(103), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(144), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(94), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [860] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_id,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    STATE(26), 1,
      sym_comment,
    STATE(110), 1,
      sym_string,
    STATE(147), 1,
      sym__plainval,
    STATE(119), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(120), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(84), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [919] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_id,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    STATE(27), 1,
      sym_comment,
    STATE(49), 1,
      sym_string,
    STATE(64), 1,
      sym__plainval,
    STATE(45), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(60), 2,
      sym__ms0,
      sym__ms,
    ACTIONS(27), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 4,
      sym_path,
      sym_list,
      sym_map,
      sym__primitive,
  [978] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(41), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(160), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 10,
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
  [1020] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(29), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(41), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(170), 5,
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
  [1060] = 20,
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
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    STATE(30), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_entries_repeat1,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(136), 1,
      sym_entry,
    STATE(194), 1,
      sym_entries,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1123] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      aux_sym_path_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(41), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(180), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 9,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1164] = 20,
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
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(176), 1,
      sym_number,
    STATE(32), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_entries_repeat1,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(136), 1,
      sym_entry,
    STATE(220), 1,
      sym_entries,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1227] = 19,
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
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_entries_repeat1,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(137), 1,
      sym_entry,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1287] = 19,
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
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_entries_repeat1,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(125), 1,
      sym_entry,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1347] = 19,
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
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_entries_repeat1,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(154), 1,
      sym_entry,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1407] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      sym_id,
    ACTIONS(196), 1,
      sym_disabled,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_BQUOTE,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(159), 1,
      sym_entry,
    STATE(225), 1,
      sym_string,
    STATE(36), 2,
      sym_comment,
      aux_sym_entries_repeat1,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1465] = 19,
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
    STATE(36), 1,
      aux_sym_entries_repeat1,
    STATE(37), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(144), 1,
      sym_entry,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1525] = 19,
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
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_entries_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(134), 1,
      sym_entry,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1585] = 19,
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
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_entries_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(145), 1,
      sym_entry,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1645] = 18,
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
    STATE(36), 1,
      aux_sym_entries_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(135), 1,
      sym_entry,
    STATE(225), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [1702] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(41), 1,
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
  [1733] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(42), 1,
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
  [1764] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(43), 1,
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
  [1795] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_AT,
    STATE(63), 1,
      sym_decorator,
    STATE(44), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(237), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(232), 7,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [1828] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(45), 1,
      sym_comment,
    ACTIONS(241), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(239), 10,
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
  [1857] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      sym_comment,
    ACTIONS(245), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(243), 10,
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
  [1886] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_comment,
    ACTIONS(247), 5,
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
  [1915] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_comment,
    ACTIONS(251), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(249), 10,
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
  [1944] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_comment,
    ACTIONS(255), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(253), 10,
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
  [1973] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      sym_comment,
    ACTIONS(259), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(257), 10,
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
  [2002] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_comment,
    ACTIONS(263), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(261), 10,
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
  [2031] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(267), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(265), 10,
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
  [2060] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(271), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(269), 10,
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
  [2089] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(180), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 10,
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
  [2118] = 16,
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
    ACTIONS(112), 1,
      sym_disabled,
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(273), 1,
      sym_id,
    ACTIONS(275), 1,
      sym_number,
    STATE(55), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_entry_repeat1,
    STATE(92), 1,
      sym_decorator,
    STATE(203), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [2169] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(279), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 10,
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
  [2198] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(283), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(281), 10,
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
  [2227] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_comment,
    ACTIONS(287), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(285), 10,
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
  [2256] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(291), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 10,
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
  [2285] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_comment,
    ACTIONS(295), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 10,
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
  [2314] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(61), 1,
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
  [2343] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(303), 5,
      sym_id,
      anon_sym_DQUOTE,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(301), 10,
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
  [2372] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(63), 1,
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
  [2399] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(64), 1,
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
  [2426] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_path_repeat1,
    ACTIONS(160), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(78), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(154), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2461] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(66), 1,
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
  [2488] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(67), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(78), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(162), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2521] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      aux_sym_path_repeat1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(180), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(78), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(178), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2556] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    ACTIONS(327), 1,
      sym_id,
    ACTIONS(329), 1,
      sym_number,
    STATE(69), 1,
      sym_comment,
    STATE(204), 1,
      sym_string,
    STATE(45), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(60), 2,
      sym__ms0,
      sym__ms,
  [2595] = 12,
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
    ACTIONS(331), 1,
      sym_id,
    ACTIONS(333), 1,
      sym_number,
    STATE(70), 1,
      sym_comment,
    STATE(196), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [2634] = 12,
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
    STATE(71), 1,
      sym_comment,
    STATE(212), 1,
      sym_string,
    STATE(172), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(173), 2,
      sym__ms0,
      sym__ms,
  [2673] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    ACTIONS(339), 1,
      sym_id,
    ACTIONS(341), 1,
      sym_number,
    STATE(72), 1,
      sym_comment,
    STATE(202), 1,
      sym_string,
    STATE(45), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(60), 2,
      sym__ms0,
      sym__ms,
  [2712] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    ACTIONS(343), 1,
      sym_id,
    ACTIONS(345), 1,
      sym_number,
    STATE(73), 1,
      sym_comment,
    STATE(214), 1,
      sym_string,
    STATE(45), 2,
      sym_jsonstring,
      sym_multistring,
    STATE(60), 2,
      sym__ms0,
      sym__ms,
  [2751] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(285), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2775] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(347), 1,
      anon_sym_AT,
    STATE(92), 1,
      sym_decorator,
    ACTIONS(237), 2,
      sym_id,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_comment,
      aux_sym_entry_repeat1,
    ACTIONS(232), 5,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2803] = 8,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    STATE(76), 2,
      sym_comment,
      aux_sym_path_repeat1,
    STATE(105), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(170), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2833] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_path_repeat1,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    STATE(105), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(180), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2865] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(78), 1,
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
  [2889] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    STATE(105), 2,
      sym_dotted,
      sym_parened,
    ACTIONS(160), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2921] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(80), 1,
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
  [2945] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(81), 1,
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
  [2969] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_comment,
    ACTIONS(364), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(188), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [2994] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(83), 1,
      sym_comment,
    ACTIONS(364), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(188), 7,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3017] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      anon_sym_BQUOTE,
    STATE(84), 1,
      sym_comment,
    STATE(251), 1,
      sym_string,
    STATE(246), 2,
      sym__ms0,
      sym__ms,
    STATE(247), 2,
      sym_jsonstring,
      sym_multistring,
  [3050] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_comment,
    ACTIONS(364), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(188), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3075] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      sym_comment,
    ACTIONS(241), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(239), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3097] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      sym_comment,
    ACTIONS(303), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(301), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3119] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_comment,
    ACTIONS(251), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(249), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3141] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_comment,
    ACTIONS(263), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(261), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3163] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_comment,
    ACTIONS(279), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(277), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3185] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_comment,
    ACTIONS(267), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(265), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3207] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(92), 1,
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
  [3229] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_comment,
    ACTIONS(245), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(243), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3251] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(94), 1,
      sym_comment,
    ACTIONS(180), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(178), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3273] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(257), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3295] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      sym_comment,
    ACTIONS(255), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(253), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3317] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(269), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3339] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(281), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3361] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_comment,
    ACTIONS(291), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(289), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3383] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(100), 1,
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
  [3405] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(101), 1,
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
  [3427] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(102), 1,
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
  [3449] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym_id,
      anon_sym_DQUOTE,
    ACTIONS(293), 6,
      anon_sym_AT,
      sym_disabled,
      sym_number,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [3471] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(230), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3492] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(105), 1,
      sym_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(222), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3513] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(376), 1,
      aux_sym_entry_token1,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      aux_sym_path_repeat1,
    STATE(106), 1,
      sym_comment,
    STATE(41), 2,
      sym_dotted,
      sym_parened,
  [3542] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(107), 1,
      sym_comment,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(226), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [3563] = 9,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      aux_sym_entry_token1,
    STATE(28), 1,
      aux_sym_path_repeat1,
    STATE(108), 1,
      sym_comment,
    STATE(41), 2,
      sym_dotted,
      sym_parened,
  [3592] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(109), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(299), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3611] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(255), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3630] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(111), 1,
      sym_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(245), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3649] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(112), 1,
      sym_comment,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(251), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3668] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(263), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3687] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(114), 1,
      sym_comment,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(291), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3706] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(283), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3725] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(279), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3744] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(267), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3763] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(303), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3782] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(119), 1,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(241), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3801] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(295), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3820] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(259), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3839] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(271), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3858] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(123), 1,
      sym_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(180), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3877] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_string_content_repeat1,
    STATE(221), 1,
      sym_string_content,
    ACTIONS(384), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [3897] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    STATE(83), 1,
      sym__valsep,
    STATE(125), 1,
      sym_comment,
  [3919] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    STATE(47), 1,
      sym__valsep,
    STATE(126), 1,
      sym_comment,
  [3941] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__valsep,
    STATE(127), 1,
      sym_comment,
  [3963] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(400), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(402), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3981] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__valsep,
    STATE(129), 1,
      sym_comment,
  [4003] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    STATE(47), 1,
      sym__valsep,
    STATE(130), 1,
      sym_comment,
  [4025] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__valsep,
    STATE(131), 1,
      sym_comment,
  [4047] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(408), 1,
      anon_sym_DQUOTE2,
    STATE(132), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(384), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [4067] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(133), 1,
      sym_comment,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4085] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym__valsep,
    STATE(134), 1,
      sym_comment,
  [4107] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    STATE(85), 1,
      sym__valsep,
    STATE(135), 1,
      sym_comment,
  [4129] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym__valsep,
    STATE(136), 1,
      sym_comment,
  [4151] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym__valsep,
    STATE(137), 1,
      sym_comment,
  [4173] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(138), 1,
      sym_comment,
    ACTIONS(420), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(422), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4191] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(139), 1,
      sym_comment,
    ACTIONS(424), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4209] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__valsep,
    STATE(140), 1,
      sym_comment,
  [4231] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    STATE(47), 1,
      sym__valsep,
    STATE(141), 1,
      sym_comment,
  [4253] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__valsep,
    STATE(142), 1,
      sym_comment,
  [4275] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      aux_sym_string_content_repeat1,
    STATE(143), 1,
      sym_comment,
    STATE(217), 1,
      sym_string_content,
    ACTIONS(384), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [4295] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym__valsep,
    STATE(144), 1,
      sym_comment,
  [4317] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym__valsep,
    STATE(145), 1,
      sym_comment,
  [4339] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(146), 1,
      sym_comment,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(438), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4357] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(442), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4375] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(148), 1,
      sym_comment,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(446), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4393] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(149), 1,
      sym_comment,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(450), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4411] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(150), 1,
      sym_comment,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(454), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4429] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(151), 1,
      sym_comment,
    ACTIONS(456), 2,
      ts_builtin_sym_end,
      aux_sym__valsep_token1,
    ACTIONS(458), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4447] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      aux_sym_string_content_repeat1,
    STATE(152), 1,
      sym_comment,
    STATE(208), 1,
      sym_string_content,
    ACTIONS(384), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [4467] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      anon_sym_DQUOTE2,
    ACTIONS(462), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
    STATE(153), 2,
      sym_comment,
      aux_sym_string_content_repeat1,
  [4485] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym__valsep,
    STATE(154), 1,
      sym_comment,
  [4507] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__valsep,
    STATE(155), 1,
      sym_comment,
  [4529] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__valsep,
    STATE(156), 1,
      sym_comment,
  [4551] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      aux_sym_string_content_repeat1,
    STATE(157), 1,
      sym_comment,
    STATE(200), 1,
      sym_string_content,
    ACTIONS(384), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [4571] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      aux_sym_string_content_repeat1,
    STATE(158), 1,
      sym_comment,
    STATE(210), 1,
      sym_string_content,
    ACTIONS(384), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [4591] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym__valsep_token1,
    STATE(83), 1,
      sym__valsep,
    STATE(159), 1,
      sym_comment,
  [4610] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym__valsep_token1,
    STATE(47), 1,
      sym__valsep,
    STATE(160), 1,
      sym_comment,
  [4629] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(161), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_DQUOTE2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [4644] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(475), 1,
      sym_ms_end,
    STATE(162), 1,
      sym_comment,
  [4660] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
  [4674] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(477), 1,
      aux_sym__ms0_token1,
    STATE(164), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym__ms_repeat1,
  [4690] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(479), 1,
      aux_sym__ms0_token1,
    STATE(164), 1,
      aux_sym__ms_repeat1,
    STATE(165), 1,
      sym_comment,
  [4706] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(481), 1,
      aux_sym__ms0_token1,
    STATE(166), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym__ms_repeat1,
  [4722] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(483), 1,
      aux_sym__ms0_token1,
    STATE(166), 1,
      aux_sym__ms_repeat1,
    STATE(167), 1,
      sym_comment,
  [4738] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(485), 1,
      aux_sym__ms0_token1,
    STATE(168), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym__ms_repeat1,
  [4754] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(487), 1,
      aux_sym__ms0_token1,
    STATE(168), 1,
      aux_sym__ms_repeat1,
    STATE(169), 1,
      sym_comment,
  [4770] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      aux_sym__ms0_token1,
    STATE(170), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym__ms_repeat1,
  [4786] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(491), 1,
      aux_sym__ms0_token1,
    STATE(170), 1,
      aux_sym__ms_repeat1,
    STATE(171), 1,
      sym_comment,
  [4802] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(172), 1,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
  [4816] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(173), 1,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
  [4830] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(174), 1,
      sym_comment,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
  [4844] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(493), 1,
      sym_ms_end,
    STATE(175), 1,
      sym_comment,
  [4860] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(495), 1,
      sym_ms_end,
    STATE(176), 1,
      sym_comment,
  [4876] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(497), 1,
      sym_ms_end,
    STATE(177), 1,
      sym_comment,
  [4892] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(499), 1,
      sym_ms_end,
    STATE(178), 1,
      sym_comment,
  [4908] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(179), 1,
      sym_comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
  [4922] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(501), 1,
      sym_ms_end,
    STATE(180), 1,
      sym_comment,
  [4938] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(503), 1,
      sym_ms_end,
    STATE(181), 1,
      sym_comment,
  [4954] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      aux_sym__ms0_token1,
    STATE(182), 2,
      sym_comment,
      aux_sym__ms_repeat1,
  [4968] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(508), 1,
      sym_ms_end,
    STATE(183), 1,
      sym_comment,
  [4984] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(510), 1,
      sym_ms_end,
    STATE(184), 1,
      sym_comment,
  [5000] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      aux_sym_entry_token1,
    STATE(185), 1,
      sym_comment,
  [5016] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
      sym_comment,
  [5032] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(376), 1,
      aux_sym_entry_token1,
    STATE(187), 1,
      sym_comment,
  [5048] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    ACTIONS(516), 1,
      sym_ms_end,
    STATE(188), 1,
      sym_comment,
  [5064] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(518), 1,
      aux_sym__ms0_token1,
    STATE(182), 1,
      aux_sym__ms_repeat1,
    STATE(189), 1,
      sym_comment,
  [5080] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      aux_sym__ms0_token1,
    STATE(189), 1,
      aux_sym__ms_repeat1,
    STATE(190), 1,
      sym_comment,
  [5096] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(191), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
  [5110] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    STATE(192), 1,
      sym_comment,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      aux_sym_entry_token1,
  [5124] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(522), 1,
      sym_id,
    STATE(193), 1,
      sym_comment,
  [5137] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_comment,
  [5150] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(526), 1,
      anon_sym_PIPE,
    STATE(195), 1,
      sym_comment,
  [5163] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      aux_sym_entry_token1,
    STATE(196), 1,
      sym_comment,
  [5176] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(530), 1,
      aux_sym__ms0_token1,
    STATE(197), 1,
      sym_comment,
  [5189] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(532), 1,
      anon_sym_SQUOTE,
    STATE(198), 1,
      sym_comment,
  [5202] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(534), 1,
      sym_id,
    STATE(199), 1,
      sym_comment,
  [5215] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(536), 1,
      anon_sym_DQUOTE2,
    STATE(200), 1,
      sym_comment,
  [5228] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(538), 1,
      anon_sym_SQUOTE,
    STATE(201), 1,
      sym_comment,
  [5241] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym_comment,
  [5254] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(376), 1,
      aux_sym_entry_token1,
    STATE(203), 1,
      sym_comment,
  [5267] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_comment,
  [5280] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    STATE(205), 1,
      sym_comment,
  [5293] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    STATE(206), 1,
      sym_comment,
  [5306] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
    STATE(207), 1,
      sym_comment,
  [5319] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(548), 1,
      anon_sym_DQUOTE2,
    STATE(208), 1,
      sym_comment,
  [5332] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(550), 1,
      sym_ms_start,
    STATE(209), 1,
      sym_comment,
  [5345] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(552), 1,
      anon_sym_DQUOTE2,
    STATE(210), 1,
      sym_comment,
  [5358] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(554), 1,
      anon_sym_SQUOTE,
    STATE(211), 1,
      sym_comment,
  [5371] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      aux_sym_entry_token1,
    STATE(212), 1,
      sym_comment,
  [5384] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(558), 1,
      sym_id,
    STATE(213), 1,
      sym_comment,
  [5397] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_comment,
  [5410] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(562), 1,
      sym_ms_start,
    STATE(215), 1,
      sym_comment,
  [5423] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    STATE(216), 1,
      sym_comment,
  [5436] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(566), 1,
      anon_sym_DQUOTE2,
    STATE(217), 1,
      sym_comment,
  [5449] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
    STATE(218), 1,
      sym_comment,
  [5462] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      sym_ms_start,
    STATE(219), 1,
      sym_comment,
  [5475] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_comment,
  [5488] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(574), 1,
      anon_sym_DQUOTE2,
    STATE(221), 1,
      sym_comment,
  [5501] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
    STATE(222), 1,
      sym_comment,
  [5514] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      sym_comment,
  [5527] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(580), 1,
      anon_sym_PIPE,
    STATE(224), 1,
      sym_comment,
  [5540] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      aux_sym_entry_token1,
    STATE(225), 1,
      sym_comment,
  [5553] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(582), 1,
      aux_sym__ms0_token1,
    STATE(226), 1,
      sym_comment,
  [5566] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym_comment,
  [5579] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym_comment,
  [5592] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym_comment,
  [5605] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_comment,
  [5618] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(592), 1,
      aux_sym__ms0_token1,
    STATE(231), 1,
      sym_comment,
  [5631] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(594), 1,
      sym_ms_start,
    STATE(232), 1,
      sym_comment,
  [5644] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(596), 1,
      anon_sym_SQUOTE,
    STATE(233), 1,
      sym_comment,
  [5657] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(598), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym_comment,
  [5670] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    STATE(235), 1,
      sym_comment,
  [5683] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(600), 1,
      aux_sym__ms0_token1,
    STATE(236), 1,
      sym_comment,
  [5696] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_comment,
  [5709] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_comment,
  [5722] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      aux_sym__ms0_token1,
    STATE(239), 1,
      sym_comment,
  [5735] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(606), 1,
      aux_sym__ms0_token1,
    STATE(240), 1,
      sym_comment,
  [5748] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(608), 1,
      anon_sym_SQUOTE,
    STATE(241), 1,
      sym_comment,
  [5761] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym_comment,
  [5774] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(243), 1,
      sym_comment,
  [5787] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(612), 1,
      sym_ms_start,
    STATE(244), 1,
      sym_comment,
  [5800] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SLASH,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    STATE(245), 1,
      sym_comment,
  [5813] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [5817] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [5821] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [5825] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [5829] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [5833] = 1,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
  [5837] = 1,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
  [5841] = 1,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
  [5845] = 1,
    ACTIONS(269), 1,
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
  [SMALL_STATE(20)] = 494,
  [SMALL_STATE(21)] = 556,
  [SMALL_STATE(22)] = 618,
  [SMALL_STATE(23)] = 680,
  [SMALL_STATE(24)] = 742,
  [SMALL_STATE(25)] = 801,
  [SMALL_STATE(26)] = 860,
  [SMALL_STATE(27)] = 919,
  [SMALL_STATE(28)] = 978,
  [SMALL_STATE(29)] = 1020,
  [SMALL_STATE(30)] = 1060,
  [SMALL_STATE(31)] = 1123,
  [SMALL_STATE(32)] = 1164,
  [SMALL_STATE(33)] = 1227,
  [SMALL_STATE(34)] = 1287,
  [SMALL_STATE(35)] = 1347,
  [SMALL_STATE(36)] = 1407,
  [SMALL_STATE(37)] = 1465,
  [SMALL_STATE(38)] = 1525,
  [SMALL_STATE(39)] = 1585,
  [SMALL_STATE(40)] = 1645,
  [SMALL_STATE(41)] = 1702,
  [SMALL_STATE(42)] = 1733,
  [SMALL_STATE(43)] = 1764,
  [SMALL_STATE(44)] = 1795,
  [SMALL_STATE(45)] = 1828,
  [SMALL_STATE(46)] = 1857,
  [SMALL_STATE(47)] = 1886,
  [SMALL_STATE(48)] = 1915,
  [SMALL_STATE(49)] = 1944,
  [SMALL_STATE(50)] = 1973,
  [SMALL_STATE(51)] = 2002,
  [SMALL_STATE(52)] = 2031,
  [SMALL_STATE(53)] = 2060,
  [SMALL_STATE(54)] = 2089,
  [SMALL_STATE(55)] = 2118,
  [SMALL_STATE(56)] = 2169,
  [SMALL_STATE(57)] = 2198,
  [SMALL_STATE(58)] = 2227,
  [SMALL_STATE(59)] = 2256,
  [SMALL_STATE(60)] = 2285,
  [SMALL_STATE(61)] = 2314,
  [SMALL_STATE(62)] = 2343,
  [SMALL_STATE(63)] = 2372,
  [SMALL_STATE(64)] = 2399,
  [SMALL_STATE(65)] = 2426,
  [SMALL_STATE(66)] = 2461,
  [SMALL_STATE(67)] = 2488,
  [SMALL_STATE(68)] = 2521,
  [SMALL_STATE(69)] = 2556,
  [SMALL_STATE(70)] = 2595,
  [SMALL_STATE(71)] = 2634,
  [SMALL_STATE(72)] = 2673,
  [SMALL_STATE(73)] = 2712,
  [SMALL_STATE(74)] = 2751,
  [SMALL_STATE(75)] = 2775,
  [SMALL_STATE(76)] = 2803,
  [SMALL_STATE(77)] = 2833,
  [SMALL_STATE(78)] = 2865,
  [SMALL_STATE(79)] = 2889,
  [SMALL_STATE(80)] = 2921,
  [SMALL_STATE(81)] = 2945,
  [SMALL_STATE(82)] = 2969,
  [SMALL_STATE(83)] = 2994,
  [SMALL_STATE(84)] = 3017,
  [SMALL_STATE(85)] = 3050,
  [SMALL_STATE(86)] = 3075,
  [SMALL_STATE(87)] = 3097,
  [SMALL_STATE(88)] = 3119,
  [SMALL_STATE(89)] = 3141,
  [SMALL_STATE(90)] = 3163,
  [SMALL_STATE(91)] = 3185,
  [SMALL_STATE(92)] = 3207,
  [SMALL_STATE(93)] = 3229,
  [SMALL_STATE(94)] = 3251,
  [SMALL_STATE(95)] = 3273,
  [SMALL_STATE(96)] = 3295,
  [SMALL_STATE(97)] = 3317,
  [SMALL_STATE(98)] = 3339,
  [SMALL_STATE(99)] = 3361,
  [SMALL_STATE(100)] = 3383,
  [SMALL_STATE(101)] = 3405,
  [SMALL_STATE(102)] = 3427,
  [SMALL_STATE(103)] = 3449,
  [SMALL_STATE(104)] = 3471,
  [SMALL_STATE(105)] = 3492,
  [SMALL_STATE(106)] = 3513,
  [SMALL_STATE(107)] = 3542,
  [SMALL_STATE(108)] = 3563,
  [SMALL_STATE(109)] = 3592,
  [SMALL_STATE(110)] = 3611,
  [SMALL_STATE(111)] = 3630,
  [SMALL_STATE(112)] = 3649,
  [SMALL_STATE(113)] = 3668,
  [SMALL_STATE(114)] = 3687,
  [SMALL_STATE(115)] = 3706,
  [SMALL_STATE(116)] = 3725,
  [SMALL_STATE(117)] = 3744,
  [SMALL_STATE(118)] = 3763,
  [SMALL_STATE(119)] = 3782,
  [SMALL_STATE(120)] = 3801,
  [SMALL_STATE(121)] = 3820,
  [SMALL_STATE(122)] = 3839,
  [SMALL_STATE(123)] = 3858,
  [SMALL_STATE(124)] = 3877,
  [SMALL_STATE(125)] = 3897,
  [SMALL_STATE(126)] = 3919,
  [SMALL_STATE(127)] = 3941,
  [SMALL_STATE(128)] = 3963,
  [SMALL_STATE(129)] = 3981,
  [SMALL_STATE(130)] = 4003,
  [SMALL_STATE(131)] = 4025,
  [SMALL_STATE(132)] = 4047,
  [SMALL_STATE(133)] = 4067,
  [SMALL_STATE(134)] = 4085,
  [SMALL_STATE(135)] = 4107,
  [SMALL_STATE(136)] = 4129,
  [SMALL_STATE(137)] = 4151,
  [SMALL_STATE(138)] = 4173,
  [SMALL_STATE(139)] = 4191,
  [SMALL_STATE(140)] = 4209,
  [SMALL_STATE(141)] = 4231,
  [SMALL_STATE(142)] = 4253,
  [SMALL_STATE(143)] = 4275,
  [SMALL_STATE(144)] = 4295,
  [SMALL_STATE(145)] = 4317,
  [SMALL_STATE(146)] = 4339,
  [SMALL_STATE(147)] = 4357,
  [SMALL_STATE(148)] = 4375,
  [SMALL_STATE(149)] = 4393,
  [SMALL_STATE(150)] = 4411,
  [SMALL_STATE(151)] = 4429,
  [SMALL_STATE(152)] = 4447,
  [SMALL_STATE(153)] = 4467,
  [SMALL_STATE(154)] = 4485,
  [SMALL_STATE(155)] = 4507,
  [SMALL_STATE(156)] = 4529,
  [SMALL_STATE(157)] = 4551,
  [SMALL_STATE(158)] = 4571,
  [SMALL_STATE(159)] = 4591,
  [SMALL_STATE(160)] = 4610,
  [SMALL_STATE(161)] = 4629,
  [SMALL_STATE(162)] = 4644,
  [SMALL_STATE(163)] = 4660,
  [SMALL_STATE(164)] = 4674,
  [SMALL_STATE(165)] = 4690,
  [SMALL_STATE(166)] = 4706,
  [SMALL_STATE(167)] = 4722,
  [SMALL_STATE(168)] = 4738,
  [SMALL_STATE(169)] = 4754,
  [SMALL_STATE(170)] = 4770,
  [SMALL_STATE(171)] = 4786,
  [SMALL_STATE(172)] = 4802,
  [SMALL_STATE(173)] = 4816,
  [SMALL_STATE(174)] = 4830,
  [SMALL_STATE(175)] = 4844,
  [SMALL_STATE(176)] = 4860,
  [SMALL_STATE(177)] = 4876,
  [SMALL_STATE(178)] = 4892,
  [SMALL_STATE(179)] = 4908,
  [SMALL_STATE(180)] = 4922,
  [SMALL_STATE(181)] = 4938,
  [SMALL_STATE(182)] = 4954,
  [SMALL_STATE(183)] = 4968,
  [SMALL_STATE(184)] = 4984,
  [SMALL_STATE(185)] = 5000,
  [SMALL_STATE(186)] = 5016,
  [SMALL_STATE(187)] = 5032,
  [SMALL_STATE(188)] = 5048,
  [SMALL_STATE(189)] = 5064,
  [SMALL_STATE(190)] = 5080,
  [SMALL_STATE(191)] = 5096,
  [SMALL_STATE(192)] = 5110,
  [SMALL_STATE(193)] = 5124,
  [SMALL_STATE(194)] = 5137,
  [SMALL_STATE(195)] = 5150,
  [SMALL_STATE(196)] = 5163,
  [SMALL_STATE(197)] = 5176,
  [SMALL_STATE(198)] = 5189,
  [SMALL_STATE(199)] = 5202,
  [SMALL_STATE(200)] = 5215,
  [SMALL_STATE(201)] = 5228,
  [SMALL_STATE(202)] = 5241,
  [SMALL_STATE(203)] = 5254,
  [SMALL_STATE(204)] = 5267,
  [SMALL_STATE(205)] = 5280,
  [SMALL_STATE(206)] = 5293,
  [SMALL_STATE(207)] = 5306,
  [SMALL_STATE(208)] = 5319,
  [SMALL_STATE(209)] = 5332,
  [SMALL_STATE(210)] = 5345,
  [SMALL_STATE(211)] = 5358,
  [SMALL_STATE(212)] = 5371,
  [SMALL_STATE(213)] = 5384,
  [SMALL_STATE(214)] = 5397,
  [SMALL_STATE(215)] = 5410,
  [SMALL_STATE(216)] = 5423,
  [SMALL_STATE(217)] = 5436,
  [SMALL_STATE(218)] = 5449,
  [SMALL_STATE(219)] = 5462,
  [SMALL_STATE(220)] = 5475,
  [SMALL_STATE(221)] = 5488,
  [SMALL_STATE(222)] = 5501,
  [SMALL_STATE(223)] = 5514,
  [SMALL_STATE(224)] = 5527,
  [SMALL_STATE(225)] = 5540,
  [SMALL_STATE(226)] = 5553,
  [SMALL_STATE(227)] = 5566,
  [SMALL_STATE(228)] = 5579,
  [SMALL_STATE(229)] = 5592,
  [SMALL_STATE(230)] = 5605,
  [SMALL_STATE(231)] = 5618,
  [SMALL_STATE(232)] = 5631,
  [SMALL_STATE(233)] = 5644,
  [SMALL_STATE(234)] = 5657,
  [SMALL_STATE(235)] = 5670,
  [SMALL_STATE(236)] = 5683,
  [SMALL_STATE(237)] = 5696,
  [SMALL_STATE(238)] = 5709,
  [SMALL_STATE(239)] = 5722,
  [SMALL_STATE(240)] = 5735,
  [SMALL_STATE(241)] = 5748,
  [SMALL_STATE(242)] = 5761,
  [SMALL_STATE(243)] = 5774,
  [SMALL_STATE(244)] = 5787,
  [SMALL_STATE(245)] = 5800,
  [SMALL_STATE(246)] = 5813,
  [SMALL_STATE(247)] = 5817,
  [SMALL_STATE(248)] = 5821,
  [SMALL_STATE(249)] = 5825,
  [SMALL_STATE(250)] = 5829,
  [SMALL_STATE(251)] = 5833,
  [SMALL_STATE(252)] = 5837,
  [SMALL_STATE(253)] = 5841,
  [SMALL_STATE(254)] = 5845,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(35),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(77),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(26),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(110),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(118),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(158),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(110),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(231),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_repeat1, 2), SHIFT_REPEAT(219),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 14),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5, .production_id = 15),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(213),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(72),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__plainval, 1, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(21),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(225),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(71),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(225),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(192),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(152),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(197),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entries_repeat1, 2), SHIFT_REPEAT(244),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parened, 3, .production_id = 11),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parened, 3, .production_id = 11),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted, 2, .production_id = 8),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted, 2, .production_id = 8),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(20),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 6, .production_id = 20),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 6, .production_id = 20),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms, 5, .production_id = 16),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms, 5, .production_id = 16),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ms0, 3, .production_id = 9),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ms0, 3, .production_id = 9),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valsep, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valsep, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multistring, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multistring, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonstring, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonstring, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3, .production_id = 6),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 3, .production_id = 6),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2, .production_id = 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorator, 2, .production_id = 3),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(193),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(73),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(21),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(199),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(69),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entries, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entries_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entries, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 7, .production_id = 21),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 18),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 17),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 17),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entries, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, .production_id = 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, .production_id = 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, .production_id = 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 13),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 13),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 5),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 12),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 12),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 10),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 10),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, .production_id = 4),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2, .production_id = 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, .production_id = 7),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, .production_id = 7),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(161),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ms_repeat1, 2), SHIFT_REPEAT(223),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 6, .production_id = 14),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [614] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
