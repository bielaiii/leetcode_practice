#include<iostream>
#include<vector>
using namespace std;

vector<string> recur(vector<string>& set, string s, int n){
    if(n == s.length()) return set;
    string temp = s;
    if(s[n] > 64 && s[n] < 91 ){ //capital  
        
        char c = s[n] - 32;
        temp[n] = c;
        set.push_back(temp);
    }else if(s[n] >96 && s[n] < 123){
       // string temp = s;
        temp[n] = s[n] + 32;
        set.push_back(temp);
    }
    return recur(set, s, n+1);
}

vector<string> letterCasePermutation(string s) {
    vector<string> ret;
    ret = recur(ret, s, 0);
    for(int i =0;i < ret.size(); i++){
        cout << ret[i] << endl;
    }

    return ret;
}