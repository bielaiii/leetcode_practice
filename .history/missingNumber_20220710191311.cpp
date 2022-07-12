#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int left = 0, right = nums.size() -1;
    int sz = nums.size() ;
    while(left < right){
        int idx = (left + right) / 2;
        if(nums[idx] != sz / 2){
            right = idx --;
        }else if(nums[idx] < sz / 2){
            right = idx - 1;
        }
        else{
            left = idx + 1;
        }
        sz /= 2;
    }

}