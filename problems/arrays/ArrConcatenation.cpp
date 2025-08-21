//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(nums[i]);
        }
        return res;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1,2,3};
    vector<int> res = s.getConcatenation(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}