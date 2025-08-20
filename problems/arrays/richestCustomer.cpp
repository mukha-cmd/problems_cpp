//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int current_wealth = 0;
        int max_wealth = 0;
        for (int i = 0; i < accounts.size(); i++) {
            current_wealth = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                current_wealth += accounts[i][j];
            }
            if (current_wealth > max_wealth) {
                max_wealth = current_wealth;
            }
        }
        return max_wealth;
    }
};