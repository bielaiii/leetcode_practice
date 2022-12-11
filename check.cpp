#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums) {
      int lmin = 0, lmax =0, rmin = 0, rmax = 0;
      lmin = nums[0];
      int i = 0;
      i++;
      while(i < nums.size() && nums[i] >= nums[i-1]){
            i ++;
      }
      if(i == nums.size()) return 1;
      lmax = nums[i-1];
      rmin = nums[i];
      i ++;
      while(i  < nums.size() && nums[i] >= nums[i-1]  ){
            i ++;
      }
      rmax = nums[i-1];
      if(i != nums.size()) return 0;
      if(rmin >= lmax || lmin >= rmax) return 1;
      return 0;
}