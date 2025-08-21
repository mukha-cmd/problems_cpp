//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> ans = s.buildArray(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}