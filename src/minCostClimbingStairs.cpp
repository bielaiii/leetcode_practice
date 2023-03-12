#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    vector<int> vec(cost.size(), 0);
    vec[0] = cost[0];
    vec[1] = cost[1];
    int i = 2;
    for(; i < cost.size(); i++){
        vec[i] = cost[i] +  min(vec[i-2], vec[i-1]);
    }
    return min(vec.back(), vec[vec.size() - 2]);
}