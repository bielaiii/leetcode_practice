#include<iostream>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;
    int length = 32;
    while(length--){
        ans <<= 1;
        ans += n&1;
        cout << ans << endl;
        n >>=1;
    }      
    return ans;  
}