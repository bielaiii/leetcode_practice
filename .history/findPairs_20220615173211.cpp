#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



int findPairs(vector<int>& nums, int k) {
    unordered_map<int, int> map_;
    int i = 0;
    for(int i = 0; i < nums.size(); i++){
        if(map_.count(nums[i]) ){
            map_[nums[i]] == abs(k - nums[i]);
        }else if(map_.count(abs(k - nums[i])) && map_[nums[i]] == -1){
            map_[abs(nums[i] - k)] == abs(k - nums[i]);
        }
        else{
            map_[nums[i]] = -1;
        }
    }
    return map_.size();
}