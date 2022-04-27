#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
      map<int, int> map_;
      int flag = 0;
      for(int i =0 ;i < nums.size(); i++){
            if(! map_.count(nums[i])){
                  map_[nums[i]] = i;
            }else{
                  if(map_[nums[i]] - i < k){
                        return 1;
                  }else{
                        map_[nums[i]] = i;
                  }
            }
            
      }
      return false;
}