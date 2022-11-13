#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap(int & a, int &b){
      int temp = a;
      a = b;
      b = temp;
}

void nextPermutation(vector<int>& nums) {
      int lessidx = INT16_MAX;
      //int temp = 0;
      int i = 0;
      for(i = nums.size() - 1; i >= 0 ; i -- ){
            if(nums[i] > nums[i - 1]){
                  i = i - 1;
                  break;
            }
      }
      if(i < 0){
            reverse(nums.begin(), nums.end());
            return;
      }
      int t = nums.size() - 1;
      while(t >= 0 && nums[t] <= nums[i]) t --;
      swap(nums[t], nums[i]);
      reverse(nums.begin() + i, nums.end());
     // return nums;
}