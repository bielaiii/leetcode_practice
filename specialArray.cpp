#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int specialArray(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int i = nums.size() -1;
      int left = 0, right = nums.size() - 1;
      while(left < nums.size() ){
            if(nums[left] > nums.size() - left - 1){
                  return nums[left];
            }
            left ++;
      }
      return -1;
      
      //return -1;
}