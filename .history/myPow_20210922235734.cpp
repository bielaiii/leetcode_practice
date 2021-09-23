#include<iostream>
#include<cmath>
using namespace std;


double recur(double x, int n){
    if(n > 1){
        recur(x*x, n-1);
    }
    return x;
}

double myPow(double x, int n){
    int ret = recur(x,abs(n));
    if(n < 0){
        return 1/ret;
    }else{
        return ret;
    }
    return 0;
}