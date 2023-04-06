#include<iostream>
#include<vector>
using namespace std;

string maskPII(string s) {
    int idx = s.find_first_of('@');
    if (idx != string::npos) {
        for (auto &c : s) {
            c = tolower(c);
        }
        string tail = s.substr(idx);
        string head = {s[0]};
        head += "*****";
        if (idx - 1 >= 0 && s[idx - 1] >= 'A' && s[idx - 1] <= 'Z') {
            s[idx-1] = tolower(s[idx-1]); 
        }
        head += s[idx - 1];
        head += tail;
        return head;
    } else {
        string head = "";
        int ct = 0;
        string countryNum = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (ct < 10 && isdigit(s[i])) {
                head = s[i] + head;
                ct++;
            } else if (ct >= 10 && isdigit(s[i])) {
                countryNum = s[i] + countryNum;
            }
        }
        string ans = "***-***-" + head.substr(6);
        head = "";
        if (countryNum.size() > 0) {
            head = "+";
            for (int i = 0; i < countryNum.size(); i++) {
                head += "*";
            }
            head += "-";
        }
        return head + ans;
    }
    return "";
}