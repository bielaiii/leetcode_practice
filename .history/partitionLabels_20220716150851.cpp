#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> partitionLabels(string s) {
      unordered_map<char, int> mymap;
      for(int i = 0; i < s.size(); i++){
            if(mymap.count(s[i])){
                  mymap[s[i]] = i;
            }else{
                  mymap[s[i]] = i;
            }
      }
      
}