#include<iostream>
#include<vector>
using namespace std;

int longestValidParentheses(string s){
    vector<int> vec (s.length(), 0);
    if(s.length() < 2) return 0;
    if(s[0] == '(' && s[1] == ')') s[1] = 2;
    for(int c = 2; c < s.length(); c++){
        if(s[c] == '('){
            vec[c] = 0;
        }else{

        }
    }
}