#include<iostream>
#include<vector>
using namespace std;

int maximalSquare(vector<vector<char>>& matrix){
    int side = 0;
    int arr[matrix.size()][matrix[0].size()];
    for(int i = 0 ; i < matrix.size(); i++){
        if(matrix[0][i] == '1') arr[0][i] = 1;
    }
    for(int i = 0 ; i < matrix[0].size(); i++){
        if(matrix[i][0] == '1') arr[i][0] = 1;
    }
    for(int i = 0 ; i< matrix.size(); i++){
        for(int j = 0 ;j < matrix[0].size(); j++){
           
        }
    }
}
