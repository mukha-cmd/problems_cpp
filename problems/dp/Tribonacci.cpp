//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i - 3];
        }
        return dp[n];
    }
};
int main() {
    Solution s;
    cout << s.tribonacci(4) << endl;
}