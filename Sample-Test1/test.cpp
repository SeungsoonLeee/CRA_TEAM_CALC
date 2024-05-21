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

TEST(TestCaseName, TestSumSum) {
	Calculator c;

	EXPECT_EQ(8, c.getSumSum(1, 3));
	EXPECT_EQ(26, c.getSumSum(5, 8));
}

TEST(CalculatorTest, getZegop) {
	Calculator calc;
	EXPECT_EQ(1, calc.getZegop(1, 1));
	EXPECT_EQ(1, calc.getZegop(1, 2));
	EXPECT_EQ(2, calc.getZegop(2, 1));
	EXPECT_EQ(4, calc.getZegop(2, 2));
	EXPECT_EQ(8, calc.getZegop(2, 3));
	EXPECT_EQ(16, calc.getZegop(2, 4));
}
