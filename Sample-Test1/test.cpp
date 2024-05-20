#include "pch.h"
#include "../Project21/Calculator.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, TestSum) {
	Calculator calc;
	EXPECT_EQ(calc.getSum(5, 7), 12);
}
