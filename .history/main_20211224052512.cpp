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
    
    
    vector<int> test1 {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> test2 {4,2,0,3,2,5};
    cout << trap(test1)<<endl;
    cout << trap(test2)<<endl;
   

    return 0;
}



