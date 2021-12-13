#include<iostream>
#include <vector>
#include <string>
#include<unordered_map>
using namespace std;

vector<string> findRepeatedDnaSequences(string s){
    //int length = s.length();
    vector<string> all_s;
    unordered_map<string, int> map_ ;
    for(int i = 0; i < s.length() - 10; i++){
        if(map_.find(s.substr(i,10)) == map_.end()){
            map_.insert(pair<string, int>(s.substr(i,10),1));
        }else{
            auto e = all_s.begin();
            while (e != all_s.end())
            {
                if(*e == s.substr(i,10)) break;
                e ++;
            }
            if(e == all_s.end()){
                all_s.push_back(s.substr(i,10));
            }          
        }
    }
    return all_s;
}