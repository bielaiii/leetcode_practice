#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = -999;
    int min_ = 999;
    int product = nums[0];
    for(int i = 0; i < nums.size(); i++){
        product = max(product, max_);
        
        if(nums[i] < 0){
            int temp = max_ * nums[i];
            max_ = min_ * nums[i];
            min_ = temp;
        }else{
            max_ = max(max_ * nums[i], max_);
            min_ = min(min_ * nums[i], min_);
        }
        
        cout << product << endl;
    }
    return product;
}