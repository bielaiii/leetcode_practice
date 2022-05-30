#include<iostream>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;

int recursive(string s, int ret, int i){
    if(i == s.length() - 1) return ret;
    int cur = 0 ;
    if(s[i] == 'a'  || s[i] == 'A'){
        cur = 10;
    }else if(s[i] == 'b' || s[i] == 'B'){
        cur = 11;
    }else if(s[i] == 'c' || s[i] == 'C'){
        cur = 12;
    }else if(s[i] == 'd' || s[i] == 'D'){
        cur = 13;
    }else if(s[i] == 'e' || s[i] == 'E'){
        cur = 14;
    }else if(s[i] == 'f' || s[i] == 'F'){
        cur = 15;
    }else if(s[i] >= '0' && s[i] <= '9'){
        cur = s[i] - '0';
    }else{
        return -1;
    }
    return recursive(s, ret + pow(16 , i) * cur, i+ 1);
}

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
           // cout << "num: "<< num <<endl;
            if(num < 0 || num > 255) return "Neither";
            start = end + 1;
            ss.clear();
        }
        ret = "IPV4";
    }else if( queryIP.find(":") != -1){
       // deli = ":";
       queryIP += ":";
       string temp = "";
       while((end = queryIP.find(":", start)) != -1){
            temp =  queryIP.substr(start, end - start);
            num = recursive(temp, 0, 0);
            cout << num <<endl;
            if(num == -1) return "Neither";
           // cout << "num: "<< num <<endl;
            if(!(num >= 0 && num < 65536)) return "Neither";
            start = end + 1;
            ss.clear();
        }
        ret = "IPV4";
    }
    return ret;
}

