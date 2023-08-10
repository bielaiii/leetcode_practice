#include<iostream>
#include<vector>
using namespace std;


string replaceSpace(string s) {
    int l = s.length() - 1;
    string rep = "%20";
    int ct_space = 0;
    for (auto c : s) {
        if (c ==' '){
            ct_space++;
        }
    }
    s.resize(ct_space * 2 + s.length());
    int r = s.length() - 1;
    while (l >= 0) {
        if (s[l] != ' ') {
            s[r] = s[l];
        } else {
            s[r] = '0';
            s[r - 1] = '2';
            s[r - 2] = '%';
            r -= 2;
        }
        l--;
        r--;
    }
    return s;
}