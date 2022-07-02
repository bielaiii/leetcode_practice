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
   do{
        i = n % 10;
        n /= 10;
   }
   while(n > 0);
}