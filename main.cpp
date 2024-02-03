#include "header.h"
#include "printer.h"
#include <iostream>
#include <queue>
#include<ranges>
#include <vector>
using namespace std;

template <typename T>
void printVector(vector<T> vt)
{
    for (auto it : vt) {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<char> vt1 = {'a', 'b', 'd', 'e'};
    vector<int> vt2 = {1, 2, 3, 4};
    vector<double> vt3 = {100, 200, 300, 400};
    vector<double> vt4 = {0, 0, 0, 0};
    for (auto elem : std::views::zip(vt1, vt2, vt3, vt4)) {
    //for (tuple<char&, int&, double&, double&> elem : std::views::zip(vt1, vt2, vt3, vt4)) {
        cout << std::get<0>(elem) << " ";
        cout << std::get<1>(elem) << " ";
        cout << std::get<2>(elem) << " ";
        std::get<3>(elem) = get<1>(elem) + get<2>(elem);
        cout <<endl;
    
    }
    for (auto k : vt4) {
        cout << k << endl;
    
    }

    return 0;
}