#include<iostream>
#include<vector>
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


int nthUglyNumber(int n ){
    if(n == 1) return 1;
    int i = 1;
    vector<int> vec;
    vec.push_back(1);
    while(vec.size() <n){
        if(!(i % 2) ){
            vec.push_back(i);
        }else if(!(i % 3) ){
            vec.push_back(i);
        }else if(!(i % 5) ){
            vec.push_back(i);
        }
        i++;
    }
    printer(vec);
    return vec.back();
}