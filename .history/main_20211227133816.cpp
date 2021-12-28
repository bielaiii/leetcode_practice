#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
using namespace std;

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}

template<typename T>
void printer2(T toprint){
    for(int e = 0;e < toprint.size(); e++){
        for(int d =0; d < toprint[e].size(); d++){
            cout << toprint[e][d] << " ";
        }
        cout << endl;
    }
    
        cout << endl;
}


int main(void){
    
    vector<vector<int>> test1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans1 = matrixBlockSum(test1, 1);
    vector<vector<int>> ans2 = matrixBlockSum(test1, 2);
    printer2(ans1);
    printer2(ans2);
    return 0;
}



