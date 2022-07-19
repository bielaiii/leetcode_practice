#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
      set<long long> myset;
      
     
      for(int i = 0; i < nums.size(); i++){
            auto id = myset.lower_bound((long)abs(nums[i] - t));
            if(id != myset.end() && abs(nums[i] - *id) <= t) return 1;
            myset.insert((long long)nums[i]);
            if(i  >= k) myset.erase(nums[i - k]);
      }
      return 0;
}