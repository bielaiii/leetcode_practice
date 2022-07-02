#include<iostream>
#include<vector>
#include<set>
using namespace std;

int nextGreaterElement(int n) {
   set<int> set_;
   while(n > 0){
     set_.insert(n % 10);
     n /= 10;
   }
    int ans = 0;
    for(auto ss = set_.rbegin(); ss != set_.rend(); ss++){
        cout << *ss <<endl;
        cout << ans <<endl;
        ans = (*ss) * 10 + ans;
    }
    return ans == n? -1 : ans;
}