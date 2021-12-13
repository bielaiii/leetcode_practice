#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int max_1 = 0;
    int max_2 = 0;
    for(int i = 0; i < nums1.size(); i++)
        max_1 = max(max_1, nums1[i]);
    for(int i = 0; i < nums2.size(); i++)
        max_2 = max(max_2, nums2[i]);
    int size=  max(max_1, max_2) + 1;
    vector<int> vec1 (size, 0);
    vector<int> vec2 (size, 0);
    
    for(int i = 0; i < nums1.size(); i++)
        vec1[nums1[i]] ++;
    for(int i = 0; i < nums2.size(); i++)
        vec2[nums2[i]] ++;
    vector<int> vec;
    printer(vec1);
    printer(vec2);
    for(int i = 0; i < size; i++){
        if(vec1[i] && vec2[i]) vec.push_back(i);
    }
    return vec;
}