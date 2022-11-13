#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
      sort(nums.begin(), nums.end());
      vector< vector< int> > vec;
      if(nums.size() < 4) return vec;
      int len = nums.size();
      for(int i = 0; i < len - 3; i ++){
            if(nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target){
                  break;
            }else if(nums[i] + nums[len - 3] + nums[len -2] + nums[len -1] < target){
                  continue;
            }
            for(){
                  
            }
      }

}