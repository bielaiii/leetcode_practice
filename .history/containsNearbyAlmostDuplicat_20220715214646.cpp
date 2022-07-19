#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
      set<int> myset;
      for(int i = 0; i <= k; i++){
            myset.insert(nums[i]);
      }
      if( *myset.rbegin() - *myset.begin() > t) return 1;
      int i = k ;
      cout << *myset.rbegin() - *myset.begin() <<endl;
      while(i < nums.size()){
            myset.erase(myset.find(nums[i - 1]));
            myset.insert(nums[i]);
            if((*myset.rbegin() - *myset.begin()) > t) return 1;
            i ++;
      }
      return 0;
}