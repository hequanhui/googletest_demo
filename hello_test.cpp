#include <gtest/gtest.h>

TEST(HELLO_TEST, BasicAssertions) {
	EXPECT_STRNE("hello", "world");
	EXPECT_EQ(7 * 6, 42);
	EXPECT_EQ(7 * 6, 43);
}