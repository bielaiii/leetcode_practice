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
   cout << minCostClimbingStairs(vector<int>& cost) << endl;
    
    return 0;
}



