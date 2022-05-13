#include <iostream>
#include <vector>
#include "header.h"
using namespace std;


void swap(vector<int> &vec, int low, int high){
    int temp = vec[low];
    vec[low] = vec[high];
    vec[high] = temp;
}

int partition(vector<int> &vec, int low, int high){
    int base = vec[low];
    int i = low, j = high;
    while( i  < j){
        while(i < j && vec[i] <= base) i++;
        while(i < j && vec[j] >= base) j--;
        swap(vec, i, j);
    }
    
    return i ;
}


void QuickSort(vector<int>& vec, int low, int high){
    if(low < high){
        int pivot = partition(vec, low, high);
        QuickSort(vec, low, pivot - 1);
        QuickSort(vec, pivot + 1, high);
    }
}

/* void QuickSort(vector<int>& vec, int low, int high){
    if(low >= high) return;
    int i = low;
    int j = high;
    int base = vec[i];
    while(i < j){
        while(j > i && vec[j] >= base)  j --;
        //vec[i] = vec[j];
        while(i < j && vec[i] <= base)  i ++;
        //vec[j] = vec[i];
        swap(vec, i, j);
    }
    printer(vec);
    QuickSort(vec, low, i - 1 );
    QuickSort(vec, i + 1, high );
    
}
 */