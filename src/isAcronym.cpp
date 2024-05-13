#include "header.h"
#include <iostream>
#include <vector>
using namespace std;

bool isAcronym(vector<string>& words, string s) {
    string ans = "";

    for (const auto & word : words) {    
        ans += word[0];

    }
    return s == ans;
}