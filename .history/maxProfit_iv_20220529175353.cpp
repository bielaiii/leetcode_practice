#include<iostream>
#include<vector>
using namespace std;

int maxProfit_iv(vector<int>& prices){
    int buy1 = INT16_MAX;
    int buy2 = prices[0];
    int profit = 0;
    int start = 0;
    for(int i = 0; i < 2; i++){
        for(int j = start; start < prices.size(); j++){
            buy1 = min(buy1, prices[j]);
            profit = max(profit, prices[j] - buy1 + profit);
            start = prices[]
        }
    }
}