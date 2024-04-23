
#include <iostream>

#include "gtest/gtest.h"
#include "math_lib.h"

namespace{
    TEST(test_math, test_add)
    {
        bool sum = myMath::IsPrime(2);
        EXPECT_EQ(sum, true);
    }
}