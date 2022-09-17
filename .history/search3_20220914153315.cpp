#include<iostream>
#include<vector>
using namespace std;

bool search3(vector<int>& nums, int target) {
      int left = 0, right = nums.size() - 1;
      ///if(left == right) return target == nums[0];
      while(left < right ){
            while(left < right && nums[left] == nums[left + 1] && ) left ++;
            while( && left < rightnums[right] == nums[right - 1] ) right -- ;
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
                        left = mid + 1;
                  }else{
                        right = mid - 1 ;
                  }
            }
      }
      return false;
}