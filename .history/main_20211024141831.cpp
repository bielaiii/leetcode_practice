#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
using namespace std;

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
        for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d][f] << " ";
        }
        cout << endl;
    }
    cout << "------------------"<<endl;
}


int main(void){
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << "anser: " << (minCostClimbingStairs( cost) == 6) << endl;
    vector<int> cost1 = {10, 15,20};
    cout <<"anser: " <<  (minCostClimbingStairs( cost1) == 15) << endl;
    vector<int> cost2 = {0,1,2,2};
    cout <<"anser: " <<  (minCostClimbingStairs( cost2) == 2) << endl;
    return 0;
}



