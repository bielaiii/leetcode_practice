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
            mymap[banned[i]] = -1;
      }
      int i = 0;
      int j = 0;
      paragraph += ' ';
      string temp = "";
      while(j < paragraph.size() ){
            if(isalpha(paragraph[i])){
                  i = j;
                  while(i < paragraph.size() && isalpha(paragraph[i])) i++;
                  string temp = paragraph(j, i - j);
                  j = i;
            }else{
                  j ++;
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