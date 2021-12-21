#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = nums[0];
    int min_ = nums[0];
    int product = -9999;
    for(int i = 0; i < nums.size(); i++){
        
        max_ = max(max_ * nums[i], max_);
        if(max_ < min_ * nums[i]){
            int temp = max_ * nums[i];
            max_ = min_ * nums[i];
            min_ = temp;
        } 
        min_ = min(min_ * nums[i], min_);
        product = max(product, max_);
        cout <<"!! "<< product << endl;
    }
    return product;
}