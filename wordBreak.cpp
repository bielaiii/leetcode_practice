#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool> dp(s.size(), 0);
    dp[0] = 1;
    unordered_set<string> st(wordDict.begin(), wordDict.end());
    for(int i = 1; i <= s.size(); i++){
        for(int j = 0; j < i; j++){
            string temp = s.substr(j, i - j);
            if(dp[j] && st.find(temp) == st.end() ){
                dp[i] = 1;
            }
        }
    }
    return dp.back();
}