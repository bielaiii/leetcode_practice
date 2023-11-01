#include<iostream>
#include<algorithm>
#include<cmath>
#include<sstream>
#include<numeric>
using namespace std;

string fractionAddition(string expression) {
      istringstream is(expression);
      int num1 = 0;
      int num2 = 0;
      char oper;
      int nume = 0;
      int deno = 1;
      while (is >> num1 >> oper >> num2) {
            nume = nume * num2 + num1 * deno;
            deno *= num2;
            int gcdnum = std::gcd(num1, num2);
            nume /= gcdnum;
            deno /= gcdnum;
      }
      return to_string(nume) + '/' + to_string(deno);
}