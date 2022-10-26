#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool canPartitionKSubsets(vector<int>& nums, int k) {
      int sum_ = 0;
      for(int num : nums) sum_ += num;
      if(! (sum_ % k) ) return 0;
      int target = sum_ / k;
      unordered_map<int ,int> remain;
      unordered_map<int ,int> ct;
      for(int num : nums){
            if(ct.count(num)) ct[num] ++;
            else ct[num] = 1;
            if(! remain.count(num)) remain[num] = target - num;
      }
      vector< vector<int> > vec;
      for(int num : nums){
            
            if(ct[num] > 0){
                  ct[num] --;
                  
            }
      }
}