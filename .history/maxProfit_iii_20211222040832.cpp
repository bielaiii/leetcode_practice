#include<iostream>
#include <vector>
using namespace std;

int maxProfit_iii(vector<int> &nums, int fee){
    int buy = nums[0];
    int sell = -nums[0]-fee;
    for(int i = 0; i < nums.size(); i++){
        sell = max(sell, nums[i] - buy-fee);
        buy = min(buy, nums[i]);
 //       cout << sell <<endl;
        cout << sell <<endl;
    }
    return sell;
}
