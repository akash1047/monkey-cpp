#ifndef DEBUG_PRINT_HPP
#define DEBUG_PRINT_HPP

#include <concepts>
#include <type_traits>

#include "../lexing/token.hpp"

namespace debug {

void print(lexing::token::Tag);

void println();

}  // namespace debug

#endif  // DEBUG_PRINT_HPP