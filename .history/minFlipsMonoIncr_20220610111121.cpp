#include<iostream>
#include<vector>
using namespace std;

int minFlipsMonoIncr(string s) {
    int ans = 0;
    int count_one= 0;
    int count_zero= 0;
    auto it = s.find_first_not_of("0");
    if(it == string::npos)        return 0;
    cout << "it " << it <<endl;
    for(int c = it; c < s.length(); c++){
        if(c == '1') count_one ++;
        else count_zero ++;
    }
    cout << count_one <<" " << count_zero <<endl;
    return count_one < count_zero ? count_one : count_zero;

}