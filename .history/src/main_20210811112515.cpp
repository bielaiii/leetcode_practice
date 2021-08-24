#include "threesum.h"
#include <iostream>
#include <vector>
using namespace std;


/*
int main(){
    
    printer();
    vector<int> myvec;
    vector< vector <int> > answer;
    
    int arr[]={-1,0,1,2,-1,-4};
    for(int i = 0; i < 6; i++){
        myvec.push_back(arr[i]);
    }
    answer = threeSum(myvec);
    cout << "result" <<endl;
    for(int d = 0; d < answer.size(); d++){
        for(int f = 0; f < answer[d].size(); f++){
            cout << answer[d][f] << " ";
        }
        cout << endl;
    }
    
    int arr1[]={1,-1,-1,0};
    myvec.clear();
    for(int i = 0; i < 4; i++){
        myvec.push_back(arr1[i]);
    }
    answer.clear();
    answer = threeSum(myvec);
    cout << "result" <<endl;
    for(int d = 0; d < answer.size(); d++){
        for(int f = 0; f < answer[d].size(); f++){
            cout << answer[d][f] << " ";
        }
        cout << endl;
    }


    int arr2[]={-1,0,1,2,-1,-4,-2,-3,3,0,4};
    myvec.clear();
    for(int i = 0; i < 11; i++){
        myvec.push_back(arr2[i]);
    }
    answer.clear();
    answer = threeSum(myvec);
    cout << "result" <<endl;
    for(int d = 0; d < answer.size(); d++){
        for(int f = 0; f < answer[d].size(); f++){
            cout << answer[d][f] << " ";
        }
        cout << endl;
    }

    
  // cout << "hello, world!!!!"<<endl;
    return 0;
}
*/
void sort(int *a ,int len){
    int i ,j,t;
    for(i = 0;i < len -1; ++i){
        for(j=0; j < len -1 - i; ++j){
            if(a[j]> a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1]=t;
            }
        }
    }
}

// Driver Code
int main()
{
    /*
    int arr[] = { 1, 2, 3, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, 1, n - 1);
     */
    //count(3);
    int arr[] = { 1, 2, 3, 4, 3 };
    sort(&arr, 6);
}