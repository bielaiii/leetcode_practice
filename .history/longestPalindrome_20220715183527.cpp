#include<iostream>
#include<vector>
using namespace std;

string longestPalindrome(string s) {
      vector<int> ans (s.length() + 1, 0);
      s[0] = 0;
      s[1] = 1;
      
}