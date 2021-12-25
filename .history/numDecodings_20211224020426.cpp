#include<iostream>
#include<vector>
using namespace std;

int transfer(string s){
    return stoi(s) > 0 && stoi(s) < 27? 1 : 0;
}


int numDecodings(string s){
    if(s[0] == '0') return 0;
    if(s.length() == 1) return 1;
    vector<int> vec (s.length() + 1, 0);
    if(s[0] != '0') vec[0] = 1;
    if(s.length() > 1 && s[0] != '0' && stoi(s.substr(0,2)) > 0 && stoi(s.substr(0,2)) < 27){
        vec[1] = 1;
    }
    for(int i = 2; i < s.length(); i++){
        
    }
}