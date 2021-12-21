#include <iostream>
#include<vector>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int sum = nums[0];
    int min_ = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
       nums[i] = max(nums[i-1] + nums[i], nums[i]);
       max_ = max(max_ , nums[i]);

       //min_ = max(min_ , nums[i]);
    }
    if(nums.size() > 2){
        for(int i = 1; i < nums.size() - 2; i++){
            nums[i] = max(nums[i-1] + nums[i], nums[i]);
            max_ = max(max_ , nums[i]);
        }
    }
    return max(max_ - min_, max_);
}