#include<iostream>
#include<vector>
using namespace std;

void recur(vector<vector<int>>& vec,int c, int r, int &n, vector<vector<int>> &visited){
    cout << c << " "<< r << endl;
    if(c < 0 || c >= vec.size()) return;
    if(r < 0 || r >= vec[0].size()) return;
    if(visited[c][r]) return;
    visited[c][r] = 1;
    if(!vec[c][r]) return;
    if(vec[c][r] == 1) {
        vec[c][r] = 2;
        n ++;
        recur(vec, c + 1, r, n, visited);
        recur(vec, c - 1, r, n, visited);
        recur(vec, c , r + 1, n, visited);
        recur(vec, c , r - 1, n, visited);
    }
    if(vec[c][r] == 2){
        
        return ;
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
    vector<vector<int>> visited = grid;
    for (auto &i : visited)
        fill(visited.begin(), visited.end(), 0);
    for(int c = 0; c < visited.size(); c++){
        for(int r = 0; r < visited[0].size(); r++){
            cout << visited[c][r] << " ";
        }
        cout << endl;
    }
    cout << "-----------"<<endl;
    //cout << col << " "<< row<< endl;
    if(grid[col][row] != 2) return -1;
    recur(grid, col,row, time, visited);
    cout << time << endl;
    return time;
}