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


int main(void){
    vector<int> num1 = {200,3,140,20,10};
    cout << robb(num1) << endl;
     vector<int> num2 = {1,2,3,1};
    cout << robb(num2) << endl;
    vector<int> num3 = {1,7,9,2};
    cout << robb(num3) << endl;
    //printer(num1);
    return 0;
}



