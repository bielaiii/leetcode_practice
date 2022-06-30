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
    int primer = 1;
    int j = 1;
    int Nonprimer = 1;
    int k = 1;
    for(int i = 1; i < n; i++){
        if(checkPrime(i)){
            k ++;
            primer *= k;
        }else{
            j ++;
            Nonprimer *= j;
        }
    }
    return (k * j) % (10 << 9 + 7);
}