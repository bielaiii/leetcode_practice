#include <iostream>
#include <vector>
using namespace std;
int mySqrt(int x) {
    if(x <= 1) return x;
    double tol = 0.000001;
    double sqrt = x;
    while(true){
        double cur = (sqrt + x / sqrt)/2;
        if(cur == sqrt ){
            break;
        }
        sqrt = cur;
    }
    return (int)sqrt;
}