#include<iostream>
#include<vector>
using namespace std;


int minSubArrayLen(int target, vector<int>&nums ){
    int len_ = nums[0] >= target? 1 : INT32_MAX ;
    int sum = nums[0];
    int l = 0;
    for(int r = 1; r < nums.size(); r++){
        sum += nums[r];
        while(l <= r && sum - nums[l] >= target  ){
            sum -= nums[l];
            l ++;
        }
        if(sum >= target)
            len_ = min(len_, r - l + 1);
    }
    return sum>= target? len_ : 0;
}