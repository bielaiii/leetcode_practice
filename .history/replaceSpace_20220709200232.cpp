#include<iostream>
#include<vector>
using namespace std;

string replaceSpace(string s) {
    int spaces = 0;
    int size1 = s.size() ;
    for(auto c : s){
        if(c == ' ') spaces ++;
    }
    
    s.resize(s.size() + spaces * 2);
    int size2= s.size();
    for(int i = size1 - 1, j = size2 - 1; i > 0; i--, j --){
        if(s[i] != ' '){
            s[j] = s[i];
        }else{
            s[j --] = '%';
            s[j --] = '2';
            s[j ] = '0';
        }
    }
   // cout << s <<endl;
    return s;
}