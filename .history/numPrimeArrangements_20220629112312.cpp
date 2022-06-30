#include<iostream>
#include<vector>
using namespace std;

bool checkPrime(int n){
    int i = 2;
    while(n % i && i < n){
        i++;
    }
    return n % i == 0;
}


int numPrimeArrangements(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;
    int primer = 1;
    int j = 1;
    int Nonprimer = 1;
    int k = 1;
    for(int i = 3; i < n; i++){
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