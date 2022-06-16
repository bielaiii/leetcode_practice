#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;



int findPairs(vector<int>& nums, int k) {
    unordered_set<int> set_;
    int i = 0;
    for(int i = 0; i < nums.size(); i++){
        if(set_.count(abs(nums[i] - k))){
            i ++;
        }
        set_.emplace(nums[i]);
    }
    return i;
}