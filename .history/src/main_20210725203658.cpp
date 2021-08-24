#include "threesum.h"
#include <iostream>
#include <vector>
using namespace std;



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
            cout << answer[d][f] << "";
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
            cout << answer[d][f] << "";
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
            cout << answer[d][f] << "";
        }
        cout << endl;
    }

    
   cout << "hello, world!!!!"<<endl;
    return 0;
}