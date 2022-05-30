#include<iostream>
#include <vector>
using namespace std;

int maxProfit_ii(vector<int> &nums){
    int buy = nums[0];
    int profit = 0;
    for(int i = 1; i < nums.size(); i++){
        profit = max(profit , nums[i] - buy + profit);
        buy = nums[i]
    }
}