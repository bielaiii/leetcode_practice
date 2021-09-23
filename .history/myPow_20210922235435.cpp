#include<iostream>
#include<cmath>
using namespace std;


double myPow(double x, int n){
    cout << x << endl;
    if(abs(n) > 1){
        myPow(x * x, n -1);
    }else{
        if(n < 0){
            return 1/x;
        }else{
            return x;
        }
    }
    return 0;
}