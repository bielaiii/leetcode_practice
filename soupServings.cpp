#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double soupServings(int n) {
      n = ceil((double)n / 25);
      if(n >= 179) return 1;
      vector<vector<double>> dp(n + 1, vector<double>(n+1, 0));
      dp[0][0] = 0.5;
      for(int i = 1; i <= n; i++){
            dp[0][i] = 1.0;
      }
      for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                  dp[i][j] = (dp[max(0, i - 4)][j] 
                  + dp[max(0, i - 3)][j - 1]
                   + dp[max(i-2, 0)][max(j - 2, 0)]
                    + dp[max(i - 1,0)][max(0, j - 3)]) / 4.0;
            }
      }
      return dp[n][n];
}  