#include<iostream>
#include<vector>
using namespace std;

int guess(int n){
      return -1;
}

int guessNumber(int n) {
      int l = 1, r = n;
      while(l < r){
      int mid = l + (r - l ) / 2;
      int ret = guess(mid);
      if( ret == 0){
            return mid;
      }else if(ret == -1){
            r = mid + 1;
      }else if(ret == 1){
            l = mid - 1;
      }
      }
      return r;
}