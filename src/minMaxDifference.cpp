#include <algorithm>
#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
int minMaxDifference(int num) {
    string str = to_string(num);
    char first_;
    char end_ = str[0];
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '9') {
            first_ = str[i];
            break;
        }
    }
    string greater = str;
    string less = str;
    replace(greater.begin(), greater.end(), first_, '9');
    replace(less.begin(), less.end(), end_, '0');
    return stoi(greater) - stoi(less);
}

int main() {

    cout << minMaxDifference(11891) << endl;

    return 0;
}
