#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterElements4(vector<int>& nums) {
      vector<int> vec(nums.size(), 0);
      stack<int> st;
      for(int i = 0; i < nums.size(); i++){
            int tempi = i;
            st.push(nums[i]);
            while(st.top() <= nums[i]){
                  tempi = (tempi + 1) % nums.size();
                  if( tempi == i){
                        vec[i] = -1;
                        break;
                  }
                  st.push(nums[tempi]);
            }
            if(vec[i] == 0) vec[i] = st.top();
            while(st.size()) st.pop();
      }
      return vec;
}