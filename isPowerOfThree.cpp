#include <iostream>
#include <vector>
using namespace std;


bool isPowerOfThree(int n ){
    if(n > 1 ){
        if(n % 3 > 0) return false;
        return isPowerOfThree(n / 3);
    }
    else if(n == 1){
        return true;
    }else{
        return false;
    }
    return true;
}