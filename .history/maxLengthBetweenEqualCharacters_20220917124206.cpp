#include<iostream>
#include<vector>
using namespace std;

int maxLengthBetweenEqualCharacters(string s) {
      int ans = -1;
      vector<int> vec(26, -1);
      for(int i = 0; i < s.size(); i++){
            if(vec[s[i] - 'a'] == -1){
                  vec[s[i]-'a'] = i;
            }else{
                  ans = max(ans, i - vec[s[i] - 'a']);
            }
      }
      return ans;
}