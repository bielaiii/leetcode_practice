#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;


int lengthOfLongestSubstring(string s) {
    stringstream ss;
    string str;
    ss << s[0];
    ss >> str;
    int head = 0;
    int old_head = 1;
    for(int i  =1; i < s.length(); i++){
        if(str[head] != s[i]){
            str += s[i];
            head ++;
        }else{
            head = old_head;
            old_head ++;
        }
        cout << str << endl;
    }
    return str.length();
}