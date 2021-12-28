#include <iostream>
#include<vector>
using namespace std;

int minFallingPathSum(vector<vector<int>>& matrix) {
    vector<int> layer = matrix[0];
    for(int i = 0; i < matrix.size() -1 ; i++){
        vector<int> temp = matrix[i];
        for(int j = 0; j < layer.size(); j++){
            int a = 99; int b = 99; int c = 99;
            if(j + 1 >= 0 && j + 1 < matrix[0].size()) a = matrix[i-1][j+1];
            if(j - 1 >= 0 && j - 1 < matrix[0].size()) b = matrix[i-1][j-1];
            //if(j - 1 >= 0 && j - 1 < matrix[0].size()) a = matrix[i][j+1];
            c = matrix[i-1][j];
            layer[j] += min(c, min(a, b)) + matrix[i][j];
        }
    }
    int min_ = 99;
    for(int i = 0; i < layer.size(); i++){
        min_ = min(layer[i], min_);
    }
    return min_;
}