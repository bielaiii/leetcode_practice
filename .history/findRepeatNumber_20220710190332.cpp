#include<iostream>
#include<vector>
#include"header.h"
using namespace std;

void swap(vector<int>& nums, int a, int b){
    int temp = nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
}


int findRepeatNumber(vector<int> &nums){
    for(int i = 0; i < nums.size(); i++){
        swap(nums, nums[i], i);
    }
    printer(nums);
    return 0;
}