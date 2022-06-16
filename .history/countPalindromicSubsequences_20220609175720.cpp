#include<iostream>
#include<vector>
using namespace std;


int countPalindromicSubsequences(string s) {
    long long mod = 1e9 + 7;
    int len = s.length();
    vector<vector<int>> dp(len, vector<int>(len, 0));
    for(int i = 0; i < len; i++) dp[i][i] = 1;
    for(int i  = len - 2; i >= 0 ; i--){
        for(int j = i  +1; j >= len ; j--){
            if(s[i] == s[j]){
                dp[i][j] = 2 * dp[i+1][j-1] + 2;;
                int l = i +1, r = j - 1;
                while(l <= r && s[l] != s[i]) l++;
                while(l <= r && s[r] != s[i]) r--;
                if(l == r){
                    dp[i][j] --;
                }else if(l < r){
                    dp[i][j] -= 2 + dp[l+1][r-1];
                }
            }else{
                dp[i][j] = dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1];
            }
            dp[i][j] = dp[i][j] > 0? dp[i][j] % mod : dp[i][j] + mod;
        }
    }

    return dp[0][len -1];
}