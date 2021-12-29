#include<iostream>
#include<vector>
using namespace std;

int recur(vector<vector<char>> mat, int h, int w){
    int area = 0;
    while ((mat[h][w] && mat[h+1][w] && mat[h][w+1] && mat[h+1][w+1]))
    {
        area ++;
        r
    }

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
