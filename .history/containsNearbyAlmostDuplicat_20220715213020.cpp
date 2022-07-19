#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
      set<int> myset;
      for(int i = 0; i < t; i++){
            myset.insert(nums[i]);
      }
      if( myset.rbegin() - myset.begin() <= k) return 1;
      int i = t;
      while(i < nums.size()){
            myset.erase(myset.count(nums[i - 1]));
            myset.insert(nums[i]);
            if((myset.rbegin() - myset.begin()) <  k)
      }
      return 1;
}