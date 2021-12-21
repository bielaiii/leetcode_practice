#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = nums[0];
    int min_ = nums[0];
    int product = nums[0];
    for(int i = 1; i < nums.size(); i++){
        //product = max(product);
        min_  = min(min_ * nums[i], min_);
        max_  = max(max_ * nums[i], max_);
        if(min_ > max_){
            product = max(product, min_);
        }else{
            product = max(product, max_);
        }
        cout <<"producy "<< product << endl;
    }
    return product;
}