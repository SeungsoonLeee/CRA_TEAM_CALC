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

TEST(TestCaseName, TestSum) {
	Calculator calc;
	EXPECT_EQ(calc.getSum(5, 7), 12);
}

TEST(TestCaseName, TestGop) {
	Calculator c;

	EXPECT_EQ(6, c.getGop(2, 3));
	EXPECT_EQ(15, c.getGop(3, 5));
	EXPECT_EQ(42, c.getGop(7, 6));
	EXPECT_EQ(9, c.getGop(3, 3));
	EXPECT_EQ(1, c.getGop(1, 1));
}
