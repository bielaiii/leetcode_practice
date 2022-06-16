#include<iostream>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost){
    int start = 0;
    int remain = 0;
    int accu = 0;
    for(int i = 0; i < gas.size(); i++){
        remain += (gas[i] - cost[i]);
        accu += (gas[i] - cost[i]);
        if(accu < 0){
            start = i + 1;
            accu = 0;
            //remain = 0;
        }
    }
    
    return remain >= 0? start : -1;
}