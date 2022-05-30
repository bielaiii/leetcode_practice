#include<iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int> &vec){
    for(int i = 1; i < vec.size(); i++){
        int j = i - 1;
        int key = vec[i];
        //ascending order
        while( j > 0 && vec[j] > key){
            vec[j+1] = vec[j];
            j --;
        }      
        vec[j+1] = key;
    }
    
}