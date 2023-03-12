#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

bool isGoodArray(vector<int>& nums)
{
      int divisor = nums[0];
      for (int num : nums){
            divisor = gcd(num, divisor);
            if (divisor == 1) {
                  break;
            }
      }
      return divisor == 1;
}