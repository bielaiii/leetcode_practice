#include<iostream>
#include<vector>
using namespace std;


string validIPAddress(string queryIP) {
    string deli = "";
    int start = 0;
    int end = 0;
    string temp = "";
    string ret = "Neither";
    if(queryIP.find(",") != -1){
        //deli = ",";
        while((end = queryIP.find(",")) != -1){
            int temp = atoi(queryIP.substr(start, end - start));
            if(temp < 0 || temp > 255) return "Neither";
            
            
        }
    }else if( queryIP.find(":") != -1){
       // deli = ":";
    }
    return ret;
}