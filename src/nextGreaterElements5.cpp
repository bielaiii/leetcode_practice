#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterElements5(vector<int>& nums){
      int sz = nums.size() ;
      vector<int> ans(sz, -1);
      for(int i = 0; i < sz; i++){
            nums.push_back(nums[i]);
      }
      stack<int> st;
      for(int i = 0; i < nums.size(); i++){
            while(st.size() && nums[st.top()] < nums[i]){
                  ans[st.top() % sz] = nums[i];
                  st.pop();
            }
            st.push(i);
      }
      return ans;
}
