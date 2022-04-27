#include <iostream>
#include <vector>
using namespace std;

int mySqrt(int x) {
    if(x <= 1) return x;
    int max_ = x / 2;
    int min_ = 1;
    int mid= 0;
    while(max_ > min_){
     mid = min_ + (max_ - min_ + 1) / 2;
     cout << mid << endl;
        if(x / mid < mid){
            max_ = mid - 1;
        }else{
            min_ = mid;
        }
    }
    return mid;
}