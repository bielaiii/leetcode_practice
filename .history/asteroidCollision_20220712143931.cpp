#include<iostream>
#include<vector>
#include"header.h"
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
      vector<int> ans;
      for(int i = 0; i < asteroids.size(); i++){
            int flag = asteroids[i] < 0 ? -1 : 1;
            for(int j = i; j >= 0 && j < asteroids.size() ; asteroids[i] < 0? j -- : j ++){
                  if(! asteroids[j] ) continue;
                  int tmp_flag = asteroids[j] < 0 ? -1 : 1;
                  if(tmp_flag != flag){
                        
                        if(abs(asteroids[i]) == abs(asteroids[j])){
                              asteroids[i] = 0;
                              asteroids[j] = 0;
                        }else if(abs(asteroids[i]) < abs(asteroids[j])){
                              asteroids[i] = 0;
                        }else{
                              asteroids[j] = 0;
                        }
                      //  asteroids[abs(asteroids[j]) > abs(asteroids[i]) ? j : i] = 0;
                  }     
                  if(! asteroids[i] ) break;
            }
      }
      return ans;
}