#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


void removeExtractSpace(string &s) {
    int i = 0;
    while (i < s.length() && s[i] == ' ') {
        i++;
    }
    s = s.substr(i);
    
    
    s += " ";
    string temp = "";
    int l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            temp += s.substr(l, i - l);
            temp += " ";
            l = i;
            while (l < s.length() && s[l] == ' ') l++;
            i = l;
        }
    }
    s = temp;
    i = s.length() - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    s = s.substr(0, i + 1);
    //s =temp;
}

string reverseWords(string s) {
    int l = 0, r = 0;
    reverse(s.begin(), s.end());
    for (; r < s.length(); r++) {
        if (s[r] == ' ') {
            reverse(s.begin() + l, s.begin() + l + (r - l));
            l = r + 1;
        }
    }
    reverse(s.begin() + l, s.begin() + l + (r - l));
    removeExtractSpace(s);
    return s;
}