#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

bool isPalindrome(string s){
    int left = 0, right = s.size() - 1;
    while(left <= right){
        if('A' <= s[left] && s[left] <= 'Z'){
            s[left] += 'a' - 'A';
        }
        
    }
    return 1;
}