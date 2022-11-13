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
      int temp = nums[i];
      for(int j = nums.size() - 1; j >= 0; j --){
            if(nums[j] > nums[i] && nums[j] <= temp){
                  temp = nums[j];
            }
      }
      swap(temp, nums[i]);
      sort(nums.begin() + i, nums.end());
     // return nums;
}