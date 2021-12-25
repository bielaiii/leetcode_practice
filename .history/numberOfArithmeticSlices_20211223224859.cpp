#include<iostream>
#include<vector>
using namespace std;

int numberOfArithmeticSlices(vector<int>& nums) {
    vector<int> diffe (nums.size(), 0);
    for(int i = 0; i < nums.size() - 1; i++){
        diffe[i] = nums[i+1] - nums[i];
    }
    int len = 0;
    for(int i = 0; i < diffe.size() - 1; i++){
        if()
    }
}