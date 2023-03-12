#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool checkPowersOfThree(int n) {
      int old_k = INT32_MAX;
      if(n <= 1)return 1;
      while(n >= 3){
          if(n % 3 > 1){
              return 0;
          }
        n /= 3;
      } //21 - 9 = 12 - 9 = 3
      return n <= 1 ? 1: 0;
}