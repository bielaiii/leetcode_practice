#include<iostream>
#include<vector>
using namespace std;

int search2(vector<int>& nums, int target) {
    int left = 0, right = nums.size() -1;
    int idx = 0;
    while(left <= right){
        idx = (left + right) / 2;
        if(nums[idx] == target){
            int left = idx
            break;
        }else if(nums[idx] < target){
            left = idx + 1;
        }else{
            right = idx - 1;
        }
    }
    return 0;
}