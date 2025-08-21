//
// Created by Lenovo on 21.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1) {
            return 1;
        }
        vector<vector<int>> mat(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = 0;
            }
        }
        for (auto &row : trust) {
            int a = row[0];
            int b = row[1];
            mat[a - 1][b - 1] = 1;
        }
        int zero_row_index = -1;
        for (int i = 0; i < n; i++) {
            int non_zeroes_in_row = 0;
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != 0) {
                    non_zeroes_in_row++;
                }
            }
            if (non_zeroes_in_row == 0) {
                zero_row_index = i;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                //cout << mat[i][j] << " ";
            }
            //cout << endl;
        }
        //cout << zero_row_index << endl;
        if (zero_row_index >= 0) {
            int zeroes_in_column = 0;
            for (int i = 0; i < n; i++) {
                //cout << mat[i][zero_row_index] << endl;
                if (mat[i][zero_row_index] == 0) {
                    zeroes_in_column++;
                }
            }
            //cout << zeroes_in_column << endl;
            if (zeroes_in_column == 1) {
                return zero_row_index + 1;
            }
        }
        return -1;
        return 1;
    }
};
int main() {
    Solution s;
    vector<vector<int>> trust = {{1, 3}, {2, 3}, {3, 1}};
    cout << s.findJudge(3, trust);
}