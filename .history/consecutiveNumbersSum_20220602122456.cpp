#include<iostream>
#include<vector>
using namespace std;

double formua(int n, double a ){
    return (n- a*(a-1)/2);
}

int consecutiveNumbersSum(int n) {
    int ret = 0;
    int i = 1;
    int count = 1;
    while( count < n / 2){
        if(n % count == i )ret ++;
        i ++;;
        count ++;
    }
    return ret;
}


ak + (0+k-1)/2*k