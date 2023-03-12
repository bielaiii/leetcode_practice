#include<iostream>
#include<vector>
using namespace std;


int numTilings(int n) {
      vector<vector<int>> dp(n + 1, vector<int>(4, 0));
      dp[0][3] = 1;
      const int mod = 1e9+7;
      for(int i = 1; i <= n; i++){
            dp[i][0] = dp[i-1][3] % mod;
            dp[i][1] = (dp[i-1][0] + dp[i-1][2] ) % mod;
            dp[i][2] = (dp[i-1][0] + dp[i-1][1] ) % mod;
            dp[i][3] = ((long long)dp[i-1][3] + dp[i-1][1] + dp[i-1][2] + dp[i-1][0]) % mod;
      }
      return dp.back().back();
}