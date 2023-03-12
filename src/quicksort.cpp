#include <iostream>
#include <vector>
#include "header.h"
//#include"print_1d_array.cpp"
using namespace std;


/* int partition_r(vector<int> &vec, int low, int high){
    int base = vec[low];
    int i = low, j = high;
    while( i  < j){
        while(i < j && vec[j] >= base) j--;
        vec[i] = vec[j];
        while(i < j && vec[i] <= base) i++;
        vec[j] = vec[i];
       // swap(vec, i, j);
    }
    
    vec[i] = base;
    for(auto it : vec){
        cout << it <<" ";
    }
    cout << endl;
    return i ;
}


void QuickSort_r(vector<int>& vec, int low, int high){
    if(low < high){
        int pivot = partition_r(vec, low, high);
        QuickSort_r(vec, low, pivot - 1);
        QuickSort_r(vec, pivot + 1, high);
    }
} */

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