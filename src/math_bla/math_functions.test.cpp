#include <gtest/gtest.h>
#include "math_functions.h"

// Teste para a função add
TEST(AdditionTest, HandlesPositiveInput) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(10, 20), 30);
    EXPECT_EQ(add(100, 200), 300);
}

TEST(AdditionTest, HandlesNegativeInput) {
    EXPECT_EQ(add(-1, -2), -3);
    EXPECT_EQ(add(-10, -20), -30);
    EXPECT_EQ(add(-100, -200), -300);
}

TEST(AdditionTest, HandlesMixedInput) {
    EXPECT_EQ(add(-1, 1), 0);
    EXPECT_EQ(add(-10, 20), 10);
    EXPECT_EQ(add(-100, 200), 100);
}
