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
      int j = 0;
      vector<int> ans;
      for(int i = 0; i <s.size(); i++){
            if(mymap[i] > j){
                  j = i;
            }else if(i == j){
                  ans.push_back(i);
            }
      }
      return ans;
}