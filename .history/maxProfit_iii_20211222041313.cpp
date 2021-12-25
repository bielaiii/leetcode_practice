#include<iostream>
#include <vector>
using namespace std;

int maxProfit_iii(vector<int> &nums, int fee){
    int buy = nums[0];
    int sell = 0;
    for(int i = 0; i < nums.size() - 1; i++){
        sell += nums[i] + fee < nums[i+1] ? nums[i+1] - nums[i] - fee : 0; 
    }
    return sell;
}
