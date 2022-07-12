#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int> &nums){
    vector<int> vec(nums.size() + 1);
    vec[0] = 0;
    vec[1] = nums[1];
    for(int i = 1; i < nums.size(); i++){
        vec[i] = max(vec[i - 1] + nums[i], nums[i]);
    }
    return vec.back();
}