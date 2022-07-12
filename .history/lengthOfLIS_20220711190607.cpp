#include<iostream>
#include<vector>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    vector<int> vec(nums.size()+ 1, 0);
    vec[0] = 0;
    vec[1] = 1;
    int maxm = 1;
    for(int i = 0; i < nums.size() ; i++){
        for(int j =0; j < i; j++){
            if(nums[j] < nums[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
            maxm = max(dp[i], maxm)
        }
    }
    return maxm;
}