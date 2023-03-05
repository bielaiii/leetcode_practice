#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void dfs(int l, int r, string str, unordered_set<string> & vt){
      if(l == 0 && r == 0) {
            vt.insert(str);
            return;
      }
      if(l > 0){
            dfs(l-1, r, str + "(", vt);
      }
      if(r > l){
            dfs(l, r- 1, str + ")", vt);
      }
}


vector<string> generateParenthesis(int n) {
      unordered_set<string> vt;
      string str = "";
      dfs(n, n, str, vt);
      vector<string> ans;
      for(auto s : vt){
            ans.push_back(s);
      }
      return ans;
}