#include<iostream>
#include<vector>
using namespace std;

int maxProfit_iv(vector<int>& prices){
    int buy1 = INT16_MAX;
    int buy2 = prices[0];
    int profit = 0;
    int start = 0;
    for(int i = 0; i < 2; i++){
        for(int j = start; j < prices.size(); j++){
            buy1 = min(buy1, prices[j]);
            start = prices[j] - buy1 + profit > profit ? j : start;
            profit = max(profit, prices[j] - buy1 + profit);
            cout << "buy : "<< buy1 << " i: "<< i << endl;
            cout << "profit "<< profit <<endl;
        }
    }
    return profit;
}