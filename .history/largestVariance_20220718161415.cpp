#include<iostream>
#include<vector>
#include<map>
using namespace std;

int largestVariance(string s) {
      int sz = s.length();
      int dp0, dp1;
      int temp_max = 0;
      int ans = 0;
      for(char x = 'a' ; x <= 'z'; x++){
            for(char y = 'a' ; y <= 'z'; y++){
                  if(x == y) continue;
                  dp0 = INT16_MIN;
                  dp1 = INT16_MIN;
                  for(int i = 1; i <= sz; i++){
                        int temp = 0;
                        if(s[i-1] == x){
                              temp ++;
                        }else if(s[i] == y){
                              temp --;
                        }
                        if(temp == -1){
                              dp1 = max(dp0 + temp, temp );
                        }else{
                              dp1 += temp;
                        }
                        dp0 = max(dp0 + temp, temp);
                        temp_max = max(dp1, temp_max);
                  }
                  ans = max(ans, temp_max);
            }
      }
      return ans;
}