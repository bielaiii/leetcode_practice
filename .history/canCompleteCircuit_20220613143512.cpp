#include<iostream>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost){
    int all_gas = 0;
    int all_cost = 0;
    for(auto g : gas) all_gas += g;
    for(auto c : cost) all_cost += c;
    if(all_cost > all_gas) return -1;
    
}