#include<iostream>
using namespace std;


int tribonacci(int n){
    int first = 0;
    int second = 1;
    int third = 1;
    int latest_two = 0;
    for(int i = 4; i <= n; i++){
        latest_two = first + second + third;
        first = second;
        second = third;
        third = latest_two;
    }
    return latest_two;
}