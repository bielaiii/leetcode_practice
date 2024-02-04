#include <map>
#include <queue>
#include <set>
#include<vector>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

vector<int> distinctDifferenceArray(vector<int>& nums) {
    
    unordered_map<int, queue<int>> mp ;
    for (auto i = 0; i < nums.size(); i++) {
        mp[nums[i]].push(i);
    
    }
    int leftRemain = 0;
    unordered_map<int, queue<int>> left;
    //left[nums[0]].push(0);
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        auto temp = mp[nums[i]].front();
        mp[nums[i]].pop();
        if (mp[nums[i]].size() == 0) {
            mp.erase(mp.find(nums[i]));
        }
        left[nums[i]].push(temp);
        ans.push_back(left.size() - mp.size());
    }
    return ans;
}