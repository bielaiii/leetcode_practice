#include<iostream>
#include<vector>
#include<sstream>
using namespace std;


string all_to_lower(string & s, int i, int step){
    string rec = "";
    for(int j = 0; j < s.size(); j ++){
        if('a' <=s[j] && s[j] <= 'z'){
            rec += s[j];
        }
        else if('A' <=s[j] && s[j] <= 'Z'){
            s[j] += 'a' - 'A';
        }
        
     }
     return rec;
}



bool isPalindrome(string s){
    int left = 0, right = s.size() - 1;
    while(left <= right){
        if(s[left] == s[right]) continue;
        (s[left])
        if('A' <= s[right] && s[right] <= 'Z'){
            s[right] += 'a' - 'A';
        }
        
    }
    return 1;
}