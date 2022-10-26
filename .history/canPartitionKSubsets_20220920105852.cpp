#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool canPartitionKSubsets(vector<int>& nums, int k) {
      int sum_ = 0;
      for(int num : nums) sum_ += num;
      if(! (sum_ % k) ) return 0;
      
}