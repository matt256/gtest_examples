
#include <iostream>

#include "gtest/gtest.h"
#include "math.h"

namespace{
TEST(test_math, test_add)
{
    double sum = math::IsPrime(2);
    EXPECT_EQ(sum, 5.0);
}
}