#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>
using namespace std;

int gcd(int a, int b){
      int r = 0;
      while(a % b != 0){
            r = a % b;
            a = b;
            b = r;
      }
      return b;
}

int nthMagicalNumber(int n, int a, int b){
      const int mod = 1e9 + 7;
      long long c = lcm(a,b);
      long long l = min(a,b), r = min(a,b) * (long long)n;
      while(l <= r){
            long long mid = l + (r - l ) / 2;
            if((long long)(mid / a + mid / b - mid / c) >= n ){
                  r = mid - 1 ;
            }else{
                  l = mid + 1 ;
            }
      }
      return  (r + 1)% mod;
}

/* const int MOD = 1e9 + 7;
    int nthMagicalNumber(int n, int a, int b) {
        long long l = min(a, b);
        long long r = (long long) n * min(a, b);
        int c = lcm(a, b);
        while (l <= r) {
            long long mid = (l + r) / 2;
            long long cnt = mid / a + mid / b - mid / c;
            if (cnt >= n) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return (r + 1) % MOD;
    }
 */




