#include<iostream>
#include<vector>
using namespace std;

bool checker(int n){
      while(n > 0){
            if(n %= 10) return 0;
            n /= 10;
      }
      return n == 1;
}


int do_calculation(int n){
      int temp = n;
      n = 0;
      while(temp > 0){
            n += (temp % 10) * (temp % 10);
            temp /= 10;
      }
      return n;
}

bool isHappy(int n) {
      int fast = n;
      int slow = n;
      while(checker(n)){
      }
}