#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> partitionLabels(string s) {
      unordered_map<char, int> mymap;
      for(int i = 0; i < s.size(); i++){
            //if(mymap.count(s[i])){
                  mymap[s[i]] = i;
            //}else{
               //   mymap[s[i]] = i;
           // }
      }
      int j = mymap[0];
      for(auto i : mymap){
            cout << i.first << " -> "<< i.second <<endl;
      }
      vector<int> ans;
      for(int i = 0; i <s.size(); i++){
            cout <<"i "<< i <<endl;
            cout <<"j "<< j <<endl;
            if(mymap[i] > j){
                  j = mymap[i];
            }else if(i == j){
                  ans.push_back(i );
                  if(i == s.size() - 1)continue;
                  j = mymap[i + 1];
            }
      }
      return ans;
}