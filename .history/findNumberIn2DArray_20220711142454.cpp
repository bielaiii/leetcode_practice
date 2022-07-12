#include<iostream>
#include<vector>
using namespace std;

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    int r = 0, c = matrix[0].size() - 1;
    while(r >= 0 && r < matrix.size() - 1 && c >= 0){
        if(matrix[r][c] == target) return 1;
        if(matrix[r][c] < target){
            c --;
        }else{
            r ++;
        }
    }
    return false;
    
}