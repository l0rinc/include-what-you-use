//===--- user_defined_literal_include-i2.h - test input file for iwyu -----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_I2_H_
#define INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_I2_H_

struct IndirectUse {};

constexpr unsigned long long operator""_x(unsigned long long value) {
  return value;
}

#endif  // INCLUDE_WHAT_YOU_USE_TESTS_CXX_USER_DEFINED_LITERAL_INCLUDE_I2_H_
