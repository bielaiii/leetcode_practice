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
      int temp = 0;
      for(int i = 1; i < nums.size() ; i ++){
            if(nums[i] > nums[0] && nums[i] < lessidx){
                  lessidx = nums[i];
                  temp = i;
            }
      }
      swap(nums[temp], nums[0]);
      sort(nums.begin() + 1, nums.end(), [](int a, int b){
            return a > b;
      } );
     // return nums;
}