#include<iostream>
#include<vector>
#include<map>
#include<stdlib.h>
#include"print_1d_array.cpp"
using namespace std;

int maximumSwap(int num) {
      vector<int> vec;
      string strnum = to_string(num);
      string sorted = strnum;
      sort(sorted.begin(), sorted.end() , [](char a, char b){
            return a > b;
      });
      for(int i = 0 ; i < strnum.size(); i++){
            if(strnum[i] != sorted[i]){
                  char tmp = strnum[i];
                  strnum[i] = sorted[i];
                  sorted[i] = tmp;
                  break;
            }
      }
      
      return stoi(strnum);
}