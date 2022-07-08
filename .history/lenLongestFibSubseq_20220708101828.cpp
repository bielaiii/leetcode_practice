#include<iostream>
#include<vector>
using namespace std;

int lenLongestFibSubseq(vector<int>& arr) {
    vector<int> vec(arr.size(), 0);
    int i = 0, j = 0;
    int first = arr[0];
    int second = arr[1];
    int len = 0;
    for(i = 2; i < arr.size(); i++){
        first = arr[i - 1];
        second = arr[i - 2];
        int j = i;
        int temp = 2;
        while( j < arr.size()){
            if(arr[j] == first + second){
                first = second;
                second = arr[j];
                j++;
                temp ++;
            }
        }
        len = max(len, temp);
    }
    return len;
}