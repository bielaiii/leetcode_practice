#include"header.h"
#include <cassert>
//#include"print_1d_array.cpp"
//#include"print_2d_array.cpp"
//#include<iostream>
#include<queue>

using namespace std;

//#define TRANSALTE_TIME(s) (stoi(s.substr(0,2)) * 100 + stoi(s.substr(2)))
template<typename T>
void print_2d_array(T toprint){
    cout << "--------------------" <<endl;
    for(int e = 0;e < toprint.size(); e++){
        for(int d =0; d < toprint[e].size(); d++){
            if(d < toprint[e].size() - 1)
                cout << toprint[e][d] << " -> ";
            else
                cout << toprint[e][d] ;
        }
        cout << endl;
    }
    cout << "--------------------" <<endl;
    
}




int main(void){
    //print_1d_array(circularPermutation(3,2));
    vector<vector<int>> vt1 = {{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
    vector<vector<int>> ans = largestLocal(vt1);
    print_2d_array(ans);
    return 0;
}
