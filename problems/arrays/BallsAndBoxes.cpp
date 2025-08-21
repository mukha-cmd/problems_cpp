//
// Created by Lenovo on 20.08.2025.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        vector<int> leftmin;
        vector<int> rightmin;
        int boxesLeft = 0;
        int costLeft = 0;
        int boxesRight = 0;
        int costRight = 0;
        for (int i = 0; i < boxes.size(); i++) {
            costLeft += boxesLeft;
            if (boxes[i] == '1') {
                boxesLeft++;
            }
            leftmin.push_back(costLeft);
        }
        for (int i = boxes.size() - 1; i >= 0; i--) {
            costRight += boxesRight;
            if (boxes[i] == '1') {
                boxesRight++;
            }
            rightmin.insert(rightmin.begin(), costRight);
        }
        for (int i = 0; i < boxes.size(); i++) {
            res.push_back(leftmin[i] + rightmin[i]);
        }
        return res;
    }
};

int main() {
    Solution s;
    string boxes = "111001";
    s.minOperations(boxes);
}