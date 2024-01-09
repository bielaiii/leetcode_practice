#include"header.h"
using namespace std;

int minLength(string s) {
    if (s.length() == 0) return 0;
    string s1 = "AB";
    string s2 = "CD";
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'A' && s[i+1] == 'B') {
            
            string temp = s.substr(0, i) + s.substr(i + 2);
            
            return minLength(temp);
        } else if (s[i] == 'C' && s[i + 1] == 'D') {
            string temp = s.substr(0, i) + s.substr(i + 2);
            return minLength(temp);
        }
    }
    return s.length();
}