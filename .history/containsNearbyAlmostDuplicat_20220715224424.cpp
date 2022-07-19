#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
      set<long long> myset;
      
      int i = 0;
     
      while(i < nums.size()){
            if(myset.size() +1 == k){
                   myset.erase(myset.find(nums[i - 1]));
                  myset.insert(nums[i]);
            }
            
            if((*myset.rbegin() - *myset.begin()) > t) return 1;
            i ++;
      }
      return 0;
}