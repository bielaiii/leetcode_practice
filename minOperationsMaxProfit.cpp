#include<iostream>
#include<vector>
using namespace std;


int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
    int total = 0;
    int runTime = -1;
    int maxProfit = 0;
    int wait = 0;
    int i = 0;
    while (wait || i < customers.size()) {
        wait += i < customers.size() ? customers[i] : 0;
        int up = min(4, wait);
        wait -= up;
        ++i;
        total += up * boardingCost - runningCost;
        if (total > maxProfit) {
            maxProfit = total;
            runTime = i;
        }
    }
    return runTime;
}
