/*
#面试刷题# 第0046期
#Leetcode# Q1304 查找N个唯一整数总和为零
难度：低
给定一个整数n，返回任何包含n个唯一整数的数组，以使它们的总和为0。
约束条件：
(a) 1 <= n <= 1000

例1:
Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].

例2:
Input: n = 3
Output: [-1,0,1]

例3:
Input: n = 1
Output: [0]
*/
#include "leetcode.h"

namespace q1304{

template<typename T>
bool run_testcases() {
    T slt;
    // place testcases below

    // succ
    return true;
}

class Solution {
public:
    // Runtime: 4 ms, faster than 98.65%
    // Memory Usage: 8.7 MB, less than 100.00%
    vector<int> sumZero(int n) {
        vector<int> ret;
        // accept zero for odd elements
        if (n % 2 == 1) {
            ret.push_back(0);
        }
        // accept positive and negative numbers
        for (int len = n / 2;len > 0; --len) {
            ret.push_back(len);
            ret.push_back(-len);
        }
        return ret;
    }
};

};
