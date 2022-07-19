#include<iostream>
#include<map>
#include<vector>
using namespace std;

void to_lower(string & s){
      for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z' ){
                  s[i] += 'a' - 'A';
            }
      }
}


string mostCommonWord(string paragraph, vector<string>& banned) {
      map<string, int> mymap;
      for(int i = 0; i < banned.size(); i++){
            tolower(banned[i]);
            mymap[banned[i]] = -1;
      }
      int i = 0;
      int j = 0;
      paragraph += ' ';
      string temp = "";
      while(j < paragraph.size() ){
            if(isalpha(paragraph[j])){
                  i = j;
                  while(i < paragraph.size() && isalpha(paragraph[i])) i++;
                  string temp = paragraph.substr(j, i - j);
                  to_lower(temp);
                  j = i;
                  if(mymap.find(temp) == mymap.end()){
                        mymap[temp] = 1;
                  }else if(mymap.find(temp)->second == -1){
                        ;
                  }else{
                        mymap.find(temp)->second ++;
                  }
            }else{
                  j ++;
            }

      }
      
      int maxm = INT16_MIN;
      string ret = "";
      for(auto i : mymap){
            if(i.second > maxm){
                  maxm = i.second;
                  ret = i.first;
            }
      }
      return ret;;
}