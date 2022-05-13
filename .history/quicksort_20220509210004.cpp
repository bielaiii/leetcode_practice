#include <iostream>
#include <vector>
#include "header.h"
using namespace std;

int Paritition(vector<int> &A, int low, int high) {
   int pivot = A[low];
   while (low < high) {
     while (low < high && A[high] >= pivot) {
       --high;
     }
     A[low] = A[high];
     while (low < high && A[low] <= pivot) {
       ++low;
     }
     A[high] = A[low];
   }
   A[low] = pivot;
   return low;
 }

 void QuickSort(vector<int> &A, int low, int high) //快排母函数
 {
   if (low < high) {
     int pivot = Paritition(A, low, high);
     QuickSort(A, low, pivot - 1);
     QuickSort(A, pivot + 1, high);
   }
 }



/* void quicksort(vector<int>& vec, int low, int high){
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
   // swap(vec, low, j);
   cout << i << " " << j <<endl;
   vec[low] = vec[i];
   vec[i] = base;
    printer(vec);
    quicksort(vec, low, i - 1 );
    quicksort(vec, i + 1, high );
    
}
 */