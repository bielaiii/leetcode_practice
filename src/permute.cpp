#include<iostream>
#include<vector>
using namespace std;

void backtracking(vector<int>& nums, int i, vector<vector<int>>& all, vector<int> temp, vector<int> visited) {
    if (temp.size() == nums.size()) {
        all.push_back(temp);
        return;
    }
    for (int j = 0; j < nums.size(); j++) {
        if (!visited[j]) {
            visited[j] = 1;
            temp.push_back(nums[j]);
            backtracking(nums, j, all, temp, visited);
            temp.pop_back();
            visited[j] = 0;
        }
    }
}


vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> all;
    vector<int> temp;
    vector<int> visited(nums.size(), 0);
    backtracking(nums, 0, all, temp, visited);
    return all;
}

