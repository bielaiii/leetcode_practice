#include<iostream>
using namespace std;

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
