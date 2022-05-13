#include<iostream>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;


bool oneEditAway(string first, string second) {
    int len1 = first.length(), len2 = second.length();
    if(len1 - len2 > 1 || len1 - len2 < -1) return 0;
    if(first == second) return 1;
    if((len1 - len2 == 1 || len1 - len2 == -1) && (!len1|| !len2)) return 1;
    int miss_  = 0;
    int diff_ = 0;
    int len = len1 < len2? len1 : len2;
    int i = 0;
    while(first[i] != second[0] && i < len1) i++;
    int j = 0 ;
    for(; i < len; i++){
        if(first[i] != second[j]) diff_++;
        j ++;
    }
    cout << "i " << i << " "<< "j : "<< j <<endl;
    if(len1 == len2){
       return diff_ == 1;
    }
    if(len1 - len2 == 1 || len1 - len2 == -1){
        return diff_ == 0;
    }
    return 0;
}