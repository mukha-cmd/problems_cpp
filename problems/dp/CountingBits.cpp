//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        if (n == 0) {
            res.push_back(0);
            return res;
        }
        res.resize(n + 1);
        res[0] = 0;
        res[1] = 1;
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                res[i] = res[i / 2];
            }
            else {
                res[i] = res[i / 2] + 1;
            }
        }
        return res;
    }
};