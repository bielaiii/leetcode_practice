#include<iostream>
#include<vector>
using namespace std;

int numTimesAllBlue(vector<int>& flips) {
      int ct = 0;
      int cur_max = 0; 
      for(int i = 0; i < flips.size(); i++){
            cur_max = max(cur_max, flips[i]);
            if(cur_max == i + 1) ct ++;
      }
      return ct;
}