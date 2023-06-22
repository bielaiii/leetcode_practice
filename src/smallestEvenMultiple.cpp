#include<iostream>
#include<numeric>
using namespace std;

int smallestEvenMultiple(int n) {
    int g = gcd(n, 2);
    return 2 * n / g;
}