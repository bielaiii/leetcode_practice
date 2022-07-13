#include<iostream>
#include<vector>
#include"header.h"
#include<map>
#include<stack>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
      int i = 0;
      stack<int> st;
      vector<int> ans;
      while(asteroids[i] < 0) i++;
      st.push(asteroids[i]);
      for(; i < st.size(); i++){
            if(asteroids[i] < 0){
                  while(!st.empty() ){
                        if(st.top() == asteroids[i]){
                              st.pop();
                              break;
                        }else if( abs(asteroids[i]) > st.top() ){
                              st.pop();
                        }else{
                              break;
                        }
                        
                  }
                  if(st.empty()){
                        ans.push_back(st.top());
                  }
                  int temp = st.top();

            }else{
                  st.push(asteroids[i]);
            }
      }
      while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
      }
      return ans;
}