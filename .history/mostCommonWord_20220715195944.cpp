#include<iostream>
#include<map>
#include<vector>
using namespace std;

string mostCommonWord(string paragraph, vector<string>& banned) {
      map<string, int> mymap;
      for(int i = 0; i < banned.size(); i++){
            mymap[banned[i]] = -1;
      }
      int j = 0;
      for(int i =0; i < paragraph.size(); i++ ){
            if(paragraph[i] == ' '){
                  string temp = paragraph.substr(j, i - j);
                  j = i + 1;
                  if(mymap.find(temp) != mymap.end() && mymap.find(temp)->second != -1){
                        mymap[temp] ++;
                  }else{
                        mymap[temp] = 1;
                  }
            }
      }
      
      int maxm = INT16_MIN;
      string ret = "";
      for(auto i : mymap){
            if(i->second > maxm){
                  maxm = i->second;
                  ret = i->first;
            }
      }
      return ret;;
}