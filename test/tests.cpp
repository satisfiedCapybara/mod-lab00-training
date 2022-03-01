// Copyright 2020 GHA Test Team
#include "fun.h"

#include <gtest/gtest.h>

TEST(MyFunTest, test1) {
  long long x=2;
  unsigned short n=8;
  long long result=power(x,n);
  EXPECT_EQ(256,result);
}

