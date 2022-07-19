#include<iostream>
#include<vector>
using namespace std;

int countSubstrings(string s) {
      vector<vector<int> > ans(s.length(), vector<int>(s.length(), 0));
      for(int i = 0; i <s.length(); i++) ans[i][i] = 1;
      
}