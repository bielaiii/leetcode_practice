#include<iostream>
#include<vector>
#include<set>
using namespace std;


void dfs_wordBreak(string s, vector<string> & wordDict, int i , vector<string>  path, vector<string> & ans , set<string> dict){
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
            if(dict.count(tmp)){
                  path.push_back(tmp);
                  dfs_wordBreak(s, wordDict, e + 1, path, ans, dict);
            }else{
                  continue;
            }
            path.pop_back();

      }
}     


vector<string> wordBreakii(string s, vector<string>& wordDict) {
      vector<string> ans;
      vector<bool> visited(s.size(), 0);
      set<string> dict;
      for(int i = 0; i < wordDict.size(); i++){
            dict.insert(wordDict[i]);
      }
      vector<string> path_;
      dfs_wordBreak(s, wordDict, 0, path_, ans, dict );
      return ans;
}