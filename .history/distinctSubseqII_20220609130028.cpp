#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int distinctSubseqII(string s){
    vector<long> record (26 ,0 );
    //long record[26] = {};
    long mod = 1e9 + 7;
    for(auto c : s){
        record[c-'a'] = accumulate(begin(record), end(record), (long long)1) % mod;
    }
    return accumulate(begin(record), end(record), 0) % mod;
}