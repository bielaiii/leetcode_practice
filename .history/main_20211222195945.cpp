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
    vector<string> vec3 = {"a","b"};
    vector<string> vec4 = {"aaaa","aaa"};
    vector<string> vec5 = {"cats","dog","sand","and","cat"};

    cout <<"ans "<< wordBreak("leetcode", vec)<<endl;
    cout <<"ans "<< wordBreak("applepenapple", vec1)<<endl;
    cout <<"ans "<< wordBreak("a", vec2)<<endl;
    cout <<"ans "<< wordBreak("ab", vec3)<<endl;
    cout <<"ans "<< wordBreak("aaaaaaa", vec4)<<endl;
    cout <<"ans "<< wordBreak("catsandog", vec5)<<endl;

    return 0;
}


