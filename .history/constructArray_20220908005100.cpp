#include<iostream>
#include<vector>
using namespace std;

vector<int> constructArray(int n, int k) {
    vector<int> vec;
    for(int i = 0; i <= k  ; i+= 2){
        vec.push_back(i + 1 );
    }
    int temp_k = k + 1;
    for(int i = 1 ; i <= k ;i += 2){
        vec.push_back(temp_k -- );
    }
    // for(auto c : vec) cout << c <<" ";
    // cout << endl;
    for(int i = k + 1 ; i < n; i++){
        vec.push_back(i + 1 );
    }
    return vec;
}