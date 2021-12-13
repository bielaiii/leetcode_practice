#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> map1;
    unordered_map<int,int> map2;
    for(int i = 0; i < nums1.size(); i++){
        map1.insert(pair<int,int>(nums1[i],-1));
    }
    for(int i = 0; i < nums2.size(); i++){
        map2.insert(pair<int,int>(nums2[i],-1));
    }
    int length = max(nums1.size(), nums2.size());
    vector<int> ret;
    for(int i = 0; i < length; i++){
        if(map1.find(nums1[i]) != map1.end() && map2.find(nums1[i]) != map2.end()){
            ret.push_back(nums1[i]);
        } 
    }
    return ret;
}