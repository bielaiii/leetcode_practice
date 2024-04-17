#include "header.h"
#include "printer.h"
#include <iostream>
#include <queue>
#include <ranges>
#include <vector>
using namespace std;

template <typename T>
void printVector(vector<T> vt)
{
    for (auto it : vt) {
        cout << it << " ";
        for (auto it : vt) {
            cout << it << " ";
        }
        cout << endl;
    }
}

int main(void)
{

    /* cout << "hello, world" << endl;
    vector<int> vt1 { 1, 2, 3, 4, 5 };
    vector<int> ans = distinctDifferenceArray(vt1);
    printVector(ans);
    vector<int> vt2 { 3, 2, 3, 4, 2 };
    ans = distinctDifferenceArray(vt2);
    printVector(ans);
 */
    /* vector<char> vt1 = { 'a', 'b', 'd', 'e' };
    vector<int> vt2 = { 1, 2, 3, 4 };
    vector<double> vt3 = { 100, 200, 300, 400 };
    vector<double> vt4 = { 0, 0, 0, 0 };
    for (auto elem : std::views::zip(vt1, vt2, vt3, vt4)) {
        // for (tuple<char&, int&, double&, double&> elem : std::views::zip(vt1, vt2, vt3, vt4)) {
        cout << std::get<0>(elem) << " ";
        cout << std::get<1>(elem) << " ";
        cout << std::get<2>(elem) << " ";
        std::get<3>(elem) = get<1>(elem) + get<2>(elem);
        cout << endl;
    }
    for (auto k : vt4) {
        cout << k << endl;
    } */
    // cout << "hello, world" << endl;
    // vector<int> vt {1, -1, -2, 4, -7, 3};
    // cout << maxResult(vt, 2) << endl;
    int m = 4;
    int n = 3;
    vector<int> hFences { 2, 3};
    vector<int> vFences { 2};
    cout << maximizeSquareArea(m, n, hFences, vFences) << endl;
    
    return 0;
}