#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    reverse(cost.begin(), cost.end());
    int i = -1;
    int min_cost = 0;
    cout << "sze:  " << cost.size() << endl;
    while(i < cost.size()){
        i = min(cost[i+1], cost[i+2]);
        cout << i << endl;
        min_cost += cost[i];
        cout << min_cost << endl;
       // cout << "hello" << endl;
    }
    cout << min_cost << endl;

    return min_cost;
}