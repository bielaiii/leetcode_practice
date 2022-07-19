#include<iostream>
#include<vector>
using namespace std;

string longestPalindrome(string s) {
      vector<vector<int> >  ans (s.length() , vector<int>(s.length(), 0));
      for(int i = 0; i < s.length(); i++) ans[i][i] = 1;
     /*  for(int i = 0; i < s.length(); i++){
            if(ans[i][])
      } */
      return "";
}