#include<iostream>
#include<string>
using namespace std;

string reverser(string str){
    char temp;
    int left = 0, right = str.length() -1;
    while(left < right ){
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left  ++;
        right --;
    }
    return str;
}
//not final version
/*
string reverseWords(string s) {
    string ret = "";
    int head = 0;
    size_t found = found = s.find(' ');
    while(found != string::npos){
        ret += reverser(s.substr(head, found - head)) + ' ' ;
        s[found] = '*';
        //cout << "ret : " << ret <<endl;
        head = found + 1;
        found = s.find(' ');
    }
    //cout << s.substr(head, s.length() - 1 - head) << endl;
    ret += reverser(s.substr(head, s.length() - head));
    return ret;
}*/


string reverseWords(string s) {
    s+= ' ';
    int left = 0, right = 0;
    while(right < s.length()){
        if(s[right] == ' '){
            string str = s.substr(left, right- left);
            int temp_left = left, temp_right = right;
            char temp;
            while(temp_left < temp_right){
                temp = s[temp_left];
                s[temp_left] = s[temp_right];
                s[temp_right] = temp;
                temp_left ++; temp_right --;
            }
            
            right ++;
            left = right ;
        }
        right++;
    }
    return s.substr(1, s.length() - 1);
}