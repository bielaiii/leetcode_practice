#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d){
      sort(arr1.begin(), arr1.end());
      sort(arr2.begin(), arr2.end());
      int l = 0 , r = arr1.size() - 1;
      while(l <= r){
            int mid = l + (r -l ) / 2;
            if(abs(arr1[mid] - arr2[0]) > d && abs(arr1[mid] - arr2.back()) > d){
                  r = mid + 1;
            }else if(abs(arr1[mid] - arr2[0]) <= d && abs(arr1[mid] - arr2.back()) <= d){
                  l = mid - 1 ;
            }
      }
      return l;
}