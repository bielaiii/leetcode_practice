#include<iostream>
#include<vector>
#include"header.h"
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
      vector<int> ans;
      for(int i = 0; i < asteroids.size(); i++){
            int flag = asteroids[i] < 0 ? -1 : 1;
            for(int j = i; j >= 0 && j < asteroids.size() ; asteroids[i] < 0? j -- : j ++){
                  int tmp_flag = asteroids[j] < 0 ? -1 : 1;
                  if(tmp_flag != flag){
                        asteroids[abs(asteroids[j]) > abs(asteroids[i]) ? j : i] = 0;
                  }     
                  if(! asteroids[i] ) break;
            }
      }
      printer(asteroids);
      for(auto asteroid: asteroids){
            if(asteroid != 0){
                  ans.push_back(asteroid);
            }
      }
      return ans;
}