#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    //int max_ = nums[0];
    int dp1 = nums[0];
    int dp2 = nums[0];
    int max_ = nums[0];
    int min_ = nums[0];
    for(int i = 1; i < nums.size(); i++){
        dp1 = nums[i] * max(dp1, 1);
        dp2 = nums[i] * min(dp2, 1);
        max_ = max(max_, dp1);
        min_ = min(min_, dp2);
        //cout << product <<endl;
    }
   // cout << product << endl;
    return max(max_, min_);
}