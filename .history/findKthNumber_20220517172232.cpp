#include<iostream>
#include<vector>
#include<map>
#include"header.h"
using namespace std;

template<typename T, typename U>
void printer_map(map<T,U> map_){
    cout << "------------" <<endl;
    for(auto &it : map_){
        cout << it.first << " -> " << it.second <<endl;
    }
    cout << "------------" <<endl;
}

int findKthNumber(int m, int n ,int k){
    int left = 0;
    int right = m * n;
    while(left < right){
        int x = left + (right - left) / 2;
        int count = x / n * n;
        //int ano_count = 0;
        for(int i = x / n + 1; i < m; i++){
            count += x / i;
        }
        if(count < k){
            right = x;
        }else{
            left = x +  1;
        }
    }
    return left;
}