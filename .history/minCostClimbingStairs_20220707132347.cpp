#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    int ans = cost[0] < cost[1] ? cost[0] : cost[1];
    int start = cost[0] < cost[1] ? 0 : 1;
    
    while(start < cost.size()){
        if(cost[start +1] < cost[start + 2]){
            ans += cost[start + 1];
            start ++;
        }else{
            ans += cost[start + 2];
            start += 2;
        }
    }
    return ans;
}