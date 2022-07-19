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
      for(int i = 0; i < sz; i++ ){
            vec[i][0] = nums[0];
            for(int j = 1; j < sz; j++){
                  vec[i][j] = vec[i][j-1] + nums[j];
            }
      }
      int count = 0;
      for(int i = 0; i < sz; i++){
            for(int j = 0; j < sz; j++){
                  if(vec[i][j] == k) count++;
            }
      }
      return count;

}