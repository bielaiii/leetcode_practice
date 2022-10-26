#include<iostream>
#include<vector>
using namespace std;

bool isPerfectSquare(int num) {
      int l = 0, r = num ;
      if(num == 1) return 1;
      while(l <= r){
            int mid = l + (r - l) / 2;
            long temp = mid * mid;
            if(temp < mid) r = mid - 1;
            else if(temp > mid) l = mid + 1;
            else return 1;
      }
      return 0;
}