#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int distinctSubseqII(string s){
    vector<int> record (26 ,0 );
    long long mod = (1 << 9) + 7;
    for(auto c : s){
        record[c-'a'] = accumulate(record.begin(), record.end(), 1) % mod;
    }
    return accumulate(record.begin(), record.end(), 0);
}