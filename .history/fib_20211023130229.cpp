#include<iostream>
using namespace std;

int fib(int n){
    int i = 0;
    int t = 1;
    if(!n) return 0;
    if(n == 1) return 1;
    for(int c = t + 1; c <= n; c++){
        int temp = t;
        t += i;
        i = temp;
    }

    return t;
}