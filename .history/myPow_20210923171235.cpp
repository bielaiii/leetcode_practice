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
    double t = 1.0;
    double sum = x;
    for(int r = abs(n); r > 0; r /= 2){
        if(r % 2){
            t *= sum;
        }
        sum *= sum;
    }
    return n < 0? 1/sum:sum;
}