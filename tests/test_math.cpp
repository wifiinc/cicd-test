#include <gtest/gtest.h>

#include "math.h"

TEST(MathTest, Add) { EXPECT_EQ(add(2, 3), 5); }

TEST(MathTest, Subtract) {
    EXPECT_EQ(subtract(10, 3), 7);
    EXPECT_EQ(subtract(9, 3), 6);
}

TEST(MathTest, SubtractNegative) { EXPECT_EQ(subtract(10, -3), 13); }

TEST(MathTest, AddFail) {
    EXPECT_EQ(add(1, 2), 69);
}
