#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    reverse(cost.begin(), cost.end());
    int i = -1;
    int min_cost = 0;
    while(i < cost.size()){
        i = min(cost[i+1], cost[i+2]);
        min_cost += cost[i];
    }
    return min_cost;
}