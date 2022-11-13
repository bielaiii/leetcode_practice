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
      for(int i = 1; i < nums.size() ; i ++){
            if(nums[i] > nums[0] && nums[i] <= lessidx){
                  lessidx = nums[i];
            }
      }
      sort(nums.begin() + )
}