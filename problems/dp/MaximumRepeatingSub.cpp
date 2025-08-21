//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n = sequence.size();
        int m = word.size();
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            int j = i;
            while (j + m <= n && sequence.substr(j, m) == word) {
                count++;
                j += m;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};
int main() {
    Solution s;
    string sequence = "aaabaaaabaaabaaaabaaaabaaaabaaaaba", word = "aaaba";
    cout << s.maxRepeating(sequence, word) << endl;
}