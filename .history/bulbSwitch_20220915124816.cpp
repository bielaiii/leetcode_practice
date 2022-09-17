#include<iostream>
#include<vector>
using namespace std;

int bulbSwitch(int n) {
      int ct = 0;
      vector<bool> vec(n ,0);
      for(int i = 0; i < n; i){
            if(i  == 0){
                  for(int j = 0; j < n; j++) vec[j] = 1;
            }else if(i == 1){
                  for(int j = 1; j < n; j+= 2){
                        vec[j] = 0;
                  }
            }else if(i == 2){
                  for(int j = 2; j < n; j+= 3){
                        vec[j] = 1 - vec[j];
                  }
            }else{
                  vec[i] = 1 - vec[i];
            }
      }
      for(auto c : vec){
            if(c ) ct ++;
      }
      return ct;
}