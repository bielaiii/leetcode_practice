#include <iostream>
#include<vector>
using namespace std;

int minFallingPathSum(vector<vector<int>>& matrix) {
    vector<int> layer = matrix[0];
    for(int i = 0; i < matrix.size() -1 ; i++){
        vector<int> temp = matrix[i];
        for(int j = 0; j < layer.size(); j++){
            layer[j] += min(matrix[i][j-1], min(matrix[i][j+1], matrix[i][j-1])) + matrix[i][j];
        }
    }
    int min_ = 99;
    for(int i = 0; i < layer.size(); i++){
        min_ = min(layer[i], min_);
    }
    return min_;
}