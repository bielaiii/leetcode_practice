#include<iostream>
#include<vector>
#include<map>
#include"header.h"
using namespace std;

template<typename T, typename U>
void printer_map(map<T,U> map_){
    for(auto &it : map_){
        cout << it.first << " -> " << it.second <<endl;
    }
}

int findKthNumber(int m, int n ,int k){
    map<int,int> map_;
    map_[1] = 1;
    int i = 2; int j = 2;
    int sum =0;
    while(sum < k){
        for(int jj = j; jj <= n; jj++){
            //map_[i * jj ] = map_.count(i * jj) ? map_[i * jj] + 1 : 1;
            if(map_.count(i * jj)){
                map_[i * jj] ++;
            }else{
                map_.insert({i * jj , 1});
            }
            sum ++ ;
            printer_map(map_);
        }
        i++;
        if(sum > k) break;
        for(int ii = i; ii <= m; ii++){
            if(map_.count(ii * j)){
                map_[ii * j] ++;
            }else{
                map_.insert({ii * j , 1});
            }
            sum ++;
            printer_map(map_);
        }
        j ++;
    }
    
    /* for(auto &it : map_){
        cout << it.first << " -> "<< it.second << endl;

    } */
    return map_.rbegin()->first;
}