#include<iostream>
#include<vector>
using namespace std;

vector<string> recur(vector<string>& set, string s, int n){
    if(n == s.length()) return set;
    if(s[n] > 64 && s[n] < 91 ){ //capital  
        string temp = s;
        temp[s] = s[n] - 32;
        set.push_back(temp);
    }else if(s[n] >96 && s[n] < 123){
        string temp = s;
        temp[s] = s[n] - 32;
        set.push_back(temp);
    }
    return recur(set, s, n+1);
}

vector<string> letterCasePermutation(string s) {
    vector<string> ret;
    ret = recur(ret, s, 0);
    return ret;
}