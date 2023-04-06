#include<iostream>
#include<vector>
using namespace std;

int mergeStones(vector<int>& stones, int k) {
    vector<int> presum (stones.size() + 1, 0);
    presum[0] = 0;
    int len = stones.size();
    if ((len - 1) % (k - 1) ) {
        return -1;
    }
    for (int i = 0; i < len; i++) {
        presum[i + 1] = presum[i] + stones[i];
    }
    vector<vector<int>> dp(len, vector<int>(len, 0));
    for (int i = len - 1; i >= 0; i--) {
        for (int j = i + 1; j < len; j++) {
            dp[i][j] = INT_MAX;
            for (int m = i; m < j; m+=k-1) {
                dp[i][j] = min(dp[i][j], dp[i][m] + dp[m + 1][j]);
            }
            if ((j - i) % (k - 1) == 0) {
                dp[i][j]+=presum[j+1] - presum[i];
            }
        }
    }
    return dp[0][len-1];
}
