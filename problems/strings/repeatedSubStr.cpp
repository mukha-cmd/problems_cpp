//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        if (n == 1) {
            return false;
        }

        for (int i = 1; i <= n / 2; i++) {
            string pattern = "";
            if (n % i == 0) {
                for (int j = 0; j < i; j++) {
                    pattern += s[j];
                }
                string copy = "";
                for (int j = 0; j < n / i; j++) {
                    copy += pattern;
                }
                if (s == copy) {
                    return true;
                }
            }
        }
        return false;
    }
};
int main() {
    Solution s;
    cout << s.repeatedSubstringPattern("ababa");
}