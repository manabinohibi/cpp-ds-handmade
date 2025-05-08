#include "sample.hpp"

#include <gtest/gtest.h>

TEST(SampleVectorTest, PushBackAndSize) {
    SampleVector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    EXPECT_EQ(vec.size(), 2);
    EXPECT_EQ(vec.at(0), 1);
    EXPECT_EQ(vec.at(1), 2);
}
