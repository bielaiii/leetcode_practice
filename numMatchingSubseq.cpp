#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int numMatchingSubseq(string s, vector<string>& words) {
      int ct = 0;
      unordered_map<int, vector<string> > mp;
      for(auto str : words) mp[str[0] - 'a'].push_back(str);
      for(char c : s){
            vector<string> temp = mp[c - 'a'];
            mp[c-'a'] = {};
            for(auto str : temp){
                  if(str.size() == 1)
                         ct ++;
                  else
                        mp[str[1] - 'a'].push_back(str.substr(1));
            }
      }
      return ct;
}