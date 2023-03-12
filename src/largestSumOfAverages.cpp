#include<iostream>
#include<vector>
using namespace std;

double largestSumOfAverages(vector<int>& nums, int k) {
      vector<double> sum(nums.size() + 1,0 );
      vector<vector<double>> dp(nums.size() +1, vector<double>(k + 1, 0));
      for(int i = 1; i <= nums.size(); i ++){
            sum[i] = nums[i-1] + sum[i-1];
      }
      for(int i = 1; i <= nums.size(); i++){
            dp[i][1] = sum[i] / i;
            for(int t = 2; t <= k && t <= i; t++){
                  for(int j = 1; j < i; j++){
                        dp[i][t] = max(dp[i][t], dp[j][t-1] + (sum[i] - sum[j])/(i-j));
                  }
            }
      }
      return dp.back()[k];
}