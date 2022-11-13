#include<iostream>
#include<vector>
#include<sstream>
using namespace std;


string all_to_lower(string s){
    string rec = "";
    for(int j = 0; j < s.size(); j ++){
        if('a' <=s[j] && s[j] <= 'z'){
            rec += s[j];
        }else if('A' <=s[j] && s[j] <= 'Z'){
            s[j] += 'a' - 'A';
            rec += s[j];
        }
        
     }
     return rec;
}



bool isPalindrome(string s){
    
    string temp = all_to_lower(s);
    int left = 0, right = temp.size() - 1;
    
    while(left <= right){
        if(temp[left] != temp[right]) return 0;
        left ++;
        right --;
    }
    return 1;
}