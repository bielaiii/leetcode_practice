#include<iostream>
#include<vector>
using namespace std;

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    int r = 0, c = 0;
    while(r < matrix.size() && c < matrix[0].size() && matrix[r][c] != target ){
        if(matrix[r][c] < target){
            r ++;
        }
        
    }
}