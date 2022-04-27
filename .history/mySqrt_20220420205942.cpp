#include <iostream>
#include <vector>
using namespace std;

int mySqrt(int x) {
   if(x <= 1) return x;
   int min_ = 1;
   int max_ = x;
   while(max_ - min_ > 1){
       int n = ( max_ + min_ ) / 2;
       if(x / n < n){
           max_ = n;
       }else{
           min_ = n;
       }
   }
   return min_;
}