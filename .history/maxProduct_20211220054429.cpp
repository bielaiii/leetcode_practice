#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int max_ = nums[0];
    int dp = 1;
    int product = nums[0];
    for(int i = 1; i < nums.size(); i++){
        dp = nums[i] + max(dp, 0);
        product = max(product, dp);
    }
    cout << product << endl;
    return product;
}