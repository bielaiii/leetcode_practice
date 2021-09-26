#include<iostream>
#include<cmath>
using namespace std;


double recur(double x, int n, double sum){
    if(n == 0){
        return 1;
    }
    return x * (recur(x, n-1, sum*= x));
}

double myPow(double x, int n){
    //cout << "in pow" << endl;
    //return 2;
    long t = x;
    if(!n) return 1;
    double ret = recur(t,abs(n),t);
    if(n < 0){
        return 1/ret;
    }else{
        return ret;
    }
}