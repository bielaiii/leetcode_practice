#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
    vector<vector<int>> max_rows;
    vector<vector<int>> max_cols;
    for (int i = 1 ; i < grid.size() - 1 ; i++) {
        vector<int> temp = {};
        for (int c = 0; c < grid[0].size(); c++) {
            temp.push_back(max(max(grid[i - 1][c], grid[i + 1][c]), grid[i][c]));
        }
        max_rows.push_back(temp);
    }
    vector<vector<int>> ans (grid.size() - 2, vector<int> (grid.size() - 2, 0));
    for (int i = 0; i < grid.size() - 2; i++) {
        for (int c = 1 ; c < grid.size() - 1; c++) {
            ans[i][c - 1] = max(max(max_rows[i][c - 1], max_rows[i][c + 1]), max_rows[i][c]);
        }
    }
    return ans;
}