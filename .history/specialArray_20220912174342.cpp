#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int specialArray(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int i = nums.size() -1;
      while( i >= 0){
            if(nums[i] >= nums.size() - 1 - i){
                  i --;
            }else{
                  return i;
            }
      }
      return i < 0 ? -1 : i;
}