#include<iostream>
#include<vector>
using namespace std;


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


int cherryPickup(vector<vector<int>>& grid) {
    vector<vector<bool>> visited(grid.size(), vector<bool>(grid.size(), 0));
    int guide = 0;
    dfs_cherryPickup(grid, 0, 0, visited, guide, 0, 0);
    return maxCherry;
}