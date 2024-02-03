#include <algorithm>
#include<iostream>
#include <vector>
#include<ranges>
using namespace std;

string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
    string str = "";
    int offset = 0;
    tuple<int, string ,string> tu_;
    vector<tuple<int, string ,string>> vt;
    vector<tuple<int, string ,string>> bak;
    for (int i = 0; i < indices.size(); i++) {
        vt.push_back({indices[i], sources[i], targets[i]});
    }
    sort(vt.begin(), vt.end(),[](tuple<int, string, string> a, tuple<int, string, string> b) {
        return std::get<0>(a) < std::get<0>(b);
    });
    for (int i = 0; i < indices.size(); i++) {
        //int idx = indices[i];
        //string src = sources[i];
        //string tgt = targets[i];
        auto [idx, src, tgt] = vt[i];
        string tt = s.substr(idx, src.length());
        if (s.substr(idx , src.length()) == src) {
            bak.push_back({idx, src, tgt});
            for (int j = 0; j < src.length(); j++) {
                s[idx+j] = '#';
            }
        }
    }
    //cout << s << endl;
    string ret = "";
    int i = 0 ;
    int j = 0 ;
    for (; i < bak.size() && j < s.size();) {
        auto [id, src, tgt] = bak[i];
        if(s[j] != '#') {
            ret += s[j];
            j++;
        } else {
            ret += tgt;
            i++;
            j += src.length();
        }
    }
    if (j < s.size()) {
        ret += s.substr(j);
    }
    return ret;
}