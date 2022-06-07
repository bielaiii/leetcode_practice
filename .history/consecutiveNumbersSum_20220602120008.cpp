#include<iostream>
#include<vector>
using namespace std;

double formua(int n, int a ){
    return (n- a*(a-1)/2) / a;
}

int consecutiveNumbersSum(int n) {
    int ret = 0;
    int a = 1;
    double fol = 0;
    while(formua(n, a)){
        if((int)(n/a-(a-1)/2) - (n/a-(a-1)/2) == 0) ret ++;
        a ++;
    }
    return ret;
}