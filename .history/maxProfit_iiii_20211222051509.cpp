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
    for(int i = 1; i < nums.size(); i++){
        
    }
    return nothold[nothold.size()-1];
}
