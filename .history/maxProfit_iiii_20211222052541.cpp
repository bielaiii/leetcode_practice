#include<iostream>
#include <vector>
using namespace std;

int maxProfit_iiii(vector<int> &nums){
    //int buy = nums[0];
    vector<int> hold (nums.size(), 0);
    vector<int> nothold (nums.size(), 0);
    vector<int> freeze (nums.size(),0);
    hold[0] = -nums[0];
    nothold[0] = 0;
    freeze[0] = 0;
    for(int i = 1; i < nums.size(); i++){
        hold[i] = max(hold[i-1], nothold[i-1] - nums[i]);
        freeze[i] = hold[i-1] + nums[i];
        nothold[i] = max(freeze[i], nothold[i-1] + nums[i]);
        
    }
    return max(nothold[nothold.size()-1], freeze[freeze.size()-1]);
}
