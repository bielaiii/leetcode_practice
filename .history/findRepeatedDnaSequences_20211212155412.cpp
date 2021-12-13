#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

vector<int> findRepeatedDnaSequences(string s){
    //int length = s.length();
    vector<string> all_s;
    for(int i = 0; i < s.length() - 10; i++){
        all_s.pop_back( s.substr(i, 10) );
    }
}