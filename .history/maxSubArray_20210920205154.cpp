#include<iostream>
#include<vector>
using namespace std;


int maxSubArray(vector<int>& nums) {
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if(sum + nums[i] >= sum){
            sum += nums[i];
        }else{
            sum = sum - nums[i-1] + nums[i];
        }
        /* code */
    }
    return sum;
    
}