#include<iostream>
#include<vector>
using namespace std;


bool validPartition(vector<int>& nums){
      vector<int> vec (nums.size(), 0);
      for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                  vec[i ] = 1;
            }
            if
      }
}

