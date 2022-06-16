#include<iostream>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost){
    int start = 0;
    int remain = 0;
    for(int i = 0; i < gas.size(); i++){
        remain += (gas[(start + i) % gas.size()] - cost[(start + i) % gas.size()]);

        if(remain < 0){
            start ++;
            //remain = 0;
        }
    }
    
    return remain >= 0? start : -1;
}