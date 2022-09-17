#include<iostream>
#include<vector>
using namespace std;

bool search3(vector<int>& nums, int target) {
      int left = 0, right = nums.size() - 1;
      while(left < right ){
            int mid = (left + right) / 2;
            //cout << nums[mid] <<endl;
            if(nums[mid] == target){
                  return 1;
            }else if(nums[mid] < target){
                  
            }else{
                  
            }
      }
      return false;
}