//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.empty())
            return;
        for (char c : s) {
            cout << c << endl;
        }
        cout << s.size() << endl;
        char c = s[s.size()-1];
        s.
        reverseString(s);
    }
};

int main() {
    Solution s;
    vector<char> s1 = {'a', 'b', 'c', 'd', 'e'};
    s.reverseString(s1);
    for (char c : s1) {
        cout << c << endl;
    }
}