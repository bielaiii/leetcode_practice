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
    
    vector<string> vec = {"leet", "code"};
    vector<string> vec1 = {"apple", "pen"};
    vector<string> vec2 = {"a"};
    cout << wordBreak("leetcode", vec);
    cout << wordBreak("applepenapple", vec1);
    cout << wordBreak("a", vec2);

    return 0;
}



