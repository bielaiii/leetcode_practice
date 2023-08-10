#include<cstdio>
#include<iostream>
#include<vector>
#include<unordered_set>
#include<set>
using namespace std;

void backtracking(int l, int r, string str, set<string>& vt, int n){
      if (r > l) {
            return;
      }
      if (l == r && str.length() == 2 * n){
            vt.insert(str);
            return;
      }
      if (l + r > 2 * n) {
            return;
      }
      
      if (l < n)
            backtracking(l + 1, r, str + "(", vt, n);
      if (r < l)
            backtracking(l, r + 1, str + ")", vt, n);
      
}

vector<string> generateParenthesis(int n) {
      set<string> vt;
      string str = "";
      backtracking(0, 0, str, vt, n);
      vector<string> st(vt.begin(), vt.end());
      return st;
}