#include<iostream>
#include<vector>
#include"header.h"
#include<map>
#include<stack>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
     vector<int> ans;
      stack<int> st;
      for(int i = 0; i < asteroids.size(); i++){
            bool isalive = 1;
            if(asteroids[i] > 0){
                  st.push(asteroids[i]);
                  continue;
            }
            while(st.empty() && - st.top() < asteroids[i]){
                  st.pop();
            }
            if(st.empty()){
                  ans.push_back(asteroids[i]);
            }else if(st.top() == - asteroids[i]){
                  st.pop();
            }
      }
      return ans;
}