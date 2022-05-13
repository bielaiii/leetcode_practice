#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;


template<class T>
void printer(vector<T> const & vec){
    for(auto &it : vec){
        cout << it << " -> ";
    }
    cout << endl;
}

template<class T>
void printer_two(vector<vector<T>> const & vec){
   for(int i = 0; i < vec.size(); i++){
       for(int r = 0; r < vec[0].size(); r++){
           cout <<vec[i][r] << " ";
       }
       cout << endl;
   }
    cout << endl;
}


/*
    string s = "who love solo";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'A'||
        s[i] == 'i' || s[i] == 'I'||
        s[i] == 'e' || s[i] == 'E'||
        s[i] == 'o' || s[i] == 'O'||
        s[i] == 'u' || s[i] == 'U'
        ){
            if(s[i] >= 'a' && s[i] <= 'z')
                s[i]  -= 'a' - 'A';
        }else{
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 'a' - 'A';
            }
        }
        cout <<s << endl;
    }
    cout << s << endl;
*/


int main(void){
    //vector<vector<int>> vec (9, vector<int> (3, 0));
    //printer_two(vec);

    unordered_map<string, int> map_;
    map_emplace()
    return 0;
}



