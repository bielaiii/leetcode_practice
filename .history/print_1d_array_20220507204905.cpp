#include <iostream>
using namespace std;

template<typename T>
void printer(T toprint){
    cout << "------------------"<<endl;
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d];
            if(d == toprint.size() - 1){
                cout << endl;
            }else{
                cout << " -> ";
            }
             
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}

template<typename T>
void printer2(T toprint){
    for(int e = 0;e < toprint.size(); e++){
        for(int d =0; d < toprint[e].size(); d++){
            cout << toprint[e][d] << " ";
        }
        cout << endl;
    }
    
        cout << endl;
}
