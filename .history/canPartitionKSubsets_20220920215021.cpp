#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<numeric>
using namespace std;



bool canPartitionKSubsets(vector<int>& nums, int k) {
      int sum_ = 0;
      for(int num : nums) sum_ += num;
      if(! (sum_ % k) ) return 0;
      int target = sum_ / k;
      unordered_map<int ,int> remain;
      unordered_map<int ,int> ct;
      vector<int> bucket(k, 0);
      sort(nums.begin(), nums.end(), [](int a, int b){
            return a > b;}
      );
      for(int num : nums){
            if(ct.count(num)) ct[num] ++;
            else ct[num] = 1;
            if(! remain.count(num)) remain[num] = target - num;
      }
      vector< vector<int> > all;
      vector<int> tmp;
      for(auto i : all){
            if( accumulate(tmp.begin(), tmp.end(), 0) != k) return 0;
      }
      return 1;
}

bool backTrack(vector<int> &nums, vector<int> &bucket, int k, int idx, int target){
      if(idx == nums.size()) return 1;
      for(int i = 0; i < )
}
