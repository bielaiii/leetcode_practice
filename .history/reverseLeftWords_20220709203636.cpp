#include<iostream>
#include<algorithm>
using namespace std;

string reverseLeftWords(string s, int n) {
    reverse(s.begin(), s.begin() + n);
    reverse(s.begin() +n, s.end());
    reverse(s.begin(), s.end());
    return s;
}