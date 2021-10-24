#include<iostream>
#include<vector>
using namespace std;


    int minCostClimbingStairs(vector<int>& cost) {
        reverse(cost.begin(), cost.end());
        int i =  0;
        while( i < cost.size()){
            cost[i] = min(cost[i], cost[i+1]);
        }
        for(auot i = cost.begin(); i != cost.end(); i++){
            cout << i <<" ";
        }
        cout << endl;
        return cost[i];
    }