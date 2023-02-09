//#include"header.h"
#include <cassert>
#include"print_1d_array.cpp"
#include<iostream>

using namespace std;

//#define TRANSALTE_TIME(s) (stoi(s.substr(0,2)) * 100 + stoi(s.substr(2)))


int main(void){
    string num1 = "1+-2i";
    int i = 0;
    while(i < num1.size() && num1[i] != '+') i++;
    int real_num1 = stoi(num1.substr(0,i));
    int real_num2 = stoi(num1.substr(i+1, num1.size() - i - 1));
    cout <<real_num2 <<endl;//
    return 0;
}
