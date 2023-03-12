#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<sstream>
using namespace std;

set<string> store;
void rec_foo(string expression)
{
    int j = expression.find_first_of('}');
    if (j == string::npos) {
        store.insert(expression);
        return ;
    }
    int i = expression.rfind('{', j);
    string str1 = expression.substr(0, i);
    string str2 = expression.substr(j + 1);
    stringstream ss (expression.substr(i + 1, j - i - 1));
    string temp;
    while (getline(ss, temp, ',')) {
        rec_foo(str1 + temp + str2);
    }

}


vector<string> braceExpansionII(string expression) {
    rec_foo(expression);
    return vector<string> {store.begin(), store.end()};
}



