#include<iostream>
#include<vector>
using namespace std;

int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
    vector<vector<int>> grid_cp = grid;
    for(int c = 0; c < grid.size(); c++){
        int max_ = grid[c][0];
        for(int r = 1; r < grid[0].size(); r++){
            max_ = max(max_, grid[c][r]);
        }
        for(int d = 0; d < grid.size(); d++){
            
        }
    }
}