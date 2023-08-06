#include <iostream>
#include <string>
using namespace std;


string toGoatLatin(string sentence) {
    string str = "";
    int left = 0;
    int count = 1;
    sentence += " ";
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            string temp = sentence.substr(left, i - left);
            if(temp[0] == 'A' || temp[0] == 'a' ||
            temp[0] == 'E' || temp[0] == 'e' 
            ||temp[0] == 'I' || temp[0] == 'i' 
            ||temp[0] == 'O' || temp[0] == 'o' 
            ||temp[0] == 'U' || temp[0] == 'u' ){
                str += temp + "ma";
            }else{
                str += temp.substr(1, temp.size()-1) + temp[0] + "ma";
            }
            for(int j = 0; j < count; j++) str += "a";
            str += " ";
            count ++;
            left = i + 1;
        }
    }
    return str;
}