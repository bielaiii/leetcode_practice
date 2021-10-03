#include<iostream>
#include<vector>
using namespace std;


int rob(vector<int> &nums){
    if(!nums.size()) return 0;
    if(nums.size() == 1) return 1;
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(max(ans[0], ans[1]));
    for(int i = 2; i < nums.size(); i++){
        ans.push_back(max(ans[i-2]+nums[i], ans[i-1]));
    }
    return ans[ans.size() -1];
}