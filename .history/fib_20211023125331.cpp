#include<iostream>
using namespace std;

int fib(int n){
    int i = 0;
    int t = 1;
    for(int c = t; c < n; c++){
        int temp = t;
        t += i;
        i = temp;
    }
    return t;
}