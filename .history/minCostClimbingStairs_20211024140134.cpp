#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    int size = cost.size();
    int min_cost_id = cost[0] > cost[1]? 1 : 0;
    int min_cost = cost[min_cost_id];
    int one;
    int two;
    while(min_cost_id <= size - 2 ){
        //if(size - min_cost_id >= 2){
            two = cost[min_cost_id+2];
        //}
        one = cost[min_cost_id+1];
        int smaller_id = cost[one] > cost[two]? min_cost_id + 1 : min_cost_id + 2;
        cout << "small_id "<< smaller_id << endl;
        min_cost_id += smaller_id;
        min_cost += cost[min_cost_id];
    }
    return min_cost;
}