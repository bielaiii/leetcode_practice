#include <iostream>
#include <vector>
using namespace std;


void quicksort(vector<int>& vec, int low, int high){
    if(low == high) return;
    int i = low,j = high;
    while(i != j){
        while(vec[i] < vec[i] && i < high){
            i ++;
        }
        while(vec[j] > vec[i] && j > 0){
            j --;
        }
        int temp = vec[i];
        vec[i]= vec[j];
        vec[j] = temp;
    }
    quicksort(vec, )
}