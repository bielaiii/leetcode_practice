#include<iostream>
#include<vector>
using namespace std;

char firstUniqChar(string s) {
    vector<int> vec(26, 0);
    for(auto c : s) vec[c] ++;
    for(auto c : s){
        if(vec[c] == 1) return c;
    }
    return ' ';
}