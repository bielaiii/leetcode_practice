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
    map<int,int> map_;
    map_[1] = 1;
    int i = 1; 
    int j = 1;
    int sum =1;
    if(m * n == k) return k;
    while(sum < k){
        for(int jj = j; jj <= n; jj++){
            //map_[i * jj ] = map_.count(i * jj) ? map_[i * jj] + 1 : 1;
            if(i * jj == 1 ) continue;
            if(map_.count(i * jj)){
                map_[i * jj] ++;
            }else{
                map_.insert({i * jj , 1});
            }
            sum ++;
            //sum ++ ;
           // printer_map(map_);
        }
        //cout << "start n" <<endl;
        // printer_map(map_);
        //cout << "sum: " << sum <<endl;
        if(sum >= k) break;
        for(int ii = i; ii <= m; ii++){
            if(ii * j == 1) continue;
            if(map_.count(ii * j)){
                map_[ii * j] ++;
            }else{
                map_.insert({ii * j , 1});
            }
           sum ++;
           // printer_map(map_);
        }
        //cout << "sum: " << sum <<endl;
        //cout << "start m" << endl;
        //printer_map(map_);
        j ++;
        i ++;
    }
   // printer_map(map_);
    auto it = map_.begin();
    int id =0;
    while(it != map_.end() && id < k){
        id += it->second;
        if(id >= k){
            break;
        }
        it++;
    }
    return it->first;
}