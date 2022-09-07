#include<iostream>
#include<vector>
using namespace std;

vector<int> constructArray(int n, int k) {
    vector<int> vec;
    for(int i = 0; i <= k ; i++){
        vec.push_back(i + 1 );
        vec.push_back(k + 1  - i);
    }
     for(auto c : vec) cout << c <<" ";
     cout << endl;
    for(int i = k + 1 ; i < n; i++){
        vec.push_back(i + 1 );
    }
    return vec;
}