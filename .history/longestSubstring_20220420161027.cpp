#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubstring(string s, int k) {
      int len = 0;
      int left = 0;
      map<char, int> map_;
      for(int i = 0; i < s.length(); i++){
            string temp = s.substr(i, k);
            for(int j = 0; j < temp.size(); j++){
                  if(map_.count(temp[j]))
            }
      }
      return len;
}