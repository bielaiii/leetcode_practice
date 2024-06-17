#include "header.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool checkSubStr(const string& a, const string& b) {
    int i = 0;
    int j = 0;
    for (; i < a.size() && j < b.size(); ++j) {
        if (a[i] == b[j]) {
            ++i;
        }
    }
    return i == a.size();
}

namespace B {

int findLUSlength(vector<string>& strs) {
    vector<vector<int>> vec;
    sort(strs.begin(), strs.end(),
         [](string a, string b) { return a.size() > b.size(); });
    // for(auto s : strs) cout << s << endl;
    for (int i = 0; i < strs.size(); i++) {
        bool hasSub = 1;
        int j = 0;
        for (; j < strs.size(); j++) {
            if (i != j && checkSubStr(strs[i], strs[j])) {
                hasSub = 0;
                break;
            }
        }
        if (hasSub)
            return strs[i].size();
    }
    return -1;
}

} // namespace B

int findLUSlength(std::vector<std::string>& strs) {
    sort(strs.begin(), strs.end(), [](const string s1, const string s2) {
        return s1.length() > s2.length();
    });
    for (int i = 0; i < strs.size(); i++) {
        bool findSub = 1;
        for (int j = 0; j < strs.size(); j++) {
            if (i != j && checkSubStr(strs[i], strs[j])) {
                findSub = 0;
                break;
            }
        }
        if (findSub) {
            return strs[i].size();
        }
    }
    return -1;
}