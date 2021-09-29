#include<iostream>
#include<vector>
using namespace std;


vector<vector<int>> recur(vector<vector<int>>& mat, int c, int r, int max_c, int max_r){
    if(mat)
}

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int max_c = mat.size(), max_r=mat[0].size();
    int c = 0, r = 0;
    while(mat[c][r]){
        r ++;
        if(r == max_r){
            r = 0;
            c ++;
        }
        if(c == max_c){
            break;
        }
    }
    int arr[max_c][max_r] = {0};
    
}