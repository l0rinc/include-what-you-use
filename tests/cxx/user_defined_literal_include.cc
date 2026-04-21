//===--- user_defined_literal_include.cc - test input file for iwyu -------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// IWYU_ARGS: -std=c++17 -Xiwyu --check_also="tests/cxx/*-d1.h" -I .

// Tests that a header using a user-defined literal keeps the direct include
// that declares the literal operator, even if that header is also reachable
// transitively through another direct include.

#include "user_defined_literal_include-d1.h"

int main() {
  return static_cast<int>(kLiteralValue + kTransitiveUse);
}

/**** IWYU_SUMMARY

(tests/cxx/user_defined_literal_include.cc has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
