#include<iostream>
#include<vector>
using namespace std;

int missingNumber2(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int left = 0 , right = nums.size() - 1;
    int sz = nums.size() + 1;
    while(left <= right){
      int mid = (left + right) / 2;
      if(nums[mid] < mid){
            left = mid + 1;
      }else{
            right = mid - 1;
      }
    }
    return left;
}