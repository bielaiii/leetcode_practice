#include<iostream>
#include<vector>
using namespace std;

bool checkPrime(int n){
    int i = 2;
    while(n % i && i < n/i){
        i++;
    }
    return n % i == 0;
}


int numPrimeArrangements(int n) {
    int countPrime = 1;
    int nonPrime = 1;
    int i = 2;
    int p = 
    if(n == 1) return 0;
    for(;  i < n;){
        if(checkPrime(i)){
            countPrime *= ;
        }else{
            nonPrime ++;
        }
    }
    int sum = 0;
    for(int i = countPrime; i > 0; i --){
        sum *= i;
    }
    for(int i )
    return countPrime
}