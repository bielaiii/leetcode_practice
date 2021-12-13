#include<iostream>
#include<vector>
using namespace std;


int maxSubArray(vector<int>& nums) {
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if(sum + nums[i] >= nums[i]){
            sum += nums[i];
        }else{
            nums[i] = sum;
        }
        /* code */
    }
    return sum;
    
}