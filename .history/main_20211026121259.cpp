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
   /*  vector<int> num1 = {200,3,140,20,10};
    cout << (robb(num1) == 340) << endl;
     vector<int> num2 = {1,2,3,1};
    cout << (robb(num2) == 4) << endl;
    vector<int> num3 = {1,7,9,2};
    cout << (robb(num3) == 10) << endl;
    vector<int> num4 = {6,3,10,8,2,10,3,5,10,5,3};
    cout << (robb(num4) == 36) <<endl; */
    //printer(num1);
    vector<int> vec = {2,3,1,1,4};
    cout << jump_ii(vec) << endl;
    vector<int> vec1 = {2,3,1};
    cout << jump_ii(vec1) << endl;
    vector<int> vec2 = {1,2,1,1,1};
    cout << jump_ii(vec2) << endl;
    return 0;
}



