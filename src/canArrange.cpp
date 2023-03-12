#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;




bool canArrange(vector<int>& arr, int k) {
    vector<int> myarr(k, 0);
    for(int i = 0; i < arr.size(); i++){
        int temp = ((arr[i]%k)+k)%k;
        myarr[temp]++;
    }
    int end = k-1;
    int half = end;
    int i = 1;
    while(i < end){
        if(myarr[i] == myarr[end]){
            end --;
            i++;
        }else{
            return false;
        }
    }
    return !(myarr[0]%2);
}