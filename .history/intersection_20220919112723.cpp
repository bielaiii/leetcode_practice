#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;



vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> vec;
    unordered_set<int> st2;
    unordered_set<int> st1(nums1.begin(), nums1.end());
    for(int num: nums2){
        if(st1.count(num)){
            vec.push_back(num);
        }
    }
    return vec;
}