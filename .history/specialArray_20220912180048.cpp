#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int specialArray(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int i = nums.size() -1;
      int left = 0, right = nums.size() - 1;
      while(right > 0){
            if(nums[right] > nums.size() - right){
                  right --;
            }else{
                  return right + 1;
            }
      }
      
      return -1;
}