#include <iostream>
#include <vector>
#include "header.h"
using namespace std;

void swap(vector<int>& vec, int i, int j){
    int temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}


void Quick_sort(int left,int right,vector<int> arr){
	if(left>=right)return;
	int i,j,base,temp;
	i=left,j=right;
	base=arr[left];
	while(i<j){
		while(arr[j]>=base && i<j)j--;
		while(arr[i]<=base && i<j)i++;
		if(i<j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		} 
	}
	arr[left]=arr[i];
	arr[i]=base;
	Quick_sort(left,i-1,arr);
	Quick_sort(i+1,right,arr);
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