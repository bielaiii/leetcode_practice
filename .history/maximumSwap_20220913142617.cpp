#include<iostream>
#include<vector>
#include<map>
#include<stdlib.h>
#include"print_1d_array.cpp"
using namespace std;

int maximumSwap(int num) {
      vector<int> vec;
      string strnum = to_string(num);
      for(int i = 0; i < strnum.size(); i++){
            char tmp = strnum[i];
            int j = i +1;
            for(; j < strnum.size(); j++){
                  if(strnum[j] > tmp) tmp = strnum[j];
            }
            if(tmp != strnum[i]){
                  
                  strnum[j] = strnum[i];
                  strnum[i] = tmp;
                  break;
            }
      }
      
      return stoi(strnum);
}