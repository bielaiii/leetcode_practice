#include <iostream>
#include<vector>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int max_ = nums[0];
    int min_ = nums[0];
    int sum = nums[0];
    int dp = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        //dp = max(nums[i], 0);
        dp = nums[i] + max(dp, 0);
        max_ = max(dp, max_);
        sum += nums[i];
        //cout <<"max: "<< max_ << endl; 
    }
    dp = nums[0];
    for(int i = 1; i < nums.size() - 1; i++){
        dp = nums[i] + min(dp, 0);
    }
    return max(sum - min_, max_);
}