#include<iostream>
#include<vector>
using namespace std;

double formua(int n, double a ){
    return (n- a*(a-1)/2);
}

int consecutiveNumbersSum(int n) {
    int ret = 0;
    double a = 1;
    double fol = 0;
    while(fol = formua(n, a)){
        if(fol % a == 0) ret ++;
        a ++;
    }
    return ret;
}