#include<vector>
#include<iostream>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    if(nums.size() == 0) return {-1, -1};
    int left = 0 , right = nums.size() - 1;
    int idx = 0;
    while(left <= right){
        idx = (left + right) / 2;
        if(nums[idx ] == target){
            left = idx;
            right = idx;
            
            while(left >= 0 && nums[left] == target) left --;
            while(right < nums.size() && nums[right] == target) right ++;
            
            return {left + 1, right - 1};
        }else if(nums[idx ] < target){
            left = idx + 1;
        }else{
            right = idx - 1;
        }
    }
   
    return {-1, -1};
}