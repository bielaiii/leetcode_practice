#include <iostream>
#include<vector>
using namespace std;

int getMaxLen(vector<int>& nums) {
    int len = 0;
    int product_ = -999;
    for(int i = 0; i <nums.size(); i++){
        product_ = max(product_, product_ * nums[i]);
    }
}