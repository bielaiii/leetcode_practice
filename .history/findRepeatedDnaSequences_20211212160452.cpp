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
            cout <<<"found";
            map_.insert(pair<string, int>(s.substr(i,10),1));
        }else{
            all_s.push_back(s.substr(i,10));
        }

       // all_s.push_back( s.substr(i, 10) );
    }
    return all_s;
}