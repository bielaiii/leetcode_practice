#include<iostream>
#include<vector>
using namespace std;

string printBin(double num) {
    double start = 0.5;
    string str = "0.";
    while (num and str.length() <= 8) {
        int temp = num / start;
        
        str += temp ? "1" : "0";
        num = num - temp * start;
        start /= 2;
    }
    return num ? "ERROR" : str;
}