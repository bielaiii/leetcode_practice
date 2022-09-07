#include<iostream>
#include<vector>
using namespace std;

vector<int> constructArray(int n, int k) {
    vector<int> vec;
    for(int i = 0; i < n ; i++){
        vec.push_back(i);
        vec.push_back(( i + k ) % n);
    }
    return vec;
}