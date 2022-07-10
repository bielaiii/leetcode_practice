#include<iostream>
#include<vector>
using namespace std;

/*
const vector<pair<int,int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
int maxCherry = 0;

void dfs_cherryPickup(vector<vector<int>>& grid, int x, int y, vector<vector<bool>>& visited, int &guide, int terminal, int current_cherry){
    if(x == 0 && y == 0 && terminal == 1){
        maxCherry = max(maxCherry, current_cherry);
        return ;
    }else if(x == grid.size() - 1 && y == grid.size() - 1 && terminal == 0){
        
        terminal = 1;
        guide = 2;
    }
    for(int j = 0; j < 2; j++){
        int cur_x = x + dir[guide + j].first;
        int cur_y = y + dir[guide + j].second;
        if(cur_x > -1 && cur_x < grid.size() &&
           cur_y > -1 && cur_y < grid.size() &&
           grid[cur_x][cur_y] != -1 && 
           !visited[cur_x][cur_y]
        ){
            visited[cur_x][cur_y ]= 1;
            int wasCherry ;
            if(grid[cur_x][cur_y] == 1){
                current_cherry ++;
                grid[cur_x][cur_y] = 0;
                wasCherry = 1;
            }
            dfs_cherryPickup(grid, cur_x, cur_y, visited, guide, terminal, current_cherry);
            visited[cur_x][cur_y ] = 0;
            if(wasCherry) grid[cur_x][cur_y] = 1;
        }
    }
}
*/

int  dfs_cheeryPickup(const vector<vector<int>> &grid, int r1 , int c1, int c2, vector<vector<vector<int>>> & vec){
    int r2 = r1 + c1 - c2;
    if(r2 < 0 || r1 < 0 || r2 >= grid.size() || r1 >= grid.size()){
        return INT16_MIN;
    }else if(r1 == grid.size() - 1 && c1 == grid.size() - 1){
        return grid[r1][c1];
    }else if(vec[r1][c1][c2] != INT16_MIN){
        return vec[r1][c1][c2];
    }else{
        int current = grid[r1][c1];
        if(r1 != r2) current += grid[r2][c2];
        int down_down   = dfs_cheeryPickup(grid, r1 +1 , c1 ,c2 ,vec );
        int down_right  = dfs_cheeryPickup(grid, r1 +1 , c1  ,c2 + 1,vec );
        int right_right = dfs_cheeryPickup(grid, r1  , c1 + 1 ,c2 + 1 ,vec );
        int right_down  = dfs_cheeryPickup(grid, r1  , c1 + 1 ,c2 ,vec );
        current += max(max(down_down, down_right), max(right_down, right_right));
        vec[r1][c1][c2] = current;
        return current;
    }
    return 0;
}

int cherryPickup(vector<vector<int>>& grid) {
    int sz = grid.size();
    //vec[x1+y1 = k][x1][x2]
    vector<vector<vector<int>>> vec (sz, vector<vector<int>>(sz, vector<int>(sz, INT16_MIN)));
   
    int ans = dfs_cheeryPickup(grid, 0, 0, 0, vec);
    return ans;
}