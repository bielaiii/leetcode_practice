#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {

      vector<vector<int> > vec(nums.size(), vector<int> (nums.size(), 0));// vec[i][j] == goal;
      vector<int> ans (nums.size(), 0);
      int sz = nums.size();
      
      vec[0][0] = nums[0];
      int count = 0;
      for(int i = 0; i < sz; i++ ){
            vec[i][i] = nums[i];
            int count = 0;
            for(int j = i + 1; j < sz; j++){
                  vec[i][j] = vec[i][j-1] + nums[j];
                  if(vec[i][j] == k) count++;
            }
           // ans[i] += count;
      }
      
      
      return count;

}