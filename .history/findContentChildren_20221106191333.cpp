#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
      sort(g.begin(), g.end());
      sort(s.begin(), s.end());
      int gptr = 0;
      int sptr = 0;
      int count = 0;
      while(gptr < g.size() && sptr < s.size()){
            if(s[sptr] >= gptr[ptr] ){
                  count ++;
                  sptr ++;
                  gptr ++;
            }else{
                  sptr ++;
            }
      }
      return count;
}