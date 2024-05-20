#include "pch.h"
#include "../Project21/Calculator.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, TestGop) {
	Calculator c;

	EXPECT_EQ(6, c.getGop(2, 3));
	EXPECT_EQ(15, c.getGop(3, 5));
	EXPECT_EQ(42, c.getGop(7, 6));
	EXPECT_EQ(9, c.getGop(3, 3));
	EXPECT_EQ(1, c.getGop(1, 1));
}
