#include<iostream>
#include<vector>
using namespace std;


bool available(string s){
    int idone = s.find_first_of("1");
    int i = idone;
    for(; i < s.size(); i++){
        if(s[i] == '0') return false;
    }
    return idone == s.size() -1 ? 1 : 0;
}


int minFlipsMonoIncr(string s){
    int count_one  = 0;
    int count_zero = 0;
    int start = s.find_first_of("1");
    int ret ;
    for(int i = start; i < s.length(); i++){
        if(s[i] == '1'){
            count_one++;
        }else{
            count_zero ++;
        }
        if(count_zero > count_one){
            count_one = 0;
            ret = count_one;
        }
    }
    return ret;
}