#include<iostream>
#include<vector>
using namespace std;

int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
    vector<int> max_horizontal;
    vector<int> max_vertical;
    int sum = 0;
    for(int c = 0; c < grid.size(); c++){
        int max_ = grid[c][0];
        for(int r = 1; r < grid[0].size(); r++){
            max_ = max(max_, grid[c][r] );
        }
        max_horizontal.push_back(max_);
        max_ = 0;
    }
    for(int r = 0; r < grid[0].size(); r++){
        int max_ = grid[0][r];
        for(int c = 1; c < grid.size(); c++){
            max_ = max(max_, grid[c][r] );
        }
        max_vertical.push_back(max_);
        max_ = 0;
    }
    for(int c = 0; c < grid.size(); c++){
        for(int r = 0; r < grid[0].size(); r++){
            //grid[c][r] = min(max_horizontal[r], max_vertical[c]);
            sum += (min(max_horizontal[r], max_vertical[c]) - grid[c][r]);
        }
    }
    return sum;
}