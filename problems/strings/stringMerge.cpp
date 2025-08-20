//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int len1 = word1.length();
        int len2 = word2.length();
        int word1_pointer = 0;
        int word2_pointer = 0;
        res.reserve(len1 + len2);
        while (word1_pointer < len1 || word2_pointer < len2) {
            if (word1_pointer < len1) {
                res += word1[word1_pointer++];
            }
            if (word2_pointer < len2) {
                res += word2[word2_pointer++];
            }
        }
        return res;
    }
};
int main() {
    Solution s;
    string word1 = "abcd";
    string word2 = "pq";
    cout << s.mergeAlternately(word1, word2) << endl;
}