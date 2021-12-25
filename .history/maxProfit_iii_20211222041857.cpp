#include<iostream>
#include <vector>
using namespace std;

int maxProfit_iii(vector<int> &nums, int fee){
    int buy = nums[0];
    int sell = 0;
    for(int i = 0; i < nums.size() ; i++){
        sell = max(sell, nums[i] - buy - fee);
        buy = min (buy, nums[i]);
        cout <<nums[i] << " " << sell << endl; 
    }
    return sell;
}
