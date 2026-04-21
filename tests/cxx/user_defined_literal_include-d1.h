//===--- user_defined_literal_include-d1.h - test input file for iwyu -----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that a user-defined literal in a header counts as a direct use of the
// header that declares the literal operator.

#ifndef INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_D1_H_
#define INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_D1_H_

#include "user_defined_literal_include-i1.h"
#include "user_defined_literal_include-i2.h"

constexpr int kTransitiveUse = kIndirectSize;
constexpr unsigned long long kLiteralValue = 1_x;

#endif  // INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_D1_H_

/**** IWYU_SUMMARY

(tests/cxx/user_defined_literal_include-d1.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
