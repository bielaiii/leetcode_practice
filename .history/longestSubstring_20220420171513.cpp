#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubstring(string s, int k) {
      int len = 0;
      int left = 0;
      map<char, int> map_;
      left = 0;
      for(int i = 1; i < s.length(); i++){
            if(map_.count(s[i])){
                  map_[s[i]] = map_[s[i]] + 1 ;
            }else{
                  map_[s[]]
            }
      }
      return len;
}