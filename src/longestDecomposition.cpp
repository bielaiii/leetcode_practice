#include<iostream>
#include<vector>
using namespace std;

int longestDecomposition(string text) {
    string str1 = "";
    string str2 = "";
    int ct = 0;
    int i = 0;
    int j = text.size() - 1;
    for (i = 0, j = text.size() - 1; i < j ; i++, j--) {
        str1 += text[i];
        str2 = text[j] + str2;
        if (str1 == str2) {
            ct++;
            str1 = "";
            str2 = "";
        } 
    }
    return ct * 2 + (text.size() % 2 || str1.size() ? 1 : 0);
}