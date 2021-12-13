#include<iostream>
#include <vector>
#include <string>
#include<unordered_map>
using namespace std;

vector<int> findRepeatedDnaSequences(string s){
    //int length = s.length();
    vector<string> all_s;
    unordered_map<string, int> map_ ;
    for(int i = 0; i < s.length() - 10; i++){

        all_s.push_back( s.substr(i, 10) );
    }
}