#include "vector.hpp"

#include <gtest/gtest.h>

TEST(VectorTest, InitiallyEmpty) {
    manabu::handmade::Vector<int> vec;
    EXPECT_EQ(vec.size(), 0);
    EXPECT_EQ(vec.capacity(), 0);
}

TEST(VectorTest, PushBackIncreasesSizeAndStoresValues) {
    manabu::handmade::Vector<int> vec;
    vec.PushBack(1);
    std::cout << vec[0] << std::endl;
    EXPECT_EQ(vec[0], 1);
    EXPECT_EQ(vec.size(), 1);

    vec.PushBack(2);
    EXPECT_EQ(vec[1], 2);
    EXPECT_EQ(vec.size(), 2);

    vec.PushBack(10);
    EXPECT_EQ(vec[2], 10);
    EXPECT_EQ(vec.size(), 3);
}

TEST(VectorTest, OperatorSquareBracketsAssignment) {
    manabu::handmade::Vector<int> vec;
    vec.PushBack(1);
    vec[0] = 100;
    EXPECT_EQ(vec[0], 100);
}
