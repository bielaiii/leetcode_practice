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
      paragraph += ' ';
      while(1 ){
            while(i < paragraph.size() && isalpha(paragraph[i])){
                  i ++;
            }
            i -= 1;
            string temp = paragraph.substr(j, i - j);
                  j = i + 1;
                  if(mymap.find(temp) != mymap.end()){
                        if(mymap.find(temp)->second == -1) continue;
                        mymap[temp] ++;
                  }else{
                        mymap[temp] = 1;
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