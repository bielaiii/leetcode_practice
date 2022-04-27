#include <iostream>
#include <vector>
using namespace std;

int mySqrt(int x) {
    if(x <= 1) return x;
    int max_ = x;
    int min_ = 1;
    int mid;
    while(max_ > min_){
     mid = (max_ - min_) / 2;
        if(x / mid < mid){
            max_ = mid;
        }else{
            min_ = mid;
        }
    }
    return mid;
}