#include<iostream>
#include<algorithm>
using namespace std;

string reverseLeftWords(string s, int n) {
    reverse(s.begin(), s.begin() + n);
    cout << s <<endl;
    reverse(s.begin() +n, s.end());
    cout << s <<endl;
    reverse(s.begin(), s.end());
    cout << s<<endl;
    return s;
}