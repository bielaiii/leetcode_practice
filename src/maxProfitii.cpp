#include<iostream>
#include<vector>
using namespace std;

int maxProfit2(vector<int> &nums){
      if(nums.size() < 2) return 0;
    vector<int> dp0 (nums.size(), 0); //holding stock
    vector<int> dp1 (nums.size(), 0);//not holding stock
    dp0[0] = -nums[0];
    for(int i = 1; i < nums.size(); i++){
            dp0[i] = max(dp0[i-1], dp1[i-1] - nums[i]);
            dp1[i] = max(dp1[i-1], dp0[i-1] + nums[i]);
    }
    return dp1.back();
}