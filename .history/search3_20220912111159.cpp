#include<iostream>
#include<vector>
using namespace std;

bool search3(vector<int>& nums, int target) {
      int left = 0, right = nums.size() - 1;
      while(left < right ){
            //int mid = (left + right) / 2;
            cout << nums[left] <<endl;
            if(nums[left] == target){
                  return 1;
            }else if
            (nums[left] < target){
                  left = (left + right) / 2;
            }else{
                  right = (left + right) / 2;
            }
      }
      return false;
}