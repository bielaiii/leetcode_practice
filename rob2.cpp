#include<iostream>
#include<vector>
using namespace std;


int rob2(vector<int>& nums) {
        vector<int> dp0(nums.size() - 1, 0);
        vector<int> dp1(nums.size() - 1, 0);
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        dp0[0] = nums[0];
        dp0[1] = max(nums[0], nums[1]);
        dp1[0] = nums[1];
        dp1[1] = max(nums[1], nums[2]);
        for(int i = 2 ; i < nums.size() - 1;i++ ){
            dp0[i] = max(dp0[i-1], dp0[i-2] + nums[i]);
        }
        for(int i = 2; i + 1 < nums.size(); i++){
            dp1[i] = max(dp1[i-1], dp1[i-2] + nums[i+1] );
        }
        return max(dp0.back(), dp1.back());;
}