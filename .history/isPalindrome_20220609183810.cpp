#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

bool isPalindrome(string s){
    stringstream ss;
    ss << s;
    string str = "";
    string temp ; 
    for(auto c : s){
        if( isalpha(c)) str+= c;
    }
    //cout << str <<endl;
    int i ,j;
    if(s.length() % 2 ){
        i = s.length() / 2;
        j = i;
    }else{
        j = s.length() / 2;
        i = j - 1;
    }
    while(i >= 0 && j < s.length()){
        if(s[i] != s[j]) return false; 
        cout << i <<" "<< j <<endl;
        i --; j++;
    }
    return 1;
}