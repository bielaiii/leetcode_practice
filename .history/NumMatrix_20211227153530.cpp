#include<vector>
#include<iostream>
using namespace std;

class NumMatrix {
public:
    vector<vector<int>> martix_;
    NumMatrix(vector<vector<int>>& matrix) {
        for(int c = 0; c < matrix.size() + 2; c++){
            vector<int> temp_  = {0};
            for(int r = 0; r < matrix[0].size() +2; r++){
                temp_.push_back(matrix[c][r]);
            }
            temp_.push_back(0);
            martix_.push_back(temp_);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int c = col1; c <= col2; c++ ){
            for(int r = row1; r <= row2; r++){
                sum += martix_[c][r];
            }
        }
        return sum;
    }
};