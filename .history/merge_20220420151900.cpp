#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      if(m == 0){
            for(auto i = nums1.begin(); i != nums1.end(); i ++){
                  if(*i == 0) nums1.erase(i);
            }
            return;
      }else if(n == 0){
            for(auto i = nums1.begin(); i != nums1.end(); i ++){
                  if(*i == 0) nums1.erase(i);
            }
            return;
      }
      int i = 0;
      int j = 0;
      for(; i < nums1.)
}