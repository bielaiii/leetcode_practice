#include<iostream>
#include<vector>
using namespace std;

double formua(int n, int a ){
    return n/a - (a-1)/2;
}

int consecutiveNumbersSum(int n) {
    int ret = 0;
    int a = 0;
    double fol = 0;
    while((n/a-(a-1)/2) > 1){
        if((int)(n/a-(a-1)/2) - (n/a-(a-1)/2) == 0) ret ++;
        a ++;
    }
    return ret;
}