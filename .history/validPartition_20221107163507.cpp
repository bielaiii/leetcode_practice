#include<iostream>
#include<vector>
using namespace std;

bool rec_validPartition(const vector<int>& nums, int j ) {
      if(j == nums.size()){
            return 1;
      }
      for(int i = j; i < nums.size(); i++){
            if(i + 1 < nums.size() && nums[i] == nums[i+1]){
                  rec_validPartition(nums, i + 2);
            }else if(i +2 < nums.size() && (nums[i] == nums[i+1] && nums[i+1] == nums[i+2] ||
                  nums[i] + 1 == nums[i+1]  && nums[i+1] + 1 == nums[i+2]
            )){
                  rec_validPartition(nums, i + 3);
            }else{
                  return 0;
            }
      }
      return 0;
}

bool validPartition(vector<int>& nums){
      return rec_validPartition(nums, 0);
}

