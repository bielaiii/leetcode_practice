#include<iostream>
#include<vector>
using namespace std;

int recur(vector<vector<int>>& vec,int c, int r, int &n){
    if(c < 0 || c > vec.size()) return;
    if(r < 0 || r > vec[0].size()) return;
    if(vec[c][r] == 2){
        n ++;
        vec[c+1][r] = 2
        vec[c-1][r] = 2
        vec[c][r+1] = 2
        vec[c][r-1] = 2
    }
    recur(vec, c + 1, r, n);
    recur(vec, c - 1, r, n);
    recur(vec, c , r + 1, n);
    recur(vec, c , r - 1, n);
    return ;
}

int orangesRotting(vector<vector<int>>& grid) {
    int time = 0;
    recur(grid, 0,0)
}