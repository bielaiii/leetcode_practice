#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
using namespace std;

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}


int main(void){
    
    vector<int> vec1 = {2,3,0,1,4};
    vector<int> vec2 = {2,3,1,1,4};
    vector<int> vec3 = {2,1};
    vector<int> vec4 = {1,2,3};
    vector<int> vec5 = {3,2,1};
    
    cout <<"ans "<< (jump_ii(vec1) == 2) <<endl;
    cout <<"ans "<< (jump_ii(vec2) == 2) <<endl;
    cout <<"ans "<< (jump_ii(vec3) == 1) <<endl;
    cout <<"ans "<< (jump_ii(vec4) == 2) <<endl;
    cout <<"ans "<< (jump_ii(vec5) == 1) <<endl;



    return 0;
}



