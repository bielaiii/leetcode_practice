#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/* 
bool backtracking(vector<vector<string>> &tickets, vector<bool> & visited, int sum){
        if(sum >= visited.size()){
            for(int i = 0; i < visited.size(); i++){
                if(visited[i] == 0) return 0;
            }
            return 1;
        }
        for(int i = 0 ; i < tickets.size(); i++){
            if(visited[i] == 0 &&   )
        }
    }

vector<string> findItinerary(vector<vector<string>>& tickets) {
      unordered_map<string, string> mp;
      for(auto ticket : tickets){
      mp[ticket[0]] = ticket[1];
      }
      vector<string> vt;
      string temp = "JFK";
      while(mp.find(temp) != mp.end()){
      vt.push_back(temp);
      temp = mp[temp];
      cout << temp <<endl;
      }
      return vt;
} */