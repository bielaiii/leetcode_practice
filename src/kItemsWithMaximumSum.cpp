#include<iostream>
#include<vector>
using namespace std;

int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    int ct = 0;
    if (k > 0) {
        ct += min(numOnes, k);
        k -= min(numOnes, k);
        
    }
    if (k > 0) {
        k -= min(numZeros, k);
    }
    if (k > 0) {
        ct -= min(numNegOnes, k);
        k -= min(numNegOnes, k);
        
    }
    return ct;
}
