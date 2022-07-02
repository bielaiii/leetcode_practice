#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int nextGreaterElement(int n) {
   int i = 0 ;
   int j = 0;
   int tail = n % 10;
   n /= 10;
    while(n > 0){
        i = n % 10;
        if(i < tail){
            break;
        }else{
            tail = i;
        }
        n /= 10;
   }
  if(n <= 0) return -1;
  
}