#include<vector>
#include<iostream>
using namespace std;


bool canJump(vector<int>& nums) {
    int temp = nums[0];
    if(nums.size() == 1 && nums[0] == 0){
        return true;
    }
    if(nums.size() == 2 && nums[0] > 0) return true;
    for(int i = 0; i < nums.size(); i++){
        if(! nums[i]){
            temp --;
        }else if(temp < nums[i]){
            temp = nums[i];
        }else{
            temp --;
        }
        if(temp <= 0 && i != nums.size()-1) return false;
    }
    return true;
}