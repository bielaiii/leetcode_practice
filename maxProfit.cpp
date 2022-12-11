#include<iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &nums){
    if(nums.size() <= 1) return 0;
    int profit = 0;
    int minbuy = INT32_MAX;
    int maxsell = 0;
    for(int i = 0 ; i < nums.size(); i++){
       profit = max(profit, nums[i] - minbuy);
       minbuy = min(minbuy, nums[i]);
        
    }
    return profit;
}