#include<iostream>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;


bool oneEditAway(string first, string second) {
    int len1 = first.length(), len2 = second.length();
    int diff_ = 0;
    if(len1 - len2 > 1 || len1 - len2 < -1) return 0;
    if(len1 < 2 && len2 < 2) return 1;
    if(first == second) return 1;
    if((len1 - len2 == 1 || len1 - len2 == -1) && (!len1|| !len2)) return 1;
    if(len1 == len2){
        for(int i = 0; i < len1; i ++){
            if(first[i] != second[i]) diff_++;
        }
        return diff_ == 1;
    }else if(len1 - len2 == 1 || len1 - len2 == -1){
        int len_ = len1 < len2 ? len1 : len2;
        int i = 0; int j = 0;
        while(first[i] != second[j]){
            i++;
            if(i == 2){
                i = 0;
                j ++;
            }
        }
    }
    return 0;
}