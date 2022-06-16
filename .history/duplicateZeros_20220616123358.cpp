#include<iostream>
#include<vector>
#include"header.h"
using namespace std;

void duplicateZeros(vector<int>& arr) {
    for(int i = 0; i < arr.size();){
        if(arr[i] == 0){
            int right = arr.size() - 1;
            while(right > i + 1){
                arr[right] = arr[right - 1];
                right --;
            }
            arr[i + 1] = 0;
            printer(arr);
            i += 2;
        }else{
            i ++;
        }
    }
}