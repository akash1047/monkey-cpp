#ifndef LEXING_TOKEN_HPP
#define LEXING_TOKEN_HPP

namespace lexing {
namespace token {

class Slice {
    public:
    char *ptr{nullptr};
    unsigned int len{0};

    Slice() = default;
    Slice(char *ptr, unsigned int len) : ptr(ptr), len(len) {}
};

enum Tag {
    ILLEGAL,
    EOI,

    IDENTIFIER,
    INTEGER,

    ASSIGN,
    SEMICOLON,

    LET,
    IF,
};

class Token {
    public:
    Tag tag{ILLEGAL};
    Slice value{};
};

}  // namespace token

}  // namespace lexing

#endif  // LEXING_TOKEN_HPP