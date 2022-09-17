#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int specialArray(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int i = nums.size() -1;
      int left = 0, right = nums.size() - 1;
      while(left < right){
            int mid = (left + right ) / 2;
            if(nums[mid] >= nums.size() - mid){
                  return mid;
            }else{

            }
      }
      
      return i < 0 ? -1 : i;
}