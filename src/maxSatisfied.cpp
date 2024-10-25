#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int vt[2] = {0, 0};
    int sumGrumpy = 0;
    for (int i = 0; i < customers.size(); i++) {
        vt[grumpy[i]] += customers[i];
        if (i < minutes - 1) {
            continue;
        }
        sumGrumpy = max(sumGrumpy, vt[1]);
        vt[1] -= grumpy[i - minutes + 1] ? customers[i - minutes + 1] : 0;
    }
    return vt[0] + sumGrumpy;
}

int main() {
    vector<int> customers;
    vector<int> grumpy;
    customers = {1};
    grumpy = {0};
    customers = {4, 10, 10};
    grumpy = {1, 1, 0};
    customers = {1, 0, 1, 2, 1, 1, 7, 5};
    grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
    cout << maxSatisfied(customers, grumpy, 3) << "\n";

    return 0;
}