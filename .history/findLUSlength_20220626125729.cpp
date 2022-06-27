#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool checkSubStr(const string  &a, const string  &b){
    int j = 0;
    for(int i = 0 ; i < a.size(); i++){
        if(a[i] == b[j]) j++;
    }
    return j == b.size();
}

int findLUSlength(vector<string>& strs) {
    vector<vector<int>> vec;
    sort(strs.begin(), strs.end(), [](string a, string b){
        return a.size() > b.size();
    });
    for(int i = 0; i < strs.size() ; i++){
        for(int j = i +1; j < strs.size(); j++){
            if(checkSubStr(strs[i], strs[j]) && )
        }
    }
}