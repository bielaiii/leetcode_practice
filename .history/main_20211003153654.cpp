#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
using namespace std;

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
        for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d][f] << " ";
        }
        cout << endl;
    }
    cout << "------------------"<<endl;
}


int main(void){
    vector<int> vec= {2,2,1};
    cout << singleNumber(vec) <<endl;
    vector<int> vec1= {4,1,2,1,2};
    cout << singleNumber(vec1) <<endl;
/* 
    int arr[3][3] = {{2,1,1},{1,1,0},{0,1,1}};
    vector<vector<int>> myvec;
    for(int i = 0; i < 3; i++){
        vector<int> temp;
        for(int e = 0; e < 3; e++){
            temp.push_back(arr[i][e]);
        }
        myvec.push_back(temp);
        temp.clear();
    } */
    /* vector<vector<int>> vec{{0,0,0},{0,1,0},{0,0,0}};
    vec = updateMatrix(vec);
    printer(vec);
    vector<vector<int>> vec1{{0,0,0}
                            ,{0,1,0}
                            ,{1,1,1}};
    vec = updateMatrix(vec1);
    printer(vec); */
    //orangesRotting(myvec);
    //cout << orangesRotting(myvec) << endl;
    //cout << "hello, world" << endl;

    /* vector<int> vec;

    int arr[]={1,2,3,4,5,10,6,7,8,9};
    for(int d = 0; d < 10; d++){
        vec.push_back(arr[d]);
    }
    cout << canArrange(vec,5)<<endl;
    int arr1[] = {-1,1,-2,2,-3,3,-4,4};
    vec.clear();
    for(int d = 0; d < 8; d++){
        vec.push_back(arr1[d]);
    }
    cout << canArrange(vec,3)<<endl;
    //permute(vec);
    int arr2[] = {-1,-1,-1,-1,2,2,-2,-2};
    vec.clear();
    for(int d = 0; d < 8; d++){
        vec.push_back(arr2[d]);
    }
    cout << canArrange(vec,3)<<endl; */
    
    return 0;
}



