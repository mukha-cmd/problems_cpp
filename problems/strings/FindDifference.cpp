//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char res;
        res = '\0';
        int freq1[26] = {0};
        int freq2[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            freq1[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            freq2[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                res = i + 'a';
            }
        }
        return res;
    }
};
int main() {
    Solution s;
    cout << s.findTheDifference("abcd", "abcde") << endl;
}