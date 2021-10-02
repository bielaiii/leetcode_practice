#include<iostream>
#include<vector>
using namespace std;

void printer1(vector<vector<int>> vec){
    for(int d = 0; d < vec.size(); d++){
        for(int i = 0; i < vec[d].size(); i++){
            cout << vec[d][i] << " ";
        }
        cout <<endl;
    }
}


void dfs(vector<int>& nums,vector<int>& temp, vector<vector<int>>& vec, int i, int size){
    if(nums.size() == size){
        vec.push_back(nums);
        printer1(vec);
        return ;
    }
    for(int d = 0; d < size; d++){
        temp.push_back(nums[d]);
        dfs(nums, temp, vec, (i + 1)%size, size);
        temp.pop_back();
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> vec;
    vector<int> emp;
    dfs(nums, emp, vec, 0, nums.size());
    return vec;
}

