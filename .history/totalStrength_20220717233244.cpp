#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int totalStrength(vector<int>& strength) {
      int sz = strength.size();
      vector<int> left (sz, -1);
      vector<int> right (sz, sz);
      stack<int> st;

      vector<long long> prefix_sum (sz, 0);
      vector<long long> sum_of_sum(sz + 2, 0);
;
      for(int i = 1; i <= sz; i++ ){
            while(!st.empty() && strength[st.top()] >= strength[i] ){
                  right[st.top()] = i;
                  st.pop();
            }
            left[i] = st.empty() ? -1 : st.top();
            st.push(strength[i]);
      }

      

      int count = 0;

      return count ;
}