//
// Created by Lenovo on 21.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, i;
        map<char, int> romans;
        romans['I'] = 1;
        romans['V'] = 5;
        romans['X'] = 10;
        romans['L'] = 50;
        romans['C'] = 100;
        romans['D'] = 500;
        romans['M'] = 1000;
        for (i = s.size() - 1; i > 0; i--) {
            //cout << i << endl;
            //cout << ans << endl;
            if (s[i] == 'V' && s[i - 1] == 'I') {
                i--;
                ans += 4;
            }
            else if (s[i] == 'X' && s[i - 1] == 'I') {
                i--;
                ans += 9;
            }
            else if (s[i] == 'L' && s[i - 1] == 'X') {
                i--;
                ans += 40;
            }
            else if (s[i] == 'C' && s[i - 1] == 'X') {
                i--;
                ans += 90;
            }
            else if (s[i] == 'D' && s[i - 1] == 'C') {
                i--;
                ans += 400;
            }
            else if (s[i] == 'M' && s[i - 1] == 'C') {
                i--;
                ans += 900;
            }
            else {
                ans += romans[s[i]];
            }
        }
        if (i == 0) {
            ans += romans[s[0]];
        }
        return ans;
    }
};
int main() {
    Solution s;
    cout << s.romanToInt("III") << endl;
}