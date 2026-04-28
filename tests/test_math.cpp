#include <gtest/gtest.h>

#include <libnostd/math/core.hpp>

TEST(MATH, square){
	using math::square;
	EXPECT_DOUBLE_EQ(square(2), 4);
        EXPECT_DOUBLE_EQ(square(1), 1);
        EXPECT_DOUBLE_EQ(square(0), 0);
        EXPECT_DOUBLE_EQ(square(100), 10000);
        EXPECT_DOUBLE_EQ(square(-10), 100);
        EXPECT_DOUBLE_EQ(square(2.5), 6.25);
        EXPECT_DOUBLE_EQ(square(0.1), 0.01);
}

TEST(MATH, fast_power){
	//
}
