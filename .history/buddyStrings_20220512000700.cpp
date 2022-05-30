#include<iostream>
#include<vector>
#include "header.h"
using namespace std;


bool buddyStrings(string s, string goal){
    vector<int> vec1(26, 0);
    vector<int> vec2(26, 0);
    int sum1 = 0;
    int sum2 = 0;
    if(s.length() != goal.length()) return 0;
    vector<int> diff_;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != goal[i]) diff_.push_back(i);
    }
    return 0;
}