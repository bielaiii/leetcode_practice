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
        int temp_c = c + dir[i][1];
        if(temp_r < 0 || temp_r >= grid.size() ||
           temp_c < 0 || temp_c >= grid[0].size() ){
            continue;
          }else if(grid[temp_r][temp_c] == 1){
                grid[temp_r][temp_c] = 2;
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
    int change = allfresh;
    while(allfresh > 0){
        vector<vector<int> > temp = grid;
        for(int r = 0; r < grid.size(); r++){
            for(int  c =  0; c < grid[0].size(); c++){
                if(grid[r][c] == 2){
                    allfresh -= bfs(temp, r , c);
                }
            }
        }
        if(grid == temp ) return -1;
        grid = temp;
        minute ++;
    }
    return minute;
}