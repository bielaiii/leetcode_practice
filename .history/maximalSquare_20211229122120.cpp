#include<iostream>
#include<vector>
using namespace std;

int recur(vector<vector<char>> mat, int h, int w){
    
}

int maximalSquare(vector<vector<char>>& matrix){
    int sum = 0 ;
    for(int c = 0; c < matrix.size(); c++){
        for(int r = 0; r < matrix[0].size(); r++){
            sum = max(sum, recur(matrix, c, r));
        }
    }
    return sum;
}
