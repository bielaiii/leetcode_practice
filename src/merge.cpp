#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int> vec_;
      for(int i = 0, j = 0; i < m || j < n; ){
            if(i >= m){
                  vec_.push_back(nums2[j]);
                  j ++;
            }else if(j >= n){
                  vec_.push_back(nums1[i]);
                  i ++;
            }else if(nums1[i] <= nums2[j]){
                  vec_.push_back(nums1[i]);
                  i++;
            }else{
                  vec_.push_back(nums2[j]);
                  j++;
                  
            }
      }
      nums1.swap(vec_);
}

namespace ver{
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int> &t1, const vector<int> &t2) {
            return t1[0] < t2[0];
        });
        vector<vector<int>> ans{intervals[0]};
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= ans.back()[1]) {
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            } else {
                
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    };
}

int main() 
{
    vector<vector<int>> intervals {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = ver::merge(intervals);
    for (auto c : ans) {
        copy(c.begin(), c.end(), ostream_iterator<int>(cout, ","));
        cout << "\n";
    }
    intervals = {{1, 4}, {4, 5}};
    ans = ver::merge(intervals);
    for (auto c : ans) {
        copy(c.begin(), c.end(), ostream_iterator<int>(cout, ","));
        cout << "\n";
    }

    return 0;
}