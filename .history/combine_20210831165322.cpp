#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> combine(int n, int k) {
    vector< vector <int > > ret;
    vector<int> vec;
    int i  = 0;
    vec.push_back(i);
    ret.push_back(vec);
    while(ret[i].size() < k){
        for(int d = i + 1; d < n; d++){
            
        }
    }
}