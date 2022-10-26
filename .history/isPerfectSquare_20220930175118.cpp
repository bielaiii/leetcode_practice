#include<iostream>
#include<vector>
using namespace std;

bool isPerfectSquare(int num) {
      int l = 0, r = num / 2; 
      while(l < r){
            int mid = l + (r - l) / 2;
            if(num / mid == mid){
                  return 1;
            }else if(num / mid > mid){
                  l = mid + 1;
            }else if(num / mid < mid){
                  r = mid - 1;
            }
      }
      return 0;
}