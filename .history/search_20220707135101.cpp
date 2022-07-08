#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while(left <= right){
        int temp = left + (right - left) / 2;
        
        if(nums[temp] == target){
            return temp;
            
        }else if(nums[temp] < target){
            left = temp + 1;
        }else{
            right = temp - 1;
        }
    }
    return -1;
}