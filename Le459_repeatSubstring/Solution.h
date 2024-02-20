//
// Created by 周钰 on 2024/2/20.
//

#ifndef TEST_LE459_SOLUTION_H
#define TEST_LE459_SOLUTION_H

#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    // 1. 暴力解法
    // 2. 从1开始，找到s的子串，然后判断是否是s的重复子串
    // 3. 时间复杂度O(n^2)
    static bool repeatedSubstringPattern(string s);

    // 1. KMP算法
    // 2. 时间复杂度O(n)
    static bool repeatedSubstringPattern2(string s);

    // 1. 两个s拼接，然后去掉首尾字符
    // 2. 如果s是重复子串，那么s+s去掉首尾字符后，s必然在里面
    // 3. 时间复杂度O(n)
    static bool repeatedSubstringPattern3(string s);

};


#endif //TEST_LE459_SOLUTION_H
