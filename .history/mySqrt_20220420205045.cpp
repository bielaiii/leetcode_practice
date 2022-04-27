#include <iostream>
#include <vector>
using namespace std;

int mySqrt(int x) {
    for(int i = x/ 2; i > 0; i--){
        if(i * i <= x && (i+1)*(i+1) >= x){
            return i;
        }
    }
    return 1;
}