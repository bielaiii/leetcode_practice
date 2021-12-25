#include<iostream>
#include <vector>
using namespace std;

int maxProfit_iii(vector<int> &nums, int fee){
    int buy = nums[0];
    int sell = 0;
    int sum = 0;
    for(int i = 0; i < nums.size() - 1; i++){
        sum += nums[i] + fee <  nums[i+1] ? nums[i+1]-nums[i]-fee : 0;
        cout << sum <<endl;
    }
    return sum;
}