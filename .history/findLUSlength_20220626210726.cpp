#include<iostream>
#include<vector>
#include<algorithm>
#include"header.h"
using namespace std;

bool IsSub(const string& a, const string& b)
    {
        int i = 0;
        int j = 0;
        for (; i < a.size() && j < b.size(); ++j)
        {
            if (a[i] == b[j])
            {
                ++i;
            }
        }
        // a里每一个都在b里找到了
        return i == a.size();
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
