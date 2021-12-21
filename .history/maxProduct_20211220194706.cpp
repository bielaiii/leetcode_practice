#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = nums[0];
    int min_ = nums[0];
    int product = nums[0];
    for(int i = 0; i < nums.size(); i++){
        
        if(nums[i] < 0){
            int temp = max_ * nums[i];
            max_ = min_ * nums[i];
            min_ = temp;
        }else{
            max_ = max(max_ * nums[i], max_);
            min_ = min(min_ * nums[i], min_);
        }
        product = max(product, max_);
        cout << product << endl;
    }
    return product;
}