#include<iostream>
#include<vector>
using namespace std;


int largest1BorderedSquare(vector<vector<int>>& grid)
{     
    //vector<vector<int>> dp (grid.size(), vector<int>(grid[0].size(), 0));
    //vector<vector<int>> dp = grid;// (grid.size(), vector<int>(grid[0].size(), 0));
    int edge = 0;
    int rlen = grid.size();
    int clen = grid[0].size();
    vector<vector<int>> left (rlen + 1, vector<int> (clen + 1, 0));
    vector<vector<int>> up (rlen + 1, vector<int> (clen + 1, 0));
    
    for (int r = 1; r < grid.size(); r++) {
        for (int c = 1; c < grid[0].size(); c++) {
            if (grid[r - 1][c - 1] == 0) continue;
            left[r][c+1] = grid[r][c] + left[r][c];    
            up[r+1][c] = grid[r][c] +up[r][c];    
        }   
    }
    /* for(int d = min(rlen, clen); d > 0; d--){
        for (int r = 0; r <= rlen - d; r++) {
            for (int c = 0; c <= clen - d; c++) {
                if (left[r][c + d - 1] - left[r][c] == d &&
                    left[r + d - 1][c + d - 1] - left[r + d - 1][c] == d &&
                    up[r + d - 1][c + d - 1] - up[r][c + d - 1] == d &&
                    up[r + d - 1][c] - up[r][c] == d
                ) {
                    return d * d;
                }
            }
        }
    } */
    return 0;
}