#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;



int findPairs(vector<int>& nums, int k) {
    unordered_set<int> set_;
    unordered_set< int> set1;
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(set_.count(abs(nums[i] - k))){
            set1.insert(nums[i]);
            set1.insert(abs(k  - nums[i]));
        }
        set_.emplace(nums[i]);
    }
    return set_.size() / 2;
}