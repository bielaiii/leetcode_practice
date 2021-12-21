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
        if(nums[i] > 0){
            max_ += nums[i];
        }else{
            max_ = max(max_, nums[i] + nums[i - 1]);
        }
        cout << max_ << endl; 
    }
    //cout << max_ <<endl
    for(int i = 1; i < nums.size() - 1; i++){
        min_ = min(nums[i-1] + nums[i], nums[i]);
        min_ = min(min_ , nums[i]);
    }
     cout << min_ <<endl;
     cout << max_ <<endl;
    return max(sum - min_, max_);
}