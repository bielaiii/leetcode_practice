#include<iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &nums){
    int buy = nums[0];
    int sell = nums[0];
    for(int i = 0; i < nums.size(); i++){
        sell = max(sell, sell - buy);
        buy = min(buy, nums[0]);
    }
    return sell;
}