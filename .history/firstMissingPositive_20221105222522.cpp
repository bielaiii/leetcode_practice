#include<iostream>
#include<vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
      vector<int> vec (nums.size(), 0);
      for(int &n : nums){
            if(n <= 0){
                  n = nums.size() + 1;
            }
      }
      for(int i = 0; i < nums.size(); i++){
            int num = abs(nums[i]);
            if(num <= nums.size() ){
                  nums[num - 1] = -abs(nums[num - 1]);
            }
      }
      int i = 0 ;
      for(; i < nums.size(); i++){
            if(nums[i] > 0){
                  return i + 1;
            }
      }
      
      return i + 1 ;
}