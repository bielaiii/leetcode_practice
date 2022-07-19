#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int totalStrength(vector<int>& strength) {
      const long long mod = 1e9 + 7;
      int sz = strength.size();
      vector<long long> left (sz, -1);
      vector<long long> right (sz, sz);
      vector<long long> acc_left(sz, 0);
      vector<long long> acc_right(sz, 0);

      stack<int> st;

     
     

      for(int i = 1; i <= sz; i++ ){
            while(!st.empty() && strength[st.top()] >= strength[i] ){
                  right[st.top()] = i;
                  st.pop();
            }
            left[i] = st.empty() ? -1 : st.top();
            st.push(strength[i]);
      }
      vector<int> sum =  strength;
      for(int i = 1; i < sz; i++){
            sum[i] = strength[i] + sum[i-1];
      }
      vector<int> ssum = sum;
      for(int i = 1; i < sz; i++){
            ssum[i] = sum[i] + ssum[i-1];
      }



      int count = 0;

      return count ;
}