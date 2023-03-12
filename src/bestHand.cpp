#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;




string bestHand(vector<int>& ranks, vector<char>& suits) {
    unordered_map<int, int> ct;
    unordered_map<int, int> kind;
    int maxCt = 0;
    for (int i = 0; i < ranks.size(); i++) {
        kind[suits[i]]++;
        ct[ranks[i]]++;
        if (kind[suits[i]] == 5) {
            return "Flush";
        }
    }
    for (auto it : ct) {
        if (it.second >= maxCt) {
            maxCt = it.second;
        }
    }
    if (maxCt >= 3) {
        return "Three of a Kind";
    } else if (maxCt == 2) {
        return "Pair";
    }
    return "High Card";
}