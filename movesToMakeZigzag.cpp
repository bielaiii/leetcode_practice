#include<iostream>
#include<vector>
using namespace std;

/*

dp[0] //shrink
dp[1] // stay
dp[2] //grow

*/


int helper(vector<int>& nums, int pos)
{
    int res = 0;
    for (int i = pos; i < nums.size(); i+=2) {
        int temp = 0;
        if (i - 1 >= 0) {
            temp = max(temp, nums[i] - nums[i - 1] + 1);
        }
        if (i + 1 < nums.size()) {
            temp = max(temp, nums[i] - nums[i + 1] + 1);
        }
        res += temp;
    }
    return res;
}

int movesToMakeZigzag(vector<int>& nums) {
    return min(helper(nums, 0), helper(nums,1));
}