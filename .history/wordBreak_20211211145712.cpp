#include <iostream>
#include <vector>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {
    int i = 0;
    int len = s.length();
    bool flag = 1;
    while(i < s.length() - 1){
        for(auto w = wordDict.begin() ;w != wordDict.end(); w ++){
            if(s.substr(i, (*w).length()) == *w){
                flag = 1;
                i += (*w).length();
                break;
            }
        }
        if(! flag) return false;
        flag = 0;
    }
    return true;
}