#include<iostream>
#include<vector>
using namespace std;

int hIndex(vector<int>& citations) {
      int l = 0, r = citations.size() - 1;
      int sz = citations.size();
      while(l <= r){
            int mid = l + (r -l) / 2;
            if(sz - mid <= citations[mid] ){
                  r = mid - 1;
            }else{
                  l = mid + 1;
            }
      }
      return sz - l;
}

/* 
0 1 3 5 6
3
 */