//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == x) {
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
    }
};
