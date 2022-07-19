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
      int j = 0;
      for(auto i : mymap){
            cout << i.first << " -> "<< i.second <<endl;
      }
      vector<int> ans;
      for(int i = 0; i <s.size(); i++){
            cout <<"i "<< i <<endl;
            cout <<"j "<< j <<endl;
            if(mymap[s[i]] > j){
                  j = mymap[s[i]];
            }else if(i == j){
                  if(ans.empty())
                        ans.push_back(i );
                  else
                        ans.push_back(i - ans.back());
                  
                  if(i == s.size() - 1) break;;
                  j = mymap[s[i + 1]];
            }
      }
      return ans;
}