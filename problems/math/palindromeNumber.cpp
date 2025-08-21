//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string copy = s;
        int l = 0;
        int r = s.length() - 1;
        while (l < r) {
            swap(copy[l], copy[r]);
            l++;
            r--;
        }
        if (copy == s) {
            return true;
        }
        return false;
    }
};
