#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> numberOfPairs(vector<int>& nums)
{
      map<int, int> mp;
      for (int num : nums) {
            mp[num]++;
      }
      int ct = 0;
      for (auto & it : mp) {
            ct += it.second / 2;
            it.second = it.second % 2;
      }
      int remain = 0;
      for (auto it : mp) {
            remain += it.second;
      }
      return {ct, remain};
}

namespace Temp {
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans = 0;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] % nums2[j] * k == 0) {
                    ans++;
                }
            }
        
        }
        return ans;
    }
}

int main()
{
    using namespace Temp;
    vector<int> nums1 {1,3 ,4};
    vector<int> nums2 {1,3 ,4};
    int k = 1;
    cout << numberOfPairs(nums1, nums2, k)<<"\n";
    nums1 = {1,2 ,4, 12};
    nums2 = {2, 4};
    k = 3;
    cout << numberOfPairs(nums1, nums2, k)<<"\n";
    return 0;
}