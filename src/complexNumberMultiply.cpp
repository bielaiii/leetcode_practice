#include<iostream>
#include<vector>
using namespace std;

string complexNumberMultiply(string num1, string num2) {
      int i = 0;
      while(i < num1.size() && num1[i] != '+') i++;
      int real_num1 = stoi(num1.substr(0,i));
      int complex_num1 = stoi(num1.substr(i+1, num1.size() - i - 1));
      i = 0;
      while(i < num2.size() && num2[i] != '+') i++;
      int real_num2 = stoi(num2.substr(0,i));
      int complex_num2 = stoi(num2.substr(i+1, num2.size() - i - 1));
      int real_final = real_num1 * real_num2 + ((-1) * complex_num1 * complex_num2 );
      int complex_coeff = real_num1 * complex_num2 + real_num2 * complex_num1;
      string final = to_string(real_final) + "+" + to_string(complex_coeff) + "i";
      return final;
}