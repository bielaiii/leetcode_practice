#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    int size = cost.size();
    int min_cost_id = cost[0] > cost[1]? 1 : 0;
    int min_cost = cost[min_cost_id];
   // cout << endl;
    //cout << "start " << min_cost << endl;
    if(cost.size() == 3){
        return cost[1] > cost[2]? cost[2] : cost[1];
    }
    int one;
    int two;
    while(min_cost_id < size ){
        //if(size - min_cost_id >= 2){
            two = cost[min_cost_id+2];
        //}
        one = cost[min_cost_id+1];
        if(two == cost[cost.size()-2] ){
            return min_cost += two;
        }
        int smaller_id = two <= one ? min_cost_id + 2 : min_cost_id + 1;
        cout << "small_id "<< min_cost << endl;
        min_cost_id = smaller_id;
        min_cost += cost[min_cost_id];
    }
    return min_cost;
}