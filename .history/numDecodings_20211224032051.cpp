#include<iostream>
#include<vector>
using namespace std;

int transfer(string s){
    return stoi(s) > 0 && stoi(s) < 27? 1 : 0;
}


int numDecodings(string s){
    if(s[0] == '0') return 0;
    if(s.length() == 1) return 1;
    vector<int> vec(s.length(),0);
    vec[0] = 1;
    if(stoi(s.substr(0,2)) > 0 && stoi(s.substr(0,2)) < 27){
        if(s[1] == '0'){
            vec[1] = 1;
        }else{
            vec[1] = 2;
        }
    }else if(stoi(s.substr(1,1)) < 10){
        vec[1] = 1;
    }
    for(int i = 2; i < s.length(); i++){
        if(s[i-1] == '0'){
            vec[i] = vec[i-1];
        }else if(stoi(s.substr(i-1,2)) > 0 && stoi(s.substr(i-1,2)) < 27){
            if(s[i] == '0'){
                vec[i] += vec[i-2];
            }else{
                vec[i] = vec[i-2] + vec[i-1];
            }
        }
        cout << vec[i] << endl;
    }
    return vec[vec.size()-1];
}