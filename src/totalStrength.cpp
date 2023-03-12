#include<iostream>
#include<vector>
#include<stack>
using namespace std;


const long long mod = 1e9 + 7;

int give_sum(long long l ,long long r,const vector<int> &ssum){
      if(r < 0) return 0;
      if(l < 0) return ssum[r];
      return (ssum[r] - ssum[l] + mod) % mod;
}

int totalStrength(vector<int>& strength) {
      int sz = strength.size();
      vector<int> left (sz, -1);
      vector<int> right (sz ,sz);
      stack<int> st;
      for(int i = 0; i < sz; i++){
            while(! st.empty() && strength[st.top()] > strength[i]){
                  right[st.top()] = i;
                  st.pop();
            }
            if(st.size()) left[i] = st.top();
            st.push(i);
      }
      vector<int> sum = strength;
      for(int i =1; i < sz; i++){
            sum[i] = sum[i-1] + sum[i];
      }
      vector<int> ssum = sum;
      for(int i= 1; i < sz; i++){
            ssum[i] = ssum[i-1] + ssum[i];
      }
      int ans = 0;
      for(int i = 0 ; i < sz; i++){
            int l = left[i ] + 1, r = right[i] - 1;
            int sleft = 1ll * give_sum(l - 2, i - 1, ssum) * (r - i + 1);
            int sright = 1ll * give_sum(i -1 ,r , ssum) * (i - l + 1);
            ans += 1ll * strength[i] * (((sright - sleft) + mod ) % mod) % mod;
            ans %= mod;
      }
      return ans;
}