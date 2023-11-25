#include "print.hpp"

#include <cstdio>

void debug::print(lexing::token::Tag tag) {
#define TAG_CASE(TAG)             \
    case lexing::token::Tag::TAG: \
        printf(#TAG);             \
        break;

    switch (tag) {
        TAG_CASE(ILLEGAL)
        TAG_CASE(EOI)
        TAG_CASE(IDENTIFIER)
        TAG_CASE(INTEGER)
        TAG_CASE(ASSIGN)
        TAG_CASE(SEMICOLON)
        TAG_CASE(LET)
        TAG_CASE(IF)
    }
}
