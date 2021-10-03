#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    for(int c = 0; c < nums.size(); c++){
        for(int r = c; r < nums.size(); r++){
            if(nums[r] == nums[c]) break;
            return nums[c];
        }
    }
    return 0;
}