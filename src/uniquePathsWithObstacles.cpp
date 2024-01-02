#include<iostream>
#include<vector>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    const int dir[2][2] = {{0,1},{1,0}};
    int r_sz = obstacleGrid.size(), c_sz = obstacleGrid[0].size();
    vector<vector<int>> dp(r_sz, vector<int>(c_sz, 0));
    for(int i = 0; i < r_sz; i++){
        if(obstacleGrid[i][0] ) break;
        dp[i][0] = 1;
    }
    for(int i = 0; i < c_sz; i++){
        if(obstacleGrid[0][i] ) break;
        dp[0][i] = 1;
    } 
    for(int r = 1 ; r < r_sz; r++){
        for(int c = 1; c < c_sz; c++){
            if(obstacleGrid[r][c] ) continue;
            dp[r][c] = dp[r-1][c] + dp[r][c-1];
        }
    }
    for(auto rr : dp){
        for(auto cc : rr){
            cout << cc <<" ";
        }
        cout << endl;
    }
    return dp[r_sz - 1][c_sz - 1];
}