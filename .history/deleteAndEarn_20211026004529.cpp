#include<iostream>
#include<vector>
#include<map>
using namespace std;


int deleteAndEarn(vector<int>& nums) {
    if(nums.size() == 1){
        return nums[0];
    }
    
    vector<int> vec(1000,0);
    for(auto i = nums.begin(); i != nums.end(); i++){
       vec[*i] += *i;
    }
    vector<int> ans;
    ans.push_back(vec[0]);
    ans.push_back(vec[1]);
    for(int i = 2 ; i < 1000; i++){
        ans.push_back(max(ans[i-2]+vec[i], ans[i-1]));
    }
    return ans[ans.size()-1];
}