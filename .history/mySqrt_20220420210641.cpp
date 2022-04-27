#include <iostream>
#include <vector>
using namespace std;

int mySqrt(int x) {
    if(x <= 1) return x;
    int max_ = x;
    int min_ = 1;
    while(max_ > min_){
        int mid = (max_ - min_) / 2;
        if(x / mid > mid){
            min_ = mid;
        }else{
            max_ = mid;
        }
    }
}