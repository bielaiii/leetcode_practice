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
    int countPrime = 0;
    int nonPrime = 1;
    int i = 2;
    for(;  i < n;){
        if(checkPrime(i)){
            countPrime ++;
        }else{
            nonPrime ++;
        }
    }
    return countPrime
}