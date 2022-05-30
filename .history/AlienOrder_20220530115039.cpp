#include<iostream>
#include<vector>
using namespace std;


string alienOrder(vector<string>& words) {
    string ans = "";
    for(auto word : words){
        for(auto cha : word){
            if(ans.find_first_not_of(cha)){
                
            }
        }
    }
}