#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;



const int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void bfs(vector<vector <int> > &grid, int r, int c){
    for(int i = 0; i < 4; i++){
        if(r + dir[i][0] >= 0 && r + dir[i][0] < grid.size() &&
           c + dir[i][1] >= 0 && c + dir[i][1] < grid[0].size())
        grid[r + dir[i][0]][c + dir[i][0]] = 2;
    }
}

int orangesRotting(vector<vector<int> >& grid) {
    int sum = 0;
    for(int r = 0; r < grid.size(); r++){
        for(int  c=  0; c < grid.size(); c++){
            
        }
    }
    return sum;
}