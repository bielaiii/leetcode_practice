#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int totalStrength(vector<int>& strength) {
      int sz = strength.size();
      vector<long long> left (sz, -1);
      vector<long long> right (sz, sz);
      vector<long long> acc_left(sz, 0);
      vector<long long> acc_right(sz, 0);

      stack<int> st;
      
      vector<long long> prefix_sum (sz, 0);
      vector<long long> sum_of_sum(sz + 2, 0);

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