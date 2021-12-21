#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = 1;
    int min_ = 1;
    int product = nums[0];
    for(int i = 0; i < nums.size(); i++){
        product = max(product, max_);
        max_ = max(max_ * nums[i], max_);
        if(max_ < min_ * nums[i]) max_ = min_ * nums[i];
        min_ = min(min_ * nums[i], min_);
        cout << product << endl;
    }
    return product;
}