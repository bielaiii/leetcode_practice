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
    vector<int> vec2 = {1,2,3,4,5,6};
    vector<int> vec1 = {1,2,3,4,5,6};
    string s = "leetcode";
    //sortColors(vec);
    printer(intersection(vec2, vec1));
    //printer(vec);
    return 0;
}



