#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    cost.insert(cost.begin(), 0);
    cost.insert(cost.end(), 0);
    int min_cost = 0;
    int id = 0;
    while(id < cost.size()){
        min_cost += min(cost[id+1], min_cost[id+2]);
        id += min(cost[id+1], min_cost[id+2]);
        
    }
    return min_cost;
}