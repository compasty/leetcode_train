#include "gtest/gtest.h"
#include "util.h"

TEST(util_test, swap_test)
{
    int a1 = 1, a2 = 2;
    swap(a1, a2);
    EXPECT_EQ(a1, 2);
}

TEST(util_test, test_is_vector_same) {
    std::vector<int> v1{1,2}, v2{1,2}, v3{1,3};
    EXPECT_TRUE(is_vector_same(v1, v2));
    EXPECT_FALSE(is_vector_same(v1, v3));
    std::vector<std::string> v4{"a", "b"}, v5{"a", "b"}, v6{"a", "ab"};
    EXPECT_TRUE(is_vector_same(v4, v5));
    EXPECT_FALSE(is_vector_same(v4, v6));
}