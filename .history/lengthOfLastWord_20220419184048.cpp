#include<iostream>
using namespace std;

int lengthOfLastWord(string s){
    int idx = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') idx = i;
    }
    return s.length() - idx ;
}