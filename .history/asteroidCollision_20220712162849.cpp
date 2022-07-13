#include<iostream>
#include<vector>
#include"header.h"
#include<map>
#include<stack>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
     vector<int> ans;
      for(int i = 0; i < asteroids.size(); i++){
            bool isalive = 1;
           
            while( isalive && !ans.empty() && ans.back() > 0){
                  isalive = ans.back() < - asteroids[i];
                  if(ans.back() <= -asteroids[i]){
                        ans.pop_back();
                  }
            }
            if(isalive){
                  ans.push_back(asteroids[i]);
            }
            
      }
      return ans;
}