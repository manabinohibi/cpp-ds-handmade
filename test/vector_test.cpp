#include "vector.hpp"

#include <gtest/gtest.h>

TEST(VectorTest, PushBackAndSize) {
    manabu::handmade::Vector<int> vec;
    EXPECT_EQ(vec.size(), 0);
    EXPECT_EQ(vec.capacity(), 0);
    vec.PushBack(1);
    EXPECT_EQ(vec.size(), 1);
    EXPECT_LE(vec.size(), vec.capacity());
    vec.PushBack(2);
    EXPECT_EQ(vec.size(), 2);
    EXPECT_LE(vec.size(), vec.capacity());
    vec.PushBack(10);
    EXPECT_EQ(vec.size(), 3);
    EXPECT_LE(vec.size(), vec.capacity());
}