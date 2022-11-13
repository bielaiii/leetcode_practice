#include<iostream>
#include<vector>
using namespace std;

int numTimesAllBlue(vector<int>& flips) {
      int ct = 0;
      int ret; 
      for(int n : flips){
            ct ++;
            if(n <= ct){
                  ret ++;
            }
      }
      return ret;
}