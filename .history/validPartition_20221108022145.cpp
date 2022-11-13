#include<iostream>
#include<vector>
using namespace std;


bool validPartition(vector<int>& nums){
      vector<int> dp (nums.size() + 1, 0);
      dp[0] = 1;
      for(int i = 1; i < nums.size(); i++){
            if(i > 1 && dp[i-1] && nums[i] == nums[i-1]) dp[i] = 1;
            if(i > 1 && dp[i-2] && (nums[i] == nums[i -1] && nums[i- 2] ) || 
            (nums[i] -1 == nums[i -1] && nums[i-1] - 1 == nums[i-2])){
                  dp[i] = 1;
            }
      }
      return dp[nums.size()];
}

