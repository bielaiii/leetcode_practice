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
    vector<int> vec(n,0);
    vec[0] = 1;
    int ptr2 = 0;
    int ptr3 = 0;
    int ptr5 = 0;
    while (i < n)
    {
        int temp = min(vec[ptr2] * 2, min(vec[ptr3] * 3, vec[ptr5] * 5));
        if(vec[i] != temp){
            vec[i] = temp;
            i++;
        }
        while(temp == ptr2 * 2){
            ptr2 ++;}
        while(temp == ptr3 * 3){
            ptr3 ++;}
        while(temp == ptr5 * 5){
            ptr5 ++;
        }
        //i ++;
    }
    printer(vec);
    return vec.back();
}