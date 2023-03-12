#include<iostream>
#include<vector>
using namespace std;


const int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};

void bfs(vector<vector<char>> & vt, int r, int c){
    if(vt[r][c] != '1' ) return ;
    
            if(vt[r][c] == '1'){
                for(int i = 0 ; i < 4; i++){
                    vt[r][c] = '2';
                    int temp_r = r + dir[i][0];
                    int temp_c = c + dir[i][1];
                    if(temp_c < 0 || temp_c >= vt[0].size() || temp_r < 0 || temp_r >= vt.size() ){
                        continue;
                    }
                    bfs(vt, temp_r, temp_c);
                }
            }
            
}


int numIslands(vector<vector<char>>& grid) {
    int ct = 0 ;
    for(int r = 0 ; r < grid.size(); r++){
        for(int c= 0 ; c < grid[0].size(); c++){
            if(grid[r][c] == '1'){
                bfs(grid, r, c);
                ct ++;
            }
        }
    }
    return ct;
}
