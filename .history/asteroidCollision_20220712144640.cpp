#include<iostream>
#include<vector>
#include"header.h"
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
      vector<int> ans;
      int i = 0;
      while( i < asteroids.size() - 1){
            int flag  = asteroids[i] < 0? -1 : 1;
            int next_flag = asteroids[i + 1] < 0 ? -1 : 1;
            if(next_flag == flag){
                  i ++;
                  continue;
            }else{
                  if(next)
            }
      }
   
      return ans;
}