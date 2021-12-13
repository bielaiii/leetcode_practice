#include<iostream>
#include <vector>
#include <string>
#include<unordered_map>
using namespace std;

vector<string> findRepeatedDnaSequences(string s){
    //int length = s.length();
    
    vector<string> all_s;
    unordered_map<string, int> map_ ;
    unordered_map<string, int> map_key ;

    if(s.length() < 10) return all_s;
    for(int i = 0; i <= s.length() - 10; i++){
        if(map_.find(s.substr(i,10)) == map_.end()){
           // cout << "inseert" <<endl;
            map_.insert(pair<string, int>(s.substr(i,10),1));
        }else{
            map_key.insert(pair<string, int>(s.substr(i,10),1));
        }
    }
    for(auto i = map_key.begin(); i != map_key.end(); i++){
        all_s.push_back(i->first);
    }
    return all_s;
}