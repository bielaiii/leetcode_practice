#include <iostream>
using namespace std;
//given by leetcode
//don't use this one

bool isBadVersion(int n){
    return 1;
}

int firstBadVersion(int n) {
    int left = 1, right = n ;
    while(left < right){
        int mid = left / 2 + right / 2;
        if(isBadVersion(mid)){
            right = mid + 1 ;
        }else{
            left = mid - 1 ;
        }
        cout << left << " " << mid << " " << right <<endl;
    }
    return left;
}