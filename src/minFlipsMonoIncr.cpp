#include<iostream>
#include<vector>
using namespace std;

int minFlipsMonoIncr(string s)
{
    vector<int> vec(s.length(), 0);
    s[0] = 0;
    for (int i = 1; i < s.size(); i++) {
        vec[i] = 0;
    }
    return 0;
}