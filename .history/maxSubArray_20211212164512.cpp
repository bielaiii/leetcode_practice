#include<iostream>
#include<vector>
using namespace std;


int maxSubArray(vector<int>& nums) {
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if(nums[i] + nums[i-1] < nums[i]){
            ;
        }else{
            nums[i] += nums[i-1];
        }
    }
    return sum;
    
}