#include<iostream>
#include<vector>
using namespace std;

vector<int> constructArray(int n, int k) {
    vector<int> vec;
    for(int i = 1; vec.size() < n ; i++){
        vec.push_back(i);
        vec.push_back(( i + k )  - 1);
    }
    return vec;
}