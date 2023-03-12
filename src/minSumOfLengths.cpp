#include<iostream>
#include<vector>
using namespace std;

int minSumOfLengths(vector<int>& arr, int target) {
      int min_len1 = INT16_MAX;
      int min_len2 = INT16_MAX;
      int left = 0, right = 0;
      int temp_sum = arr[left];
      while (left < arr.size()) {
            while(right < arr.size() && temp_sum < target) {
                  right++;
                  temp_sum+=arr[right];   
            }
            if(temp_sum == target){
                  if(max(min_len1, min_len2) > right - left + 1) {
                        min_len1 = min(min_len1, min_len2);
                        min_len2 = right - left + 1;
                  }
            }
            //cout << left <<endl;
            left = right + 1;
            ++right;
            if(left < arr.size()) temp_sum = arr[left];
      }
      return (min_len1 == INT16_MAX && min_len2 == INT16_MAX) ? -1 : min_len1 + min_len2;
}