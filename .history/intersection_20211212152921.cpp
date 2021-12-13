#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> map1;
    unordered_map<int,int> map2;
    for(int i = 0; i < nums1.size(); i++){
        map1.insert(nums1[i]);
    }

}