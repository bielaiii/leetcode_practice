#include<iostream>
#include<vector>
#include<map>
#include<stdlib.h>

using namespace std;

int maximumSwap(int num) {
      vector<int> vec;
      map<int, int> mymap;
      int nums = num;
      string strnum = to_string(num);
      for(int i = 0; nums > 0; i++){
            mymap.insert({num% 10, i});
            nums /= 10;
      }
      
      
      return 1;
}