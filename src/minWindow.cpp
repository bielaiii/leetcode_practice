#include<iostream>
#include<map>
#include <type_traits>
#include<vector>
using namespace std;


bool noMin(map<char, int> &record, map<char , int> &temp) {
    int ct = 0;
    for (auto c : record) {
        if (temp.find(c.first) == temp.end()) return false; 
        if (temp[c.first] < c.second) {
            return false;
        }
    }
    return true;
}

string minWindow(string s, string t) {
    string ret = "";
    int l = 0, r = 0;
    map<char, int> record;
    map<char, int> temp;
    for (auto c: t) {
        record[c]++;
    }
    int len = 65535;
    int i = 0;
    while (r < s.length()) {
        temp[s[r]]++;
        r++;
        while (l < r && noMin(record, temp))  {
            temp[s[l]]--;
            if (temp[s[l]] == 0) {
                temp.erase(s[l]);
            }
            if (len > r -l) {
                i = l;
                len = r - l;
            }
            
            l++;
        }
        
    }
    return len == 65535? "" : s.substr(i, len);
}