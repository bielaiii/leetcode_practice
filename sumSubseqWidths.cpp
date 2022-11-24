#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* void rec_sumSubseqWidth(vector<int> & nums, int & sum ){
      if(nums.size() <= 1){
            return ;
      }
      sum += nums.back() - nums.front();
      sum %= (int)1e9+7;

      for(int i = 0; i < nums.size(); i++){
            vector<int> temp = nums;
            temp.erase(temp.begin() + i);
            rec_sumSubseqWidth(temp, sum);
      }
}
 */

int sumSubseqWidths(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      long long res = 0, mod = 1e9+7;
      long long x = nums[0], y = 2;
      for(int i = 1; i < nums.size(); i++){
            res = (res + nums[i] * (y-1)-x ) % mod;
            x = (x * 2 + nums[i]) % mod;
            y = y * 2 % mod;
      }
      return res % mod;
}