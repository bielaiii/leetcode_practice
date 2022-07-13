#include<iostream>
#include<vector>
#include"header.h"
#include<map>
using namespace std;

bool canBreak(const vector<int> & ast){
      for(auto s : ast){
            if( !s ) return 0;
      }
      return 1;
}

vector<int> asteroidCollision(vector<int>& asteroids) {
      map<int, int> positi;
      map<int, int> negat;
      vector<int> ans;
      for(int i = 0; i < asteroids.size(); i++){
            if(asteroids[i] > 0){
                  positi[asteroids[i]] = i; 
            }else{
                  negat[asteroids[i]]  = i;
            }
      }
      while(! canBreak(asteroids)){
            int start = 
      }
      return ans;
}