#include<iostream>
#include<vector>
using namespace std;



int maxSumAfterPartitioning(vector<int>& arr, int k) {
      int maxnum = 0;
      vector<int> dp(arr.size() + 1, 0);
      dp[1] = arr[0];
     // int temp_max = 0 ;
      for(int i = 1; i < arr.size(); i++){
            int temp_max = arr[i];
            dp[i+1] = arr[i] + dp[i];
            for(int j = 1; j < k; j++){
                  if(i - j >= 0){
                        temp_max = max(temp_max, arr[i - j]);
                        dp[i+1] = max(dp[i-j] + temp_max * (j + 1), dp[i+1]);
                  }
            }
      }
      return dp.back();
}