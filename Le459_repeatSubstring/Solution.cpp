//
// Created by 周钰 on 2024/2/20.
//

#include "Solution.h"

// 1. 暴力解法
// 2. 从1开始，找到s的子串，然后判断是否是s的重复子串
// 3. 时间复杂度O(n^2)
bool Solution::repeatedSubstringPattern(string s) {
    int n = s.size();
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            string sub = s.substr(0, i);
            int j = i;
            for (; j < n; j += i) {
                if (s.substr(j, i) != sub) {
                    break;
                }
            }
            if (j == n) {
                return true;
            }
        }
    }
    return false;
}

// 1. KMP算法
// 2. 时间复杂度O(n)
bool Solution::repeatedSubstringPattern2(string s) {
    int n = s.size();
    vector<int> next(n, 0);
    for (int i = 1, j = 0; i < n; i++) {
        while (j > 0 && s[i] != s[j]) {
            j = next[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        next[i] = j;
    }
    int len = n - next[n - 1];
    return len != n && n % len == 0;
}


// 1. 两个s拼接，然后去掉首尾字符
// 2. 如果s是重复子串，那么s+s去掉首尾字符后，s必然在里面
// 3. 时间复杂度O(n)
bool Solution::repeatedSubstringPattern3(string s) {
    return (s + s).substr(1, 2 * s.size() - 2).find(s) != -1;
}
