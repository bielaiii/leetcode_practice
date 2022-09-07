#include<iostream>
#include<vector>
using namespace std;

vector<int> constructArray(int n, int k) {
    vector<int> vec;
    for(int i = 1; i < k ; i++){
        vec.push_back(i);
        vec.push_back(( i + k )  - 1);
    }
    for(int i = k ; i< n; i++){
        vec.push_back(i + 1);
    }
    return vec;
}