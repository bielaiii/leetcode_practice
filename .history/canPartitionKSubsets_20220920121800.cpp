#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void rec_carnPartitionSubsets(const vector<int>& nums, int k, vector<int> temp, int sum, unordered_map<int, int> remain){
      if(sum >= k) return ;
      for(int i = k - sum; i > 0; i--){
            if(remain.count(i) && remain[i] > 0){
                  temp.push_back(i);
                  remain[i] --;
                  rec_carnPartitionSubsets(nums, k,temp, sum + i, remain );
                  temp.pop_back();
                  remain[i] ++;
            }
      }
}


bool canPartitionKSubsets(vector<int>& nums, int k) {
      int sum_ = 0;
      for(int num : nums) sum_ += num;
      if(! (sum_ % k) ) return 0;
      int target = sum_ / k;
      unordered_map<int ,int> remain;
      unordered_map<int ,int> ct;
      sort(nums.begin(), nums.end());
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