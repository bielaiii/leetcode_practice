#include<iostream>
#include<vector>
using namespace std;

vector<int> constructArray(int n, int k) {
    vector<int> vec (n, 0);
    int temp_i = 1;
    for(int i = 0; i <= k  ; i+= 2){
        vec[i] = temp_i ++;  ;
    }
    int temp_k = k + 1;
    for(int i = 1 ; i <= k ;i += 2){
        vec[i] = temp_k -- ;
    }
    
   //  for(auto c : vec) cout << c <<" ";
   //   cout << endl;
    for(int i = k + 1 ; i < n; i++){
        vec[i] = i + 1 ;
    }
    return vec;
}