#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = 1;
    int min_ = 1;
    int product = -9999;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0) swap(min_, max_);
        max_ = max(nums[i], max_ * nums[i]);
        min_ = min(nums[i], min_ * nums[i]);
        product = max(product, max_);
    }
    return product;
}