#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
      int sz = nums.size();
     //vector<vector<int> > vec(nums.size(), vector<int> (nums.size(), 0));// vec[i][j] == goal;
      vector<int> ans (nums.size() + 1, 0);
      
      for(int i = 1; i <= sz; i++){
            ans[i] = ans[i-1] + nums[i - 1];
      }
      int count = 0;
      for(int i = 0; i < sz; i++){
            for(int j = i +1 ; j < sz; j++){
                  if
                  ((ans[j] - ans[i]) == k) count ++;
            }
      }
      return count;

}