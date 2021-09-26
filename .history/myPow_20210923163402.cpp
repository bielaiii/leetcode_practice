#include<iostream>
#include<cmath>
using namespace std;


double recur(double x, int n){
    cout << x <<endl;
    if(n > 1){
        return x *= recur(x*x, n-1);
    }
    return 1;
}

double myPow(double x, int n){
    //cout << "in pow" << endl;
    //return 2;
     double ret = recur(x,abs(n));
     cout << "reet: "<< ret<<endl;
    if(n < 0){
        return 1/ret;
    }else{
        return ret;
    }
    return 0; 
}