#include<iostream>
#include<algorithm>
using namespace std;

string addStrings(string num1, string num2) {
    string ans = "";
    int addOne = 0;
    int len1 = num1.size();
    int len2 = num2.size();
    int i = 1;
    for (; len1 - i >= 0 && len2 - i >= 0; i++) {
        int temp = (num1[len1 - i] - '0') + (num2[len2 - i] - '0');
        ans += (((temp  + addOne) % 10)- 0 ) + '0';
        if (temp + addOne >= 10) {
            addOne = 1;
        } else {
            addOne = 0;
        }
    }
    if (len1 - i >= 0) {
        while (i <= len1) {
            ans += ((num1[len1 - i] - '0')  + addOne) % 10 + '0';
            if (num1[len1 - i] - '0' + addOne >= 10) {
                addOne = 1;
            } else {
                addOne = 0;
            }
            i++;
        }
    } else if (len2 - i >= 0) {
        while (i <= len2) {
            ans += ((num2[len2 - i] - '0')  + addOne) % 10 + '0';
            if (num2[len2 - i] - '0' + addOne >= 10) {
                addOne = 1;
            } else {
                addOne = 0;
            }
            i++;
        }
    }
    if (addOne) {
        ans += "1";
    }
    reverse(ans.begin(), ans.end());
    return ans;
}