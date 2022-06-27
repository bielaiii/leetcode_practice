#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int distinctSubseqII(string s){
    vector<long> record (26 ,0 );
    long mod = 1e9 + 7;
    for(auto c : s){
        record[c-'a'] = accumulate(record.begin(), record.end(), (long long)1) % mod;
    }
    return accumulate(record.begin(), record.end(), 0) % mod;
}