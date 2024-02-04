#include <iostream>
#include <vector>
#include<map>
using namespace std;
int countWords(vector<string>& words1, vector<string>& words2)
{
    map<string, int> mp;
    for (auto word : words1) {
        mp[word]++;
    }
    map<string, int> mp1;
    for (auto word : words2) {
        mp1[word]++;
    }
    int ct = 0;
    for (auto [k, v] : mp) {
        if (v == 1) {
            if (mp1[k] == 1){
                ct++;
            }
        }
    }
    return ct;

}