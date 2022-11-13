#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      vector<int> vec (10001, 0);
      vector<int> times (10001, 0);
      for(auto match : matches){
            vec[match[0]] ++;
            vec[match[1]] --;
            times[match[0]] ++;
            times[match[1]] ++;
      }
      vector<int> win;
      vector<int> lost;
      for(int i =0; i < 10001; i++ ){
            if(! times[i]) continue;
            cout << times[i] <<" " << vec[i] <<endl;
            if(vec[i] && vec[i]  == times[i]){
                  win.push_back(i);
            }else if(vec[i] == times[i] - 1 ){
                  lost.push_back(i);
            }
      }
      return {win, lost};
}