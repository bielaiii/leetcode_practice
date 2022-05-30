#include <iostream>
#include <vector>
#include "header.h"
using namespace std;

void swap(vector<int>& vec, int i, int j){
    int temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}


void quicksort(vector<int>& vec, int low, int high){
    if(low >= high) return;
    int i = low;
    int j = high;
    int base = vec[i];
    while(i < j){
        while(vec[i] <= base && i < j)  i ++;
        while(vec[j] >= base && j > i)  j --;
       // cout << i << " " << j <<endl;
        if(i < j) swap(vec, i, j);
    }
    swap(vec, low, j);
    printer(vec);
    quicksort(vec, low, j - 1 );
    quicksort(vec, j + 1, high );
    
}
