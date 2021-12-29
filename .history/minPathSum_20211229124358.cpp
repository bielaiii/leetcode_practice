#include<iostream>
#include<vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int c = grid.size() -1 ;
    int r = grid[0].size() - 1;
    int sum = grid[c][r];
    vector<vector<int>> path(grid.size(), vector<int>(grid[0].size()));
    path[0][0] = grid[0][0];
    for(int c =0; c < grid.size(); c++){
        for(int r =0; r < grid[0].size(); r++){
            if(c == 0){
                if(r > 0) grid[c][r] = path[c][r-1] +  grid[c][r];
            }else if(r== 0){
                if(c > 0 ) path[c][r] = path[c-1][r] + grid[c][r];
            }else{
                path[c][r] = grid[c][r] + min(path[c-1][r], path[c][r-1]);
            }
            cout << path[c][r] << endl;
        }
    }
    return path[grid.size()-1][grid[0].size()-1];
}