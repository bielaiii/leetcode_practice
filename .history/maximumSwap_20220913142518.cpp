#include<iostream>
#include<vector>
#include<map>
#include<stdlib.h>

using namespace std;

int maximumSwap(int num) {
      vector<int> vec;
      string strnum = to_string(num);
      for(int i = 0; i < strnum.size(); i++){
            char tmp = strnum[i];
            for(int j = i + 1; j < strnum.size(); j++){
                  if(strnum[j] > tmp) tmp = strnum[j];
            }
            if(tmp != strnum[i]){
                  strnum[i] = tmp;
                  break;
            }
      }
      
      return stoi(strnum);
}