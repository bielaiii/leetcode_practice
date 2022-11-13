#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      vector<int> vec (10001, 0);
      vector<int> times (10001, 0);
      vector<int> count_win (10001, 0);
      vector<int> count_lose (10001, 0);
      for(auto match : matches){
            count_win[match[0]] ++ ;
            count_lose[match[1]] -- ;
      }
      vector<int> win;
      vector<int> lose;
      for(int i = 0 ; i < 10001; i ++){
            if(! count_win[i] && ! count_lose[i]) continue;
            if(! count_lose[i]){
                  win.push_back(i);
            }else if(count_lose[i] == 1){
                  lose.push_back(i);
            }
      }
      return {win, lose};
}