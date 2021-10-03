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
    vector<int> vec2 = {10,186,-49,176,118,167,-61,189,6,-24,7,-93,71,112,187,45,-36,38,82,108,-46,112,51,165,-37,159,1,-53,7,38,90,181,-23,91,-42,172,-95,130,84,149,-47,68,126,-67,175,22,121,131,84,114,60,64,182,-75,-17,-71,69,-92,103,-91,-91,86,126,166,33,-36,-80,-37,118,-80,-18,127,36,-71,-82,-82,144,12,57,149,71,91,-83,-100,-30,45,186,16,-51,-72,-83,107,140,-97,-93,1,12,189,-61,-50,180,98,96,-29,193,167,57,-45,16,6,-76,4,109,-23,22,144,190,-97,193,-51,-99,-79,-47,142,107,175,109,121,190,90,34,32,63,-24,41,-53,41,89,130,-18,-99,103,86,127,-30,102,32,-49,181,-60,114,60,-29,182,-75,168,96,51,33,142,108,69,10,-57,166,48,82,161,-17,-50,102,63,-45,140,180,176,-95,36,-46,168,187,161,-72,-100,-42,165,-76,-67,89,159,64,34,98,4,-60,172,-79,68,48,131,-57};
    cout << singleNumber(vec2 == )
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



