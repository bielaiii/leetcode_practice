#include<iostream>
#include<vector>
using namespace std;

void recur(vector<vector<int>>& vec,int c, int r, int &n){
    if(c < 0 || c > vec.size()) return;
    if(r < 0 || r > vec[0].size()) return;
    if(!vec[c][r]) return;
    if(vec[c][r] == 1) {
        vec[c][r] = 2;
    }
    if(vec[c][r] == 2){
        n ++;
        recur(vec, c + 1, r, n);
        recur(vec, c - 1, r, n);
        recur(vec, c , r + 1, n);
        recur(vec, c , r - 1, n);
    }
    
    return ;
}

int orangesRotting(vector<vector<int>>& grid) {
    int time = 0;
    int col=0, row =0;
    while(col < grid.size()){
        if(grid[col][row] == 2) break;
        row ++;
        if(row == grid[0].size()){
            row = 0;
            col ++;
        }
    }
    if(grid[col][row] != 2) return -1;
    recur(grid, col,row, time);
    cout << time << endl;
    return time;
}