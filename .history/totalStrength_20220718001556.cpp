#include<iostream>
#include<vector>
#include<stack>
using namespace std;


const long long mod = 1e9 + 7;

int give_sum(int l ,int r,const vector<int> &ssum){
      if(r < 0) return 0;
      if(l < 0) return ssum[r];
      return (ssum[r] - ssum[l] + mod) % mod;
}

int totalStrength(vector<int>& strength) {
      
      int sz = strength.size();
      vector<long long> left (sz, -1);
      vector<long long> right (sz, sz);
      vector<long long> acc_left(sz, 0);
      vector<long long> acc_right(sz, 0);

      stack<int> st;

     int res = 0;
     

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
            sum[i] = (strength[i] + sum[i-1]) % mod;
      }
      vector<int> ssum = sum;
      for(int i = 1; i < sz; i++){
            ssum[i] = (sum[i] + ssum[i-1]) % mod;
      }

     
      
      for(int i = 0; i < sz; i++){
            int l = left[i ] + 1, r = right[i] - 1;
            int sleft = 1 * give_sum(l - 2, i - 1, ssum) * (r - i + 1) % mod;
            int sright = 1 * give_sum(i -1, r, ssum) * (r - l + 1) % mod;
            res += (long long)strength[i] * (((sright - sleft) + mod) % mod) % mod;
            res %= mod;
      }

      return res ;
}