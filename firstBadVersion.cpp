#include <iostream>
using namespace std;
//given by leetcode
//don't use this one
bool isBadVersion(int f){
    if(f >= 1702766719)
        return true;
    return false;
}

int firstBadVersion(int n) {
   int head = 0, tail = n;
   while(tail - head != 1){
       int mid = head + (tail - head)/ 2;
       if(isBadVersion(mid)){
           tail = mid;
       }else{
           head = mid;
       }
   }
    return tail;    
}