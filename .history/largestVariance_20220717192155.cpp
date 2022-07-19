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
                              temp ++;
                        }else if(s[i-1] == y){
                              temp --;
                        }
                        if(temp == -1){
                              dp1 = max(dp1 + temp, temp);
                        }else{
                              dp1 += temp;
                        }
                        dp0 = max(dp0 + temp, temp);
                        dp1 = max(dp1, )
                  }
            }
      }
      map<char, int> mp;

}