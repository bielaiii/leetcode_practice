#include<iostream>
#include<vector>
using namespace std;

int transfer(string s){
    return stoi(s) > 0 && stoi(s) < 27? 1 : 0;
}

int transfer_1(char c){
    return c > '0' &&
}


int numDecodings(string s){
    if(! s[0]) return 0;
    vector<int> ans;
    if(s.length() > 1){
        ans[1] = ans[0] +  transfer(s.substr(1,1)) + transfer(s.substr(0,2));
    }
    for(int i = 0; i < s.length(); i++){

    }
}