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
    int ans = 0;
    int count_one  = 0;
    int count_zero = 0;
    auto last_zero = s.find_last_of("0");
    auto last_one = s.find_last_of("1");
    auto first_zero = s.find_first_of("0");
    auto first_one = s.find_first_of("1");
    if(last_zero == string::npos || first_zero == string::npos) return 1;
    if(last_one == string::npos || first_one == string::npos) return 1;
    cout << first_zero << " " << last_zero <<endl;
    cout << first_one << " " << last_one <<endl;
    for(int i = first_one; i <= last_one; i++){
        if(s[i] == '0') count_one++;
    }
    for(int i = first_zero; i <= last_zero; i++){
        if(s[i] == '1') count_zero ++;
    }

    return count_one < count_zero ? count_one : count_zero;
}