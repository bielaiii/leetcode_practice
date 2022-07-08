#include<iostream>
#include<vector>
using namespace std;

int massage(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    if(nums.size() == 1) return nums[0];
    if(nums.size() == 2) return max(nums[0], nums[1]);
    if(nums.size() == 3) return max(nums[0] +  nums[2], nums[1]);

    vector<int> vec (nums.size());
    vec[0] = nums[0];
    vec[1] = max(nums[0],nums[1]);
    vec[2] = max(nums[1],nums[0] + nums[2]);
    for(int i = 3 ; i < nums.size(); i++){
        vec[i] = nums[i] + max(vec[i-2], vec[i-3]);
    }
    return max(vec.back(), vec[vec.size() - 2]);
}