#include<iostream>
#include<vector>
using namespace std;

bool search3(vector<int>& nums, int target) {
      int left = 0, right = nums.size() - 1;
      while(left < right ){
            int mid = (left + right) / 2;
            //cout << nums[mid] <<endl;
            if(nums[mid] == target){
                  return mid;
            }else if(nums[mid] < target){
                  left = mid + 1;
            }else{
                  right = mid - 1;
            }
      }
      return false;
}