#include<iostream>
#include<vector>
using namespace std;

vector<int> constructArray(int n, int k) {
    vector<int> vec;
    for(int i = 0; vec.size() < n ; i++){
        vec.push_back(i);
        vec.push_back(( i + k )  - i);
    }
    return vec;
}