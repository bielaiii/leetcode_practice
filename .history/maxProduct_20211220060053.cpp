#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    //int max_ = nums[0];
    int dp = nums[0];
    int product = nums[0];
    for(int i = 1; i < nums.size(); i++){
        dp = nums[i] * max(dp, 1);
        product = max(product, dp);
        cout << product <<endl;
    }
    cout << product << endl;
    return product;
}