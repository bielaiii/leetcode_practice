#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      vector<int> vec (matches.size(), 0);
      for(auto match : matches){
            vec[match[0]] ++;
            vec[match[1]] --;
      }
}