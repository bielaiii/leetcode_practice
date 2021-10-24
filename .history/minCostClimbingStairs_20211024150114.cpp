#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    reverse(cost.begin(), cost.end());
    int i = -1;
    
    
    temp = cost[0] < cost[1] ? 0 : 1;
    int min_cost = cost[temp];
    while(temp < cost.size() - 1){
        temp = cost[temp+1] < cost[temp + 2]? temp + 1 : temp + 2;
       min_cost += cost[temp];
    }
    

    return min_cost;
}