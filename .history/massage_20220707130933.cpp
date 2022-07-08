#include<iostream>
#include<vector>
using namespace std;


int massage(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    if(nums.size() == 1) return nums[0];
    if(nums.size() == 2) return max(nums[0], nums[1]);
    if(nums.size() == 3) return max(nums[0] +  nums[2], nums[1]);

    vector<int> vec (nums.size());
    nums[0] = max(nums[0],nums[1]);
    nums[1] = max(nums[0],nums[1]);
    for(int i = 3 ; i < nums.size(); i++){
        vec[3]
    }
    return 
}