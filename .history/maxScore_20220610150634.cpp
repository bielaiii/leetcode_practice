#include<iostream>
#include<vector>
using namespace std;

int maxScore(string s){
    int left = 0, right = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            left ++;
        }else{
            right --;
        }
    }
}