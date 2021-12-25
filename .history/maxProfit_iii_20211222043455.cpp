#include<iostream>
#include <vector>
using namespace std;

int maxProfit_iii(vector<int> &nums, int fee){
    //int buy = nums[0];
    vector<int> sell (nums.size(), 0);
    vector<int> buy (nums.size(), 0);
    int sum = 0;
    int price = nums[0];
    for(int i = 1; i < nums.size() ; i++){
        sell[i] = max(sell[i-1], nums[i] - buy - fee);

        }
    return sell;
}
