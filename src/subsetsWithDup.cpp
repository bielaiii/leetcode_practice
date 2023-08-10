#include<iostream>
#include<vector>
#include<set>
using namespace std;

void backTracking(vector<int> &nums, set<vector<int>>& ret, vector<int> temp, int i) {
    if (temp.size() == nums.size() - 1) {
        ret.insert(temp);
        return;
    }
    for (int j = i;j < nums.size(); j++) {
        //if (j + 1 < nums.size() && nums[j + 1] == nums[j]) continue;
        temp.push_back(nums[j]);
        ret.insert(temp);
        backTracking(nums, ret, temp, j + 1);
        temp.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    set<vector<int>> ret;
    vector<int> temp;
    ret.insert(vector<int>{});
    ret.insert(nums);

    
    backTracking(nums, ret, temp, 0);
    vector<vector<int>> te(ret.begin(), ret.end());
    //te.push_back({});
    return te;
}