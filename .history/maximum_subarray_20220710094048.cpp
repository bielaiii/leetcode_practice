#include<iostream>
#include<vector>
using namespace std;

int maximum_subarray(vector<int> &nums){
    if(nums.size() == 1) return nums[0];
    vector<int> vec(nums.size() + 1);
    vec[0] = 0;
    int maxm = INT16_MIN;
    vec[1] = nums[0];
    for(int i = 1; i < nums.size(); i++){
        vec[i + 1] = max(vec[i] + nums[i], nums[i]);
        maxm = max(maxm, vec[i+1]);
    }
    return maxm;
}