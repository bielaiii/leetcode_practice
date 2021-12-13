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
    vector<int> vec2 = {1,2,2,1};
    vector<int> vec1 = {2,2};
    string s = "leetcode";
    string s = "AAAAAAAAAAAAA";
    //sortColors(vec);
    printer(findRepeatedDnaSequences(s));
    printer(intersection(vec2, vec1));
    //printer(vec);
    return 0;
}



