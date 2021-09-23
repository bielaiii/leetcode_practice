#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
using namespace std;


void printer(vector<vector <int> > toprint){
    for(int d =0; d < toprint.size(); d++){
        for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d][f] << " ";
        }
        cout << endl;
    }
    cout << "------------------"<<endl;
}

/* int main(void){
    vector<int> vec;
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
    cout << canArrange(vec,3)<<endl;
    
    return 0;
}
 */

int main(void){
    while(1){
        //std::cout << *my_maze << std::endl;
        int ch = getchar();
        ch = getchar();
        switch (!= 0X)
        {
        case 72: //up
            cout <<"up"<<endl;
            break;
        case 80: //down
            cout <<"down"<<endl;
            break;
        case 75: //left
            cout <<"left"<<endl;
            break;
        case 77: //right
            cout <<"right"<<endl;
            break;
        default:
            cout <<"none"<<endl;
            break;
        }
    }
    return 0;
}


