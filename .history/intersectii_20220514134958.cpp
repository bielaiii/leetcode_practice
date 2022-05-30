#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> intersectii(vector<int>& nums1, vector<int>& nums2) {
    set<int> set1;
    set<int> set2;
    for(int i = 0; i < nums1.size(); i++){
        if(! set1.count(nums1[i])){
            set1.insert(nums1[i]);
        }
    }
    for(int i = 0; i < nums2.size(); i++){
        if(! set2.count(nums2[i])){
            set2.insert(nums2[i]);
        }
    }
    set<int> ans;
    for(auto &i : set1){
        for(auto &j : set2){
            if(i == j){
                ans.insert(i);
            }
        }
    }

    
    vector<int> ret;
    for(auto &i : nums1){
        if(ans.count(i)){
            ret.push_back(i);
            cout << i <<endl;
        }
    }

    return  ret;
}