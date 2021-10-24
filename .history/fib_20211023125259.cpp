#include<iostream>
using namespace std;

int fib(int n){
    int i = 1;
    int t = 1;
    for(int c = t+1; c < n; c++){
        int temp = t;
        t += i;
        i = temp;
    }
    return t;
}