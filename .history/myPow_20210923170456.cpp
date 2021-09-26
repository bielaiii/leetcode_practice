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
    int a = abs(n);
    for(int r =0; r < abs(n); r+=2){
        if(n % 2){ //odd
            x *= x;
        }else{ //even
            x *= x;
        }
    }
    return n < 0? 1/x:x;
}