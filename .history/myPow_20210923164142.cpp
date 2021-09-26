#include<iostream>
#include<cmath>
using namespace std;


double recur(double x, int n, double sum){
    cout << sum <<endl;
    if(n >= 0){
        recur(x, n-1, sum *= x);
    }
    return sum;
}

double myPow(double x, int n){
    //cout << "in pow" << endl;
    //return 2;
    if(!n) return 1;
    
     double ret = recur(x,abs(n),1);
     
     cout << "reet: "<< ret<<endl;
    if(n < 0){
        return 1/ret;
    }else{
        return ret;
    }
    
}