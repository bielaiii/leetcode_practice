#include<iostream>
#include<vector>
using namespace std;

int maximalSquare(vector<vector<char>>& matrix){
    int side = 1;
    vector<vector<int>> area (matrix.size(), vector<int>(matrix[0].size(),0));
    for(int c = 0; c < matrix.size(); c++){
        for(int r =0 ;r < matrix[0].size(); r++){
            if(matrix[c][r] == '1'){
                if(c == 0 || r == 0){
                    area[c][r] = 1;
                }else{
                    area[c][r] = min(area[c-1][r-1],min(area[c-1][r], area[c][r-1]))+ 1;
                    side = max(side, area[c][r]);
                }
            }
        }
    }
    return side * side;
}
