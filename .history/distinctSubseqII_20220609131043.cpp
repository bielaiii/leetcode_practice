#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int distinctSubseqII(string s){
    vector<long> record {};
    //long record[26] = {};
    long mod = 1e9 + 7;
    for(auto c : s){
        record[c -'a'] = accumulate(record.begin(), record.end(), 1L) % mod;
    }
    return accumulate( record.begin(), record.end(), 0) % mod;
}