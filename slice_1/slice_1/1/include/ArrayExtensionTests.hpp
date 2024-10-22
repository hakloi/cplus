#include <gtest/gtest.h>
#include "ArrayExtension.hpp"

TEST(ArrayExtensionTest, TestSorted) {
    ArrayExtension arr({3, 1, 2});
    std::vector<int> sorted_arr = arr.sorted();
    EXPECT_EQ(sorted_arr[0], 1);
    EXPECT_EQ(sorted_arr[1], 2);
    EXPECT_EQ(sorted_arr[2], 3);
}

TEST(ArrayExtensionTest, TestEveryNth) {
    ArrayExtension arr({0, 1, 2, 3, 4, 5});
    std::vector<int> every_nth_arr = arr.every_nth(2);
    EXPECT_EQ(every_nth_arr.size(), 3);
    EXPECT_EQ(every_nth_arr[0], 0);
    EXPECT_EQ(every_nth_arr[1], 2);
    EXPECT_EQ(every_nth_arr[2], 4);
}

TEST(ArrayExtensionTest, TestIsIncreasing) {
    ArrayExtension arr({1, 2, 3, 4, 5});
    EXPECT_TRUE(arr.is_increasing());
    ArrayExtension arr2({5, 4, 3, 2, 1});
    EXPECT_FALSE(arr2.is_increasing());
}

TEST(ArrayExtensionTest, TestIsDecreasing) {
    ArrayExtension arr({5, 4, 3, 2, 1});
    EXPECT_TRUE(arr.is_decreasing());
    ArrayExtension arr2({1, 2, 3, 4, 5});
    EXPECT_FALSE(arr2.is_decreasing());
}

TEST(ArrayExtensionTest, TestIsAllEven) {
    ArrayExtension arr({2, 4, 6, 8});
    EXPECT_TRUE(arr.is_all_even());
    ArrayExtension arr2({1, 2, 3, 4});
    EXPECT_FALSE(arr2.is_all_even());
}
