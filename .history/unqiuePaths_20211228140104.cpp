#include<iostream>
#include<vector>
using namespace std;


int recur(int m, int n){
    if(m == 0 && n == 0){
        return 1;
    }
    if(m > 0 && n > 0){
        return 1 + recur(m - 1, n) + recur(m , n - 1); 
    }else if(m > 0 && n == 0){
        return 1 + recur(m - 1, n);
    }else if(n > 0 && m == 0){
        return 1 + recur(m, n - 1);
    }
    return 0;
}

int uniquePaths(int m, int n) {
    return recur(m,n);
}