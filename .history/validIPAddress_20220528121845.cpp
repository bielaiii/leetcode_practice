#include<iostream>
#include<vector>
#include<sstream>
using namespace std;


string validIPAddress(string queryIP) {
    string deli = "";
    int start = 0;
    int end = 0;
    string temp = "";
    string ret = "Neither";
    stringstream ss;
    int num = 0;
    if(queryIP.find(",") != -1){
        //deli = ",";
        while((end = queryIP.find(",")) != -1){
            ss  << queryIP.substr(start, end - start);
            ss >> num;
            if(num < 0 || num > 255) return "Neither";
            start = end +
        }
        ret = "IPV4";
    }else if( queryIP.find(":") != -1){
       // deli = ":";
    }
    return ret;
}