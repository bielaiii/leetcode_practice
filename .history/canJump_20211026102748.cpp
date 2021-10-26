#include<vector>
#include<iostream>
using namespace std;

bool canJump(vector<int>& nums) {
    int temp = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > temp - 1){
            temp = nums[i];
        }else{
            temp --;
        }
        if(!temp) return false;
    }
    return true;
}