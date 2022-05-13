#include <iostream>
#include <vector>
using namespace std;


void quicksort(vector<int>& vec, int low, int high){
    if(low == high) return;
    int i = low;
    int j = high;
    while(i < j){
        while(vec[i] <= vec[i] && i < j){
            i ++;
        }
        while(vec[j] > vec[i] && j > i){
            j --;
        }
        cout << i << " " << j <<endl;
        int temp = vec[i];
        vec[i]= vec[j];
        vec[j] = temp;
    }
    quicksort(vec, low, j - 1 );
    quicksort(vec, j + 1, high );
}