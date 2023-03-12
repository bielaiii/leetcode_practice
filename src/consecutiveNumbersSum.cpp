#include<iostream>
#include<vector>
using namespace std;

double formua(int n, double a ){
    return (n- a*(a-1)/2);
}

int consecutiveNumbersSum(int n) {
    int ret = 0;
    int i = 1;
    int sum = 0;
    while( n >= i + sum  ){
        if((n - sum) % i == 0 )ret ++;
        sum += i;
        i ++;
        
    }
    return ret;
}