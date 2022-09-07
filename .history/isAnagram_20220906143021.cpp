#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool isAnagram(string s, string t) {
    unordered_set<char> us1;
    unordered_set<char> us2;
    for(auto c : s){
        us1.insert(c);
    }
    for(auto c : t){
        us2.insert(c);
    }
    return us1 == us2;
}