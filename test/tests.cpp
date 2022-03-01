// Copyright 2020 UNN-IASR
#include "fun.h"

#include <gtest/gtest.h>

TEST(MyFunTest, test1) {
  int64_t x = 2;
  uint16_t n = 8;
  uint64_t result = power(x, n);
  EXPECT_EQ(256, result);
}
