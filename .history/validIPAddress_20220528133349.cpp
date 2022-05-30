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
    int count = 0;
    if(queryIP.find(".", start) != -1){
        if(!isdigit(queryIP[queryIP.length() - 1])) return "Neither";
        //deli = ",";
        queryIP += ".";
        while((end = queryIP.find(".", start)) != -1){
            string temp_sub = queryIP.substr(start, end - start);
            if(temp_sub == "") return "Neither";
            count ++;
            if(count > 4) return "Neither";
            if(temp_sub.length() > 1 && temp_sub[0] == '0') return "Neither";
            if(temp_sub.find_first_not_of("1234567890") != string::npos) return "Neither";
            ss  << temp_sub;
            ss >> num;
           // cout << "num: "<< num <<endl;
            if(num < 0 || num > 255) return "Neither";
            start = end + 1;
            ss.clear();
        }
        if(count != 4) return "Neither";
        ret = "IPv4";
    }else if( queryIP.find(":") != -1){
       // deli = ":";
     //  cout << (queryIP.find_first_not_of("abcdefABCDEF1234567890:") != string::npos) <<endl;
       if(queryIP.find_first_not_of("abcdefABCDEF1234567890:") != string::npos)
             return "Neither";
       // cout << "start" <<endl;
       queryIP += ":";
       string temp = "";
       while((end = queryIP.find(":", start)) != -1){
            temp =  queryIP.substr(start, end - start);
            if(temp == "") return "Neither";
            count ++;
            if(count > 8) return "Neither";
            if(temp.length() < 0 || temp.length() > 4) return "Neither";
            num = recursive(temp, 0, 0);
           // cout <<"num " <<  num << endl;
            if(num == -1) return "Neither";
            if(!(num >= 0 && num < 65536)) return "Neither";
            start = end + 1;
            ss.clear();
        }
        if(count != 8) return "Neither";
        ret = "IPv6";
    }
    return ret;
}

