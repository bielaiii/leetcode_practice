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


void backtrack(vector<int>& nums, vector<vector<int>>& vec, vector<int>&arr, vector<int>& one_time){
   if(one_time.size() == nums.size()){
       vec.push_back(one_time);
       return ;
   }
   for(int e =0; e < nums.size(); e++){
       if(!arr[e]){
           arr[e] = 1;
           one_time.push_back(nums[e]);
           backtrack(nums, vec, arr, one_time);
           arr[e]=0;
           one_time.pop_back();
       }
   }
}

vector<vector<int>> permute(vector<int>& nums) {
   // int arr[nums.size()] = {0};
    vector<vector<int>> vec;
    vector<int> emp;
    vector<int> one_time;
    vector<int> arr (nums.size(), 0);
    backtrack(nums,vec, arr, one_time);
    return vec;
}

