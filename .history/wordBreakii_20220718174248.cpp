#include<iostream>
#include<vector>
#include<set>
using namespace std;


void dfs_wordBreak(string s, vector<string> & wordDict, int i , vector<string>  path, vector<string> & ans ){
      if(i == s.size()){
            string str = "";
            for(int j = 0; j < path.size(); j++){
                  str += path[j];
                  if(j != path.size() -1) str += " ";
            }
            ans.push_back(str);
      }
      for(int e = i; e < s.size(); e++){
            string tmp = s.substr(i, e - i + 1);
            if()
      }
}     


vector<string> wordBreakii(string s, vector<string>& wordDict) {
      vector<string> ans;
      vector<bool> visited(s.size(), 0);
      set<string> dict;
      for(int i = 0; i < wordDict.size(); i++){
            dict.insert(wordDict[i]);
      }

      return ans;
}