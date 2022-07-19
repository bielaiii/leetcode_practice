#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
      vector<vector<int> > vec(nums.size(), vector<int> (nums.size(), 0));// vec[i][j] == goal;
      int sz = nums.size();
      if(nums[0] == k){
            vec[0][0] = -1;
      }else{
            vec[0][0] = nums[0];
      }
      for(int i = 1; i < sz; i++ ){
            for(int j = i + 1; j < sz; j++){
                  if(vec[i-1][j] + vec[])
            }
            
      }


}