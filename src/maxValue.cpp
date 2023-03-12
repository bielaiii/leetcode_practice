#include<iostream>
#include<vector>
using namespace std;

int maxValue(vector<vector<int>>& grid)
{
    vector<vector<int>> dp (grid.size(), vector<int>(grid[0].size(), 0));
    int maxval = 0;
    dp[0][0] = grid[0][0];
    for (int r = 0; r < grid.size(); r++) {
        for (int c = 0; c < grid[0].size(); c++) {
            int temp_r = r - 1;
            int temp_c = c - 1;
            int left_val = temp_c < 0 ? 0 : dp[r][temp_c];
            int up_val = temp_r < 0 ? 0 : dp[temp_r][c];
            dp[r][c] = max(left_val, up_val) + grid[r][c];
        }
    }
    return dp.back().back();
}