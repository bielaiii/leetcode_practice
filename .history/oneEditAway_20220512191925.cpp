#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


bool oneEditAway(string first, string second) {
    if(abs(first.length() - second.length()) > 1) return 0;
    if(first == second) return 1;
    if(first.length() - second.length() == 1 && (!first.length() || !second.length())) return 1;
    int miss_  = 0;
    int diff_ = 0;
    int len = first.length() < second.length() ? first.length() : second.length();
    for(int i = 0; i < len; i++){
        if(first[i] != second[i]) diff_++;
    }
    if(first.length() == second.length()){
       return diff_ == 1;
    }
    if(abs(first.length() - second.length()) == 1){
        return diff_ == 0;
    }
    return 0;
}