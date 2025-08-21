//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() > t.length()) {
            return false;
        }
        int sub_counter = 0;
        for (int i = 0; i < t.length(); i++) {
            if (s[sub_counter] == t[i]) {
                sub_counter++;
            }
        }
        return sub_counter == s.length();
    }
};

int main() {
    Solution s;
    cout << s.isSubsequence("axcd", "abcde");
}