//
// Created by Lenovo on 21.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = 0;
        for (int i = 0; i < digits.size(); i++) {
            num = num + digits[i];
            num *= 10;
        }
        num /= 10;
        num += 1;
        vector<int> res;
        while (num > 0) {
            res.push_back(num % 10);
            num /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
int main() {
    Solution s;
    vector<int> v = {9};
    vector<int> res = s.plusOne(v);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}