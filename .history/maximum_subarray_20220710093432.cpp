#include<iostream>
#include<vector>
using namespace std;

int maximum_subarray(vector<int> &nums){
    vector<int> vec(nums.size() + 1);
    vec[0] = 0;
    vec[1] = nums[0];
    for(int i = 1; i < nums.size(); i++){
        vec[i + 1] = max(vec[i] + nums[i], nums[i]);
    }
    return vec.back();
}