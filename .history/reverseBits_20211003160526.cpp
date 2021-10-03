#include<iostream>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    int ans = 0;
    int length = 32;
    while(length--){
        ans <<= 1;
        ans += n&1;

    }        
}