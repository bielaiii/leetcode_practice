#include<iostream>
#include<vector>
using namespace std;

double formua(int n, double a ){
    return (n- a*(a-1)/2);
}

int consecutiveNumbersSum(int n) {
    int ret = 1;
    int i = 2;
    int sum = 1;
    while( n >= i + sum  ){
        if((n - sum) % i == 0 )ret ++;
        i ++;;
        sum += i;;
    }
    return ret;
}