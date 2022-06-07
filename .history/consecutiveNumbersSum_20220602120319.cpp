#include<iostream>
#include<vector>
using namespace std;

double formua(int n, double a ){
    return (n- a*(a-1)/2);
}

int consecutiveNumbersSum(int n) {
    int ret = 0;
    int a = 1;
    double fol = 0;
    while(fol = formua(n, a)){
       // if(fol % a == 0) ret ++;
       if(fol != int(fol)) ret ++;
        a ++;
    }
    return ret;
}