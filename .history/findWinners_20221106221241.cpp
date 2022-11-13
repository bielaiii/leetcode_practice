#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      vector<int> count_win (100001, 0);
      vector<int> count_lose (100001, 0);
      for(auto match : matches){
            count_win[match[0]] ++ ;
            count_lose[match[1]] ++ ;
      }
      vector<int> win;
      vector<int> lose;
      for(int i = 0 ; i < 100001; i ++){
            if( count_win[i] ||  count_lose[i]){
                //cout << count_lose[i] <<endl;
                if(! count_lose[i]){
                  win.push_back(i);
                }
                if(count_lose[i] == 1){
                    lose.push_back(i);
                }
            }
            
      }
      return {win, lose};
}