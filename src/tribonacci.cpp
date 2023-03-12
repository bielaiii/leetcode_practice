#include<iostream>
using namespace std;


int tribonacci(int n){
    int first = 0;
    int second = 1;
    int third = 1;
    int latest_two = 0;
    if( !n ) return 0;
    if( n == 1 ) return 1;
    if( n == 2 ) return 1;
    for(int i = 3; i <= n; i++){
        latest_two = first + second + third;
        first = second;
        second = third;
        third = latest_two;
    }
    return latest_two;
}