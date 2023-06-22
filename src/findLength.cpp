#include<iostream>
#include<vector>
using namespace std;

int findLength(vector<int>& nums1, vector<int>& nums2) {
      vector<vector<int>> dp(nums1.size() + 1, vector<int> (nums2.size() + 1, 0));
      int ret = 0 ; 
      for(int i = 1 ; i <= nums1.size(); i++){
            for(int j = 1; j <= nums2.size(); j++){
                  if( nums1[i-1] == nums2[j-1]){
                        dp[i][j] = dp[i-1][j-1] + 1;
                  }else{
                        dp[i][j] = max(dp[i-1][j-1], max(dp[i-1][j], dp[i][j-1]));
                  }
                  ret = max(ret , dp[i][j]);
            }

      }
      return ret;
}