//===--- user_defined_literal_include-i1.h - test input file for iwyu -----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_I1_H_
#define INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_I1_H_

#include "user_defined_literal_include-i2.h"

inline constexpr int kIndirectSize = sizeof(IndirectUse);

#endif  // INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_I1_H_
