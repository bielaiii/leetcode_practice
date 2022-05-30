#include<iostream>
#include<vector>
#include<map>
using namespace std;

int findKthNumber(int m, int n ,int k){
    map<int,int> map_;
    int i = 0; int j = 0;
    int sum =0;
    while(sum < k){
        for(int jj = 1; jj <= n; j++){
            map_[i * jj ] = map_.count(i * jj) ? map_[i * jj] + 1 : 1;
            sum ++ ;
        }
        if(sum < k) break;
        for(int ii = 1; ii <= m; ii++){
            map_[ii * j] = map_.count(ii * j) ? map_[ii * j] + 1 : 1;
            sum ++;
        }

    }
    return map_.rbegin()->first;
}