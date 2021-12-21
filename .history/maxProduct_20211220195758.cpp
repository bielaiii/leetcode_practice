#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = nums[0];
    int min_ = nums[0];
    int product = -9999;
    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[0] < 0) swap(min_, max_);
        max_ = max(max_, max_ * nums[i]);
        min_ = min(min_, min_ * nums[i]);
        product = max(product, max_);
    }
    return product;
}