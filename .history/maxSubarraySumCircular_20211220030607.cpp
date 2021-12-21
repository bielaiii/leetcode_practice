#include <iostream>
#include<vector>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int max_ = nums[0];
    int min_ = nums[0];
    int sum = 0;
    int dp = 0;
    for (int i = 1; i < nums.size(); i++)
    {
       max_ = max(nums[i-1] + nums[i], nums[i]);
       max_ = max(max_ , nums[i]);
        sum += nums[i];
       //min_ = max(min_ , nums[i]);
    }
    cout << "max_"<< max_ << endl;
    //int sum = 0;
    if(nums.size() > 2){
        for(int i = 1; i < nums.size() - 2; i++){
            nums[i] = max(nums[i-1] + nums[i], nums[i]);
            min_ = max(min_ , nums[i]);
        }
    }
    return max(sum - min_, max_);
}