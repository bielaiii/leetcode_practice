#include<iostream>
#include<vector>
#include<map>
#include<stdlib.h>
#include"print_1d_array.cpp"
using namespace std;

int maximumSwap(int num) {
      vector<int> vec;
      map<int, int, greater<int> > mymap;
      int nums = num;
      string strnum = to_string(num);
      for(int i = 0; nums > 0; i++){
            mymap.insert({num% 10, i});
            nums /= 10;
      }
      for(int i = 0; i < strnum.size(); i++){
            if(strnum[i] - '0' != mymap.begin()->first ){
                  char temp = strnum[i];
                  strnum[i] = strnum[mymap.begin()->second];
                  strnum[i] = temp;
            }
      }
      
      return stoi(strnum);
}