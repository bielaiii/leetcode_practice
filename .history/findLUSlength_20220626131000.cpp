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
    for(int i = 0; i < strs.size() -1 ; i++){
        bool hasSub = 0;
        for(int j = i +1; j < strs.size(); j++){
            if(checkSubStr(strs[i], strs[j])){
                hasSub = 1;
                break;
            }
        }
        //cout << hasSub <<endl;
        if(!hasSub) return strs[i].size();
    }
    return -1;
}