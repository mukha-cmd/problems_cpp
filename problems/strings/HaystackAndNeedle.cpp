//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystack_len = haystack.length();
        int needle_len = needle.length();
        if (needle_len > haystack_len) {
            return -1;
        }
        for (int i = 0; i < haystack_len - needle_len + 1; i++) {
            int j = 0;
            while (j < needle_len && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == needle_len) {
                return i;
            }
        }
        return -1;
    }
};
