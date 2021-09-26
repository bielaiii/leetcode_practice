#include<iostream>
#include<cmath>
using namespace std;


double recur(double x, int n){
    if(n > 1){
        x *= recur(x*x, n-1);
    }
    return 1;
}

double myPow(double x, int n){
    //cout << "in pow" << endl;
    //return 2;
     double ret = recur(x,abs(n));
    if(n < 0){
        return 1/ret;
    }else{
        return ret;
    }
    return 0; 
}