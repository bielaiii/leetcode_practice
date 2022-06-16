#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;



int findPairs(vector<int>& nums, int k) {
    unordered_set<int> set_;
    unordered_map<int,  int> map_;
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        cout << abs(k - nums[i])  <<endl;
        if(set_.count(abs(k - nums[i]))){
            if(nums[i] < abs(k - nums[i])){
                map_[nums[i]] = abs(k - nums[i]);
            }else{
                map_[abs(k - nums[i])] = nums[i];
            }
        }
        set_.emplace(nums[i]);
    }
    for(auto c : map_){
        cout << c.first << " " << c.second <<endl;
    }
    return map_.size();
}