#include<iostream>
#include<vector>
using namespace std;

bool checkPrime(int n){
    int i = 2;
    while(n % i && i * i < n){
        i++;
    }
    if(n % i == 0) return true;
    if(i * i >= n) return false;
    
    return false;
}


int numPrimeArrangements(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;
    long primer = 1;
    long j = 1;
    long Nonprimer = 1;
    long k = 1;
    for(int i = 3; i <= n; i++){
        if(checkPrime(i)){
            k ++;
            primer *= k;
        }else{
            j ++;
            Nonprimer *= j;
        }
        cout << k << " "<< j <<endl;
    }
    return (primer * Nonprimer) % (10 << 9 + 7);
}