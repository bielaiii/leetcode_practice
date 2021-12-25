#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


bool wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> set_;
    for(int i = 0; i < wordDict.size(); i++){
        set_.insert(wordDict[i]);
    }
    vector<int> ans(s.size() +1, 0);
    ans[0] = 1;
    for(int i = 1; i <= s.size(); i++){
        for(int j = 0; j < i; j++){
            if(ans[j] && set_.find(s.substr(j, i-j)) != set_.end()){
                ans[i] = 1;
                break;
            }
        }
    }
    return ans[s.size()];
}