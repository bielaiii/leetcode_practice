#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;



const int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int bfs(vector<vector <int> > &grid, int r, int c){
    int ans = 0;
    for(int i = 0; i < 4; i++){
        int temp_r = r + dir[i][0];
        int temp_c = r + dir[i][1];
        if(r + dir[i][0] >= 0 && r + dir[i][0] < grid.size() &&
           c + dir[i][1] >= 0 && c + dir[i][1] < grid[0].size() &&
          grid[r + dir[i][0]][c + dir[i][0]] == 1 ){
            grid[r + dir[i][0]][c + dir[i][0]] = 2;
            ans ++;
          }
        
    }
    return ans;
}

int orangesRotting(vector<vector<int> >& grid) {
    int allfresh = 0;
    for(int r = 0; r < grid.size(); r++){
        for(int  c =  0; c < grid[0].size(); c++){
            if(grid[r][c] == 1) allfresh ++;
        }
    }
    int minute = 0;
    while(allfresh > 0){
        vector<vector<int> > temp = grid;
        for(int r = 0; r < grid.size(); r++){
            for(int  c =  0; c < grid[0].size(); c++){
                if(grid[r][c] == 2){
                    allfresh -= bfs(temp, r , c);
                }
            }
        }
        grid = temp;
        minute ++;
    }
    return minute;
}