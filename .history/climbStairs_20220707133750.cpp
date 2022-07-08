#include<iostream>
#include<vector>
using namespace std;

int climbStairs(int n){
   if(n == 1) return 1;
   if(n == 2) return 2;
   vector<int> vec (n, 0);
   vec[1] = 1;
   vec[2] = 2;
   for(int i = 3; i  < vec.size() ;i++){
        vec[i] = vec[i-1] + vec[i-2];
   }
   return vec.back();
}