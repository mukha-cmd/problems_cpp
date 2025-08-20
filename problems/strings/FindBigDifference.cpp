//
// Created by Lenovo on 20.08.2025.
//
//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string findBigDifference(string s, string t) {
        int freq[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            freq[t[i] - 'a']--;
        }
        string extra = "";
        for (int i = 0; i < 26; i++) {
            while (freq[i] < 0) {
                extra += (char)(i + 'a');
                freq[i]++;
            }
        }
        return extra;
    }
};
int main() {
    Solution s;
    cout << s.findBigDifference("abc", "abccd") << endl;
}