#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = nums[0];
    int dp = 1;
    int product = 1;
    for(int i = 1; i < nums.size(); i++){
        dp = dp * max(dp, 1);
        product = max(product)
    }
}