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
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            if((long)nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target){
                  break;
            }
            if( (long)nums[i] + nums[len - 3] + nums[len -2] + nums[len -1] < target){
                  continue;
            }
            for(int j = i + 1; j < len - 2; j++){
                  long temp = nums[i] + nums[j] + nums[j+1] + nums[j + 2];
                  if(nums[j] == nums[j - 1]) continue;
                  if((long)nums[i] + nums[j] + nums[j + 1] + nums[j + 2] < target){
                        break;
                  }
                  if((long)nums[i] + nums[j] + nums[len - 1] + nums[len - 2] > target){
                        continue;
                  }
                  int left = 0, right = 0;
                  while(left < right){
                        
                  }
            }
      }

}