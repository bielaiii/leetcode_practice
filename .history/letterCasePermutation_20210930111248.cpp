#include<iostream>
#include<vector>
using namespace std;

vector<string> recur(vector<string>& set, string s, int n){
    if(s[n] > 64 && s[n] < 91 ){ //capital  
        string temp = s;
        temp[s] = s[n] - 32;
        set.push_back(temp)
    }else if(s[n] >96 && s[n] < 123){
        
    }
}

vector<string> letterCasePermutation(string s) {

}