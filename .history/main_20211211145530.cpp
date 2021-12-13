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
    //s = "leetcode", wordDict = ["leet", "code"]
    vector<string> vec = {"leet", "code"};
    string s = "leetcode";
    //sortColors(vec);
    wordBreak(s, vec);
    printer(vec);
    return 0;
}



