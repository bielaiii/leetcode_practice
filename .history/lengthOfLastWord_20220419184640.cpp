#include<iostream>
using namespace std;

int lengthOfLastWord(string s){
    int right = s.length() - 1;
    int right_idx = s.length() - 1;
    while(s[right] == ' ') right --;
    int left = right;
    while(s[left] != ' ') left ++;
    return left - right;
}