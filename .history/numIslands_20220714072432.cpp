#include<iostream>
#include<vector>
using namespace std;

const int arr[4][2] = {{0,-1},{0,1},{1,0},{-1, 0}};

void bfs_numIslands(vector<vector<char>> & grid, int r, int c, vector<vector<bool>> & visited){
    if(r < 0 || r >= grid.size()){
        return ;
    }else if(c < 0 ||  c >= grid[0].size()){
        return ;
    }
    
    if(grid[r][c] == '1'){
        visited[r][c] = 1;
        //cout<< r <<" "<< c <<endl;
       /*  for(int i = 0; i < 4; i++){
            bfs_numIslands(grid, r + arr[i][0], c + arr[i][1], visited);
        } */
        bfs_numIslands(grid, r +1 , c  ,visited);
        bfs_numIslands(grid, r  , c - 1 ,visited);
        bfs_numIslands(grid, r  , c + 1 ,visited);
        bfs_numIslands(grid, r -1 , c  ,visited);
    }

}

int numIslands(vector<vector<char>>& grid) {
    vector<vector<bool>> visited (grid.size(), vector<bool>(grid[0].size(), 0));
    int count = 0;
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[0].size(); j++){
            if(! visited[i][j] && grid[i][j] == '1' ){
                bfs_numIslands(grid, i, j, visited);
                count ++;
            }
        }
    }
    return count;
}