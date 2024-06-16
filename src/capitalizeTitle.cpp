#include <iostream>
#include <vector>
using namespace std;

vector<string> spliter(string title)
{
    vector<string> ret;
    title += " ";
    for (int i = 0, j = 0; i < title.size(); i++) {
        if (title[i] == ' ') {
            ret.push_back(title.substr(j, i - j));
            j = i + 1;
        }
    }
    return ret;
}

string capitalizeTitle(string title)
{
    vector<string> ans = spliter(title);

    for (auto& s : ans) {
        if (s.length() > 2) {
            for (auto & c : s) {
                if (c == *s.begin() && c >= 'a' && c <= 'z') {
                    c += 'A' - 'a';
                } else {
                    if (c >= 'A' && c <= 'Z') {
                        c += 'A' - 'a';
                    }
                }
            }
        } else {
            auto temp = s;
            for (auto& cx : temp) {
                cx = tolower(cx);
            }
        }
    }
    string str=  "";
    for (auto c : ans) {
        str += c;
        str += " ";
    
    }
    return str.substr(str.length() - 1);
}