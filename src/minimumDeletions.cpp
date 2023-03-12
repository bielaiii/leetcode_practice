#include<iostream>
#include<vector>
using namespace std;



int minimumDeletions(string s) {
    int a = 0;
    int b = 0;
    for (auto c : s) {
        if (c == 'a'){
            b = min(a, b + 1);
        } else {
            ++a;
        }
    }
    return b;
}