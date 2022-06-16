#include<iostream>
#include<vector>
#include<set>
using namespace std;

int heightChecker(vector<int> &heights){
    set<int> set_;
    for(auto height : heights){
        set_.emplace(height);
    }
    auto beg = set_.begin();
    int ans = 0;
    for(auto height : heights)
    {
        /* code */
        cout << *beg << " " << height <<endl;
        if(* beg != height) ans++;
        beg++;
    }
    return ans;
    
}