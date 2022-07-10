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

int cherryPickup(vector<vector<int>>& grid) {
    int sz = grid.size();
    //vec[x1+y1 = k][x1][x2]
    vector<vector<vector<int>>> vec (2 * sz, vector<vector<int>>(sz, vector<int>(sz, INT16_MIN)));
    int maxCherry = 0;
    vec[2][1][1] = grid[0][0];
    for(int s = 3; s <= 2 * sz; s++){
        for(int x1 = 1; x1 <= sz; x1 ++){
            for(int x2 = 1; x2 <= sz; x2 ++){
                int y1 = s - x1; 
                int y2 = s - x2; 
                if(y1 >= 0 && y1 < sz && y2 >= 0 && y2 < sz){
                    if(grid[x1][y1] == -1 || grid[x2][y2] == -1) continue;
                    int sum = grid[x1][y1];
                    if(x1 != x2) sum += grid[x2][y2];
                    int temp = vec[s][x1][x2];
                    temp = max(temp, vec[s-1][x1-1][x2-1] + sum);
                    temp = max(temp, vec[s-1][x1-1][x2] + sum );
                    temp = max(temp, vec[s-1][x1][x2-1] + sum );
                    temp = max(temp, vec[s-1][x1][x2] + sum );
                    vec[s][x1][x2] = temp;
                }
            }
        }
    }
    
    return max(0, vec[2*sz - 1][sz -1][sz-1]);
}