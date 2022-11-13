#include<iostream>
#include<vector>
using namespace std;

int numTimesAllBlue(vector<int>& flips) {
      vector<int> vec(flips.size() + 1, 0);
      vector<int> record (flips.size() + 1, 0);
      int left =flips[0], right = flips[0];
      int ct = 0 ;
      for(int i : flips){
            record[i] = 1;
            while(left >= 1 && record[left]) left --;
            while(right < flips.size() + 1 && record[right]) right ++;
            if(left == 1 && right == i){
                  ct ++;
            }
      }
      return ct;
}