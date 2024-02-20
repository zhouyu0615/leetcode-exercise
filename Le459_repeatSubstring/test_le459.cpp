//
// Created by 周钰 on 2024/2/20.
//
#include <gtest/gtest.h>
#include "Solution.h"

int main() {
    // init gtest
    testing::InitGoogleTest();
    // run all tests
    return RUN_ALL_TESTS();
}

// test case
TEST(Solution_test, repeatedSubstringPattern) {
    string s = "abab";
    bool res = Solution::repeatedSubstringPattern(s);
    EXPECT_TRUE(res);

    s = "aba";
    res = Solution::repeatedSubstringPattern(s);
    EXPECT_FALSE(res);

    s = "abcabcabcabc";
    res = Solution::repeatedSubstringPattern(s);
    EXPECT_TRUE(res);
}

TEST(Solution_test, repeatedSubstringPattern2) {
    string s = "abab";
    bool res = Solution::repeatedSubstringPattern2(s);
    EXPECT_TRUE(res);

    s = "aba";
    res = Solution::repeatedSubstringPattern2(s);
    EXPECT_FALSE(res);

    s = "abcabcabcabc";
    res = Solution::repeatedSubstringPattern2(s);
    EXPECT_TRUE(res);
}

TEST(Solution_test, repeatedSubstringPattern3) {
    string s = "abab";
    bool res = Solution::repeatedSubstringPattern3(s);
    EXPECT_TRUE(res);

    s = "aba";
    res = Solution::repeatedSubstringPattern3(s);
    EXPECT_FALSE(res);

    s = "abcabcabcabc";
    res = Solution::repeatedSubstringPattern3(s);
    EXPECT_TRUE(res);
}


