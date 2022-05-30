#include<iostream>
#include<vector>
#include<set>
using namespace std;


 vector<int> func(vector<int> vec1, vector<int> vec2){
     vector<int> ans;
     for(int i =0,j = 0; i < vec1.size() && j < vec2.size(); ){
        if(vec1[i] == vec2[j]){
            ans.push_back(vec1[i]);
            i ++; j++;
        }else{
            i++;
        }
    }
     return ans;
 }



 vector<int> intersectii(vector<int>& nums1, vector<int>& nums2){
    vector<int> ans;
    if(nums1.size() >= nums2.size()){
        ans = func(nums1, nums2);
    }else{
        ans = func(nums2, nums1);
    }
    return ans;
 }






/* vector<int> intersectii(vector<int>& nums1, vector<int>& nums2) {
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
    vector<int> short_;//((nums1.size() < nums2.size() ? nums1 : nums2));
    short_ = set1.size() < set2.size() ? nums1 : nums2;
    vector<int> ret;
    for(auto &i : short_){
        if(ans.count(i)){
            ret.push_back(i);
            //cout << i <<endl;
        }
    }

    return  ret;
} */