#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if(n == 1) return true;
    if(!n) return false;
    if(n % 2 != 0) return false;
    return isPowerOfTwo(n/2);
}