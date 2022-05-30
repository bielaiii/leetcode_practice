#include<iostream>
#include<vector>
#include<sstream>
using namespace std;


string validIPAddress(string queryIP){
    string deli = "";
    int start = 0;
    int end = 0;
    string temp = "";
    string ret = "Neither";
    stringstream ss;
    int num = 0;
    if(queryIP.find(".", start) != -1){
        //deli = ",";
        queryIP += ".";
        while((end = queryIP.find(".", start)) != -1){
            ss  << queryIP.substr(start, end - start);
            ss >> num;
            cout << "num: "<< num <<endl;
            if(num < 0 || num > 255) return "Neither";
            start = end + 1;
        }
        ret = "IPV4";
    }else if( queryIP.find(":") != -1){
       // deli = ":";
       queryIP += ":";
    }
    return ret;
}