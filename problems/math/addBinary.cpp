//
// Created by Lenovo on 21.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;
        int i = a.length() - 1, j = b.length() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int total = carry;
            if (i >= 0) {
                total += a[i] - '0';
                i -= 1;
            }
            if (j >= 0) {
                total += b[j] - '0';
                j -= 1;
            }
            ans += to_string(total % 2);
            carry = (total / 2);
        }
        if (carry) {
            ans += to_string(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main() {
    Solution s;
    string a, b;
    cin >> a >> b;
    cout << s.addBinary(a, b) << endl;
}