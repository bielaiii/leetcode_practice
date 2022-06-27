#include<iostream>
#include<vector>
#include<algorithm>
#include"header.h"
using namespace std;

bool checkSubStr(const string  &a, const string  &b){
    int j = 0;
    for(int i = 0 ; i < b.size(); i++){
        if(b[i] == a[j]) j++;
    }
    return j == a.size();
}

int findLUSlength(vector<string>& strs) {
    vector<vector<int>> vec;
    sort(strs.begin(), strs.end(), [](string a, string b){
        return a.size() > b.size();
    });
   // for(auto s : strs) cout << s << endl;
    for(int i = 0; i < strs.size(); i++){
        bool hasSub = 0;
        int j = 0;
        for(; j < strs.size() ; j++){
            if( i != j && checkSubStr(strs[i], strs[j])){
                hasSub = 1;
                break;
            }
        }
        //cout << hasSub <<endl;
        if(j == strs[i].size()) return strs[i].size(); 
    }
    return -1;
}
