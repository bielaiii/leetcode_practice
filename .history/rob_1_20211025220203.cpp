#include<iostream>
#include<vector>
using namespace std;


int rob(vector<int> &nums){
    if(!nums.size()) return 0;
    if(nums.size() == 1) return nums[0];
    vector<int> ans;
    //consider to steal first house
    ans.push_back(nums[0]);
    ans.push_back(max(nums[0], nums[1]));
    for(int i = 2; i < nums.size() - 1; i++){
        ans.push_back(max(ans[i-2]+nums[i], ans[i-1]));
    }
    int first_min = ans[ans.size() -1];
    ans.clear();
    ans.push_back(nums[1]);
    ans.push_back(nums[2]);
    for(int i = 3; i < nums.size() ; i++){
        ans.push_back(max(ans[i-2]+nums[i], ans[i-1]));
    }
    int second_min = ans[ans.size() - 1];

    //consider to steal last house;
    return min(first_min, second_min);
}