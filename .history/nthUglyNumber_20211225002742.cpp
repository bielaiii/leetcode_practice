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
    vec.push_back(1);
    int ptr2 = 1;
    int ptr3 = 1;
    int ptr5 = 1;
    while (i < n)
    {
        int temp = min(ptr2 * 2, min(ptr3 * 3, ptr5 * 5));
        if(vec.back() != temp){
            vec[i] = temp;
        }
        if(temp == ptr2 * 2){
            ptr2 ++;
        }else if(ptr3 == ptr3 * 3){
            ptr3 ++;
        }else if(temp == ptr5 * 5){
            ptr5 ++;
        }
    }
    return vec.back();
}