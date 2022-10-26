#include <iostream>
#include <vector>
using namespace std;
int mySqrt(int x) {
    int left = 0 , right = x / 2;
    while(left <= right){
        int mid = left / 2 + right / 2;
        if(mid * mid == x){
            return mid;
        }else if(mid * mid < x ){
            left = mid + 1;
        }else if(mid * mid > x){
            right = mid - 1;
        }
    }
    return left;
}