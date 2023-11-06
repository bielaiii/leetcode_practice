#include<iostream>
#include<vector>
using std::vector;

namespace type_A {
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
}
namespace type_B {
    int hIndex(vector<int>& citations) {
        int l = 0;
        int r =citations.size();
        while (l < r) {
            int mid = (r - l) / 2 + l;
            if (citations[mid] >= citations.size() - mid) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return citations.size() - l;
    }
}




/* 
0 1 3 5 6
3
 */