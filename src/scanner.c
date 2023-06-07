#include <tree_sitter/parser.h>
#include <wchar.h>
#include <wctype.h>
#include <string.h>
#include <assert.h>

typedef enum {
    MS_START,
    MS_END,

    ERROR_SENTINEL,
} TokenType;


typedef struct {
    uint8_t delimiter_length;
} Scanner;

#define delimiter '`'

unsigned tree_sitter_fitzjson_external_scanner_serialize(
    void *payload,
    char* buffer
) {
    Scanner *scanner = (Scanner *)payload;

    size_t i = 0;
    buffer[i++] = scanner->delimiter_length;
    return i;
}

void tree_sitter_fitzjson_external_scanner_deserialize(
    void *payload,
    char* buffer,
    unsigned length
) {
    Scanner *s = (Scanner *)payload;

    s->delimiter_length = 0;
    if (length > 0) {
        size_t i = 0;
        s->delimiter_length = buffer[i++];
    }
}

void *tree_sitter_fitzjson_external_scanner_create() {
    Scanner *s = (Scanner *)malloc(sizeof(Scanner));

    tree_sitter_fitzjson_external_scanner_deserialize(s, NULL, 0);

    return s;
}

bool tree_sitter_fitzjson_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    Scanner *s = (Scanner *)payload;
    
    // A normal tree-sitter rule decided that the current branch is invalid and now "requests"
    // an error to stop the branch
    if (valid_symbols[ERROR_SENTINEL]) {
        // todo: should this be a different symbol?
        lexer->result_symbol = ERROR_SENTINEL;
        return true;
    }

    if (lexer->eof(lexer)) {
        return false;
    }

    // todo: limit max level to 255 or so
    if (valid_symbols[MS_START]) {
        // note: level = 1 because we started matching from the second backtick
        // this makes the implementation simpler because we can rely on the builtin scanner to find the first ` for us
        size_t level = 1;
        while (lexer->lookahead == delimiter) {
            lexer->advance(lexer, false);
            level++;
        }
        // lexer->mark_end(lexer);

        if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            lexer->result_symbol = MS_START;
            s->delimiter_length = level;
            return true;
        }
    } 
    else if (valid_symbols[MS_END]) {
        size_t level = 0;
        while (lexer->lookahead == delimiter) {
            lexer->advance(lexer, false);
            level++;

            if (level == s->delimiter_length) {
                s->delimiter_length = 0;
                lexer->result_symbol = MS_END;
                return true;
            }
        }
        // lexer->mark_end(lexer);
    }

    return false;
}

void tree_sitter_fitzjson_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    free(scanner);
}
