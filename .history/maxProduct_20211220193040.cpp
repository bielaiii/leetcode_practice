#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = -99;
    int min_ = 999;
    int product = nums[0];
    for(int i = 1; i < nums.size(); i++){
        product = max(min_ * nums[i], nums[i] * max_);
        min_  = min(min_ * nums[i], min_);
        max_  = min(max_ * nums[i], max_);
    }
    return product;
}