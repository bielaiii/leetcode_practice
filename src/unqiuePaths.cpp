#include<iostream>
#include<vector>
using namespace std;



int uniquePaths(int m, int n) {
        int r = 0, c = 0;
        vector<vector<int>> dp(m, vector<int>(n  ,0));
        for(int i =0; i < m; i++){
            dp[i][0] = 1;
        }
        for(int i = 0; i < n; i++){
            dp[0][i] = 1;
        }
        for(r = 1; r < m; r++){
            for(c = 1; c < n; c++){
                dp[r][c] = dp[r-1][c] + dp[r][c-1] ;
            }
        }
        return dp.back().back();
}