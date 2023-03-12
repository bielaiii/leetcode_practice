#include<iostream>
#include<vector>
using namespace std;

bool flag = 0;

bool rec_partition(vector<int> & nums, int sum, vector<bool> visited){
      if(sum == 0){
            return 1;
      }else if(sum < 0){
            return 0;
      }
      for(int i = 0 ; i < nums.size(); i++){
            if(visited[i] == 0 && sum - nums[i] >= 0){
                  visited[i] = 1;
                  if(rec_partition(nums, sum - nums[i], visited)) return 1;;
                  visited[i] = 0;
            }
      }
      return 0;
}

bool canPartition(vector<int>& nums) {
      int sum = 0;
      for(int i : nums) sum += i;
      if(sum % 2) return 0;
      sum /= 2;
      vector<int> dp(sum + 1, 0);
      for(int i = 0 ; i < nums.size(); i++){
            for(int j = sum; j >= i; j--){
                  dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
            }
      }
      return dp.back();
}