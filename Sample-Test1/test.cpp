#include "pch.h"
#include "../Project21/Calculator.cpp"

TEST(getMinusTest, POSITIVE_RESULT) {
	Calculator calc;
	EXPECT_EQ(1, calc.getMinus(2, 1));
}

TEST(getMinusTest, NEGATIVE_RESULT) {
	Calculator calc;
	EXPECT_EQ(-1, calc.getMinus(2, 3));
}
