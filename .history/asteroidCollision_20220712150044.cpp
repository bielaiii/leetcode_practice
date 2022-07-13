#include<iostream>
#include<vector>
#include"header.h"
using namespace std;

bool canBreak(const vector<int> & ast){
      for(auto s : ast){
            if( !s ) return 0;
      }
      return 1;
}

vector<int> asteroidCollision(vector<int>& asteroids) {
      vector<int> ans;
      vector<int> visited(asteroids.size(), 0);
      int i = 0;
      int step ;
      while( i < asteroids.size()){
            if( !asteroids[i] ){
                  i += step;
                  continue;
            }else{
                  if
            }
      }
   
      return ans;
}