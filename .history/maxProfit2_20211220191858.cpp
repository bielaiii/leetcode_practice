#include<iostream>
#include <vector>
using namespace std;

int maxProfit_ii(vector<int> &nums){
    int buy = nums[0];
    int sell = 0;
    for(int i = 0; i < nums.size() - 1; i++){
        sell = max(nums[i], nums[i+1]);
    }
    return sell;
}