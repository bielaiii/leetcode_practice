#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    int us1[26] = {0};
    int us2[26] = {0};
    for(auto c : s)
        us1[c - 'a'] ++;
    for(auto c : t){
        us2[c - 'a'] ++;
    }
    return us1 == us2;
}