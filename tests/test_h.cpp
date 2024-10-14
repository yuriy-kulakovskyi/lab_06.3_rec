#include <gtest/gtest.h>
#include "../include/main.h"

TEST(SumTest, HandleSum) {
  const int n = 5;
  int a[n] = { 1, 2, 3, 4, 5 };

  int sum = Sum(a, n, 0);

  EXPECT_EQ(sum, 9);
}