#include<iostream>
#include<vector>
using namespace std;

int maximalSquare(vector<vector<char>>& matrix){
    int side = 0;
    int arr[matrix.size()][matrix.size()];
    for(int i = 0 ; i< matrix.size(); i++){
        for(int j = 0 ;j < matrix[0].size(); j++){
            if(matrix[i][j] == '1'){
                arr[i][j] = 1;
            }else{
                arr[i][j] = 0;
            }
        }
    }
}
