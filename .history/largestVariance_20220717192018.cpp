#include<iostream>
#include<vector>
#include<map>
using namespace std;

int largestVariance(string s) {
      int sz = s.length();
      int dp0, dp1;
      for(char x = 'a'; x < 'z'; x++){
            for(char y = 'a'; y < 'z'; y++){
                  if(x ==y ) continue;
                  dp0 = INT16_MIN;
                  dp1 = INT16_MIN;
                  int max_ = 0;
                  for(int i = 1; i < sz; i++){
                        int temp = 0;
                        if(s[i - 1] == x){
                              max_ ++;
                        }else if(s[i-1] == y){
                              max_ --;
                        }
                  }
            }
      }
      map<char, int> mp;

}