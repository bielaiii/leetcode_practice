#include<iostream>
#include<vector>
using namespace std;

bool search3(vector<int>& nums, int target) {
      int left = 0, right = nums.size() - 1;
      while(left < right ){
            while(nums[left] == nums[left + 1] && left < nums.size() - 1) left ++;
            while(nums[right] == nums[right - 1] && right > 0) right -- ;
            int mid = (left + right) / 2;
            if(nums[mid] == target) return 1;
            if(nums[mid] >= nums[left]){ //zuobian
                  if(target < nums[mid] && target > nums[left] ){
                        right = mid - 1;
                  }else{
                        left = mid + 1;
                  }
            }else{//yuoubian
                  if(target < nums[right] && target > nums[mid]){
                        right = mid + 1;
                  }else{
                        left = mid - 1 ;
                  }
            }
      }
      return false;
}