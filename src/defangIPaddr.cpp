#include<iostream>
#include<vector>
using namespace std;

string defangIPaddr(string address){
    string ans = "";
    for(auto c : address){
        if(isdigit(c)){
            ans += c;
        }else{
            ans += "[.]";
        }
    }
    return ans;
}