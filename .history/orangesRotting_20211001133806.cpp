#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void recur(vector<vector<int>>& vec,int c, int r, int &n, int former, vector<vector<int>> &visited){
    if(c < 0 || c >= vec.size()) return;
    if(r < 0 || r >= vec[0].size()) return;
    if(visited[c][r]) return;
    //visited[c][r] = 1;
    if(!vec[c][r]) return;
    visited[c][r] = 1;
    if(vec[c][r] ==1 && former == 2) {
        vec[c][r] =2;
        n ++;
        recur(vec, c - 1, r, n,  vec[c][r], visited);
        recur(vec, c + 1, r, n,  vec[c][r], visited);
        recur(vec, c , r + 1, n, vec[c][r],  visited);
        recur(vec, c , r - 1, n, vec[c][r],  visited);
    }

    return ;
}

int orangesRotting(vector<vector<int>>& grid) {
    int time = 0;
    int col=0, row =0;
    queue<>
    for(int c =0; c< grid.size(); c++){
        for(int r =0; r< grid[0].size(); r++){
            q.
        }
    }
    
    return time;
}