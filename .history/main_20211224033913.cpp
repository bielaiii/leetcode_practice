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
    cout << "ans: " << numDecodings("12")<<endl;
    cout << "ans: " << numDecodings("226")<<endl;
    cout << "ans: " << numDecodings("10")<<endl;
    cout << "ans: " << numDecodings("2101")<<endl;
    cout << "ans: " << numDecodings("1201234")<<endl;
    cout << "ans: " << numDecodings("10011")<<endl;
    cout << "ans: " << numDecodings("230")<<endl;
    cout << "ans: " << numDecodings("301")<<endl;
   

    return 0;
}



