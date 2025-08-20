//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0) {
            if (num % 2 == 0) {
                num /= 2;
                steps++;
            }
            else {
                num -= 1;
                steps++;
            }
        }
        return steps;
    }
};
int main() {
    Solution s;
    int test = 14;
    cout << s.numberOfSteps(test) << endl;
}