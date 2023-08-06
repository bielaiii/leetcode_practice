#include <cstdio>
#include <type_traits>
#include<vector>
#include <iostream>
using namespace std;

void rec(const vector<vector<int>> dp, int i, string str, vector<vector<int>> visited, vector<vector<string>> all, vector<string> temp) {
    if (i == dp.size()) {
        all.emplace_back(temp);
        return;
    } else if (i >= dp.size()) {
        return;
    }
    cout <<" start rec" << endl;
    for (int j = i; j < dp.size(); j++) {
        if (dp[i][j]) {
            temp.push_back(str.substr(i, j - i));
            rec(dp, j, str, visited, all, temp);
            temp.pop_back();
        }
        cout << "find one rec\n";
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<int>> dp(s.length(), vector<int>(s.length(), 0));
    vector<vector<string>> ret;
    for (int i =  s.length() - 1; i >= 0; i--) {
        for(int j = i; j < s.length(); j++) {
            if (s[i] == s[j]) {
                if (j - i <= 1) {
                    dp[i][j] = 1;
                } else if (dp[i+1][j-1]) {
                    dp[i][j] = 1;
                }
            }
            cout <<" hesada" << endl;
        }
        cout <<" hello " << endl;
    }
    vector<vector<int>> visited;
    vector<vector<string>> all;
    vector<string> temp;
    for (int i = 0 ; i < s.length(); i++) {
        if (dp[0][i]) {
           rec(dp, i, s, visited, all, temp);
        }
        cout <<" ahfdkjdf " << endl;
    }

    return {};
}