#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while(left <= right){
        int idx = ( left + right) / 2;
        if(nums[idx] == target){
            return idx;
        }else if(nums[idx] < target){
            left = idx + 1;
        }else{
            right = idx - 1;
        }
    }
    return ( left + right ) / 2;
}