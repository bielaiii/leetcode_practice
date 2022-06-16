#include<iostream>
#include<vector>
using namespace std;

void dfs_findParis(vector<int> const nums, int k, vector<int> temp, vector<vector<int>> &all, vector<bool> visited ){
    if(temp.size() == 2){
        if((temp[0] - temp[1]) == k)
            all.push_back(temp);
    }
    for(int i = 0; i < nums.size(); i++){
        if(! visited[i]){
            visited[i] = 1;
            temp.push_back(nums[i]);
            visited[i] = 0;
        }
    }
}

int findPairs(vector<int>& nums, int k) {
    vector<vector<int>> all;
    vector<bool> visited (nums.size(), false);
    vector<int>  temp;
    dfs_findParis(nums, k , temp, all, visited);
    return all.size();
}