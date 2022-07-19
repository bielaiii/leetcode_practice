#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
      vector<vector<int> > vec(nums.size(), vector<int> (nums.size(), 0));// vec[i][j] == goal;
      int sz = nums.size();
      if(nums[0] == k) vec[0][0] = 1;
      for(int i = 1; i < sz; i++ ){
            
      }


}