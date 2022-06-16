#include <iostream>
//#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int reverse(int x) {
    long sum = 0;
    int flag = x > 0? 1:0;
    x = abs(x);
    while(x > 0){
        sum = sum*10 + x % 10;
        x /= 10;
    }
    if(flag == 0) sum = -sum;
    return sum > INT16_MAX || sum < INT16_MIN? 0 : sum;
}
