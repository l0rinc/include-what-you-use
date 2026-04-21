//===--- user_defined_literal.cc - test input file for iwyu ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// IWYU_ARGS: -I .

#include "user_defined_literal-d1.h"

// IWYU: operator""_x(unsigned long long) is...*user_defined_literal-i1.h
constexpr unsigned long long kLiteralValue = 1_x;

int main() { return kLiteralValue; }

/**** IWYU_SUMMARY

tests/cxx/user_defined_literal.cc should add these lines:
#include "tests/cxx/user_defined_literal-i1.h"

tests/cxx/user_defined_literal.cc should remove these lines:
- #include "user_defined_literal-d1.h"  // lines XX-XX

The full include-list for tests/cxx/user_defined_literal.cc:
#include "tests/cxx/user_defined_literal-i1.h"  // for operator""_x

***** IWYU_SUMMARY */
