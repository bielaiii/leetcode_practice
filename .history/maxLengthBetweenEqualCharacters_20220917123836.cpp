#include<iostream>
#include<vector>
using namespace std;

int maxLengthBetweenEqualCharacters(string s) {
      int ans = 0;
      for(int i = 0; i < s.size(); i++){
            for(int j = s.size() - 1; j > i; j--){
                  if(s[i] == s[j]) ans = max(ans, j - i -1);
            }
      }
      return ans;
}