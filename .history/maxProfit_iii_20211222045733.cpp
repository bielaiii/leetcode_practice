#include<iostream>
#include <vector>
using namespace std;

int maxProfit_iii(vector<int> &nums, int fee){
    //int buy = nums[0];
    vector<int> hold (nums.size(), 0);
    vector<int> nothold (nums.size(), 0);
    hold[0] = -nums[0];
    nothold[0] = 0;
    for(int i = 1; i < nums.size(); i++){
        hold[i] = max(hold[i-1], nothold[i-1] + nums[i]);
        nothold[i] = max(nothold[i-1], hold[i-1] + nums[i] - fee);
    }
    return nothold[nothold.size()-1];
}
