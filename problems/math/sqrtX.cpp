//
// Created by Lenovo on 21.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        if (x == 1) {
            return 1;
        }
        int ans = 0;
        int left = 0, right = x;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid == x / mid) {
                return mid;
            }
            else if (mid > x / mid) {
                right = mid - 1;
            }
            else {
                ans = mid;
                left = mid + 1;
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    cout << s.mySqrt(5) << endl;
}