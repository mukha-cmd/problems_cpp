#include <vector>
//
// Created by Lenovo on 20.08.2025.
//
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int sum = nums[0];
        result[0] = nums[0];
        for (int i = 1; i < n; i++) {
            sum += nums[i];
            result[i] = sum;
        }
        return result;
    }
};