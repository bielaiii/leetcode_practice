#include<iostream>
using namespace std;

int arrangeCoins(int n) {
      int l = 1, r = n;
      while(l <= r){
            int mid = l + (r - l ) /2;
            long long sum = (1 + mid) * (long long)mid / 2 ;
            if(sum == n){
                  return mid;
            }else if(sum < n){
                  l = mid + 1 ;
            }else{
                  r = mid - 1;
            }
      }
      return l - 1;
}