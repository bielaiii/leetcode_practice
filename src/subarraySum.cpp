#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
      if(nums.size() == 0) return 0;
      int ct = 0 ;
      vector<int> ssum(nums.size(), 0);
      ssum[0] = nums[0];
      ct += nums[0] == k ? 1 : 0;
      for(int i = 1 ; i < nums.size(); i++){
            ssum[i] = ssum[i-1] + nums[i];
      }
      for(int i = 1; i < nums.size(); i++){
            if(ssum[i] == k) ct ++;
            for(int j = i + 1; j < nums.size(); j++){
                  
            }
      }
      return ct;
}