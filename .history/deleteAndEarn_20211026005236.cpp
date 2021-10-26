#include<iostream>
#include<vector>
#include<map>
using namespace std;


int deleteAndEarn(vector<int>& nums) {
    if(nums.size() == 1){
        return nums[0];
    }
    vector<int> vec(1001,0);
    for(auto i = nums.begin(); i != nums.end(); i++){
       vec[*i] += *i;
    }
    vector<int> ans;
    ans[nums[0]] = nums[0];
    ans[nums[1]] = nums[1];
    for(int i = 2 ; i < 1001; i++){
        ans[i] = max(ans[i-2]+vec[i], ans[i-1]);
    }
    return ans[ans.size()-1];
}