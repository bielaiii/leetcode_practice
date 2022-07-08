#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while(left < right){
        int temp = (left + right) / 2;
        if(nums[temp] == target){
            return temp;
            
        }else if(nums[temp] < left){
            left = temp;
        }else{
            right = temp;
        }
    }
    return -1;
}