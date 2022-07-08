#include<iostream>
#include<vector>
using namespace std;

int maximalSquare(vector<vector<char>>& matrix){
    int side = 0;
    vector<vector<int>> arr (matrix.size(), vector<int> (matrix[0].size(), 0));
    for(int i = 0 ; i < matrix.size(); i++){
        if(matrix[i][0] == '1') arr[i][0] = 1;
    }
    for(int i = 0 ; i < matrix[0].size(); i++){
        if(matrix[0][i] == '1') arr[0][i] = 1;
    }
    int side = 0;
    for(int i = 1 ; i< matrix.size(); i++){
        for(int j = 1 ;j < matrix[0].size(); j++){
           if(matrix[i][j] == '1'){
                arr[i][j] = min(min(arr[i-1][j], arr[i][j-1]), arr[i-1][j-1]) + 1;
                side = max(side, arr[i][j]);
           }
        }
    }
    return side * side;
}
