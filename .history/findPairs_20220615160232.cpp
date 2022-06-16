#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



int findPairs(vector<int>& nums, int k) {
    unordered_map<int, int> map_;
    int i = 0;
    for(int i = 0; i < nums.size(); i++){
        if(map_.count(nums[i])){
            i ++;
        }else{
            map_[nums[i]] = abs(k - nums[i]);
        }
    }
    return i;
}