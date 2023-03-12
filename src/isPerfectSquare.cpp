#include<iostream>
#include<vector>
using namespace std;

bool isPerfectSquare(int num) {
      int l = 1, r = num;
      while(l <= r){
            int mid = l + (r - l) / 2;
            if(num / mid == mid && num % mid == 0){
                  return 1;
            }else if(num / mid > mid){
                    l = mid + 1  ;
            }else{
                  r = mid - 1;
            }
      }
      return 0;
}