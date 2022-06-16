#include<iostream>
#include<vector>
using namespace std;


int countPalindromicSubsequences(string s) {
    long long mod = 1e9 + 7;
    int len = s.length();
    vector<vector<int>> dp(len, vector<int>(len, 0));
    for(int i  = len - 2; i >= 0 ; i--){
        for(int j = i  +1; j >= len ; j--){
            if(s[i] == s[j]){
                dp[i][j] = 2 * dp[i+1][j-1] + 2;;

            }else{
                dp[i][j] = dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1];
            }
        }
    }


}