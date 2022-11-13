#include<iostream>
#include<vector>
using namespace std;

int numTimesAllBlue(vector<int>& flips) {
      vector<int> vec(flips.size(), 0);
      vector<int> record (flips.size(), 0);
      int left =flips[0], right = flips[0];
      int ct = 0 ;
      for(int i : flips){
            record[i] = 1;
            while(left >= 0 && record[left]) left --;
            while(right >= flips.size() && record[right]) right ++;
      }
}