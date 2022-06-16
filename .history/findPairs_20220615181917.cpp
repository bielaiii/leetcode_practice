#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;



int findPairs(vector<int>& nums, int k) {
    unordered_set<int> set_;
    unordered_map<int,int> map_;
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(set_.count(abs(nums[i] - k))){
            map_[nums[i]] = abs(k - nums[i] );
        }
            j ++;
        set_.emplace(nums[i]);
    }
    return map_.size();
}