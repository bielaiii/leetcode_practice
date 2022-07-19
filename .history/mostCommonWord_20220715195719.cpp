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
                        mymap[temp] ++
                  }else{
                        mymap[temp] = 1;
                  }
            }
      }
      sort(mymap.begin(), mymap.end(), [](pair<string,int> map1, pair<string, int> map2){
            return map1.second > map2.second;
      });
      return mymap.begin()->first;
}