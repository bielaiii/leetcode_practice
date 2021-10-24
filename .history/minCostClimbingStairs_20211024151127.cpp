#include<iostream>
#include<vector>
using namespace std;


    int minCostClimbingStairs(vector<int>& cost) {
        reverse(cost.begin(), cost.end());
        int i =  0;
        while( i < cost.size()){
            int temp = cost[i] < cost[i+1]? i : i + 1;
            cost[i] = cost[temp] ;
            
        }
        for(auto i = cost.begin(); i != cost.end(); i++){
            cout << *i <<" ";
        }
        cout << endl;
        return cost[i];
    }