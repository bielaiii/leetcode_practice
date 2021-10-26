#include<vector>
#include<iostream>
using namespace std;


bool canJump(vector<int>& nums) {
    int temp = nums[0];
    int i = 0;
    while(temp != 0 && i < nums.size()){
        temp --;
        if(temp < nums[i]){
            temp = nums[i];
        }
    }
    return i == nums.size();
}