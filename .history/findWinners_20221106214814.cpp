#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      vector<int> vec (matches.size(), 0);
      for(auto match : matches){
            vec[match[0]] ++;
            vec[match[1]] --;
      }
      vector<int> win;
      vector<int> lost;
      for(auto i : vec){
            if(i > 0){
                  win.push_back(i);
            }else if(i == -1){
                  lost.push_back(i);
            }
      }
      return {win, lost};
}