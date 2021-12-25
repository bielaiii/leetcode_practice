#include <iostream>
#include <vector>
using namespace std;

bool searching(string s, vector<string> dict){
    for(int i = 0; i < dict.size(); i++){
        if(dict[i] == s) return true;
    }
    return false;
}

bool wordBreak(string s, vector<string>& wordDict) {
    vector<int> ans (s.size(), 0);
    ans[0] = 0;
    int last = 0;
    for(int i = 1; i < s.length(); i++){
        if(searching(s.substr(last, i - last), wordDict)){
            last = i + 1;
            ans[i] = 1;
        }
    }
    return ans[ans.size()-1];
}