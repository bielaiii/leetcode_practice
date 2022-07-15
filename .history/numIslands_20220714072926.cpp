#include<iostream>
#include<vector>
using namespace std;

const int arr[4][2] = {{0,-1},{0,1},{1,0},{-1, 0}};

void bfs_numIslands(vector<vector<char>> & grid, int r, int c{
    if(r < 0 || r >= grid.size()){
        return ;
    }else if(c < 0 ||  c >= grid[0].size()){
        return ;
    }
    
    if(grid[r][c] == '1'){
        grid[r][c] = '2';
        //cout<< r <<" "<< c <<endl;
       /*  for(int i = 0; i < 4; i++){
            bfs_numIslands(grid, r + arr[i][0], c + arr[i][1], visited);
        } */
        //cout << r <<" "<< c <<endl;
        bfs_numIslands(grid, r +1 , c  );
        bfs_numIslands(grid, r  , c - 1 );
        bfs_numIslands(grid, r  , c + 1 );
        bfs_numIslands(grid, r -1 , c  );
    }

}

int numIslands(vector<vector<char>>& grid) {
    //vector<vector<bool>> visited (grid.size(), vector<bool>(grid[0].size(), 0));
    int count = 0;
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[0].size(); j++){
            if(grid[i][j] == '1' ){
               // visited[i][j] = 1;
                bfs_numIslands(grid, i, j, visited);
                cout <<i <<" "<< j << endl;
                count ++;
            }
        }
    }
    return count;
}