#include<iostream>
#include<vector>
using namespace std;

int transfer(string s){
    return stoi(s) > 0 && stoi(s) < 27? 1 : 0;
}


int numDecodings(string s){
    vector<int> ans;
    if(s.length() > 1){
        ans[1] = ans[0] +  transfer(s[1]) + transfer(s.substr(0,2));
    }
    for(int i = 0; i < s.length(); i++){

    }
}