#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

bool isPowerOfThree(int n) {

    if (n == 1) {
        return true;
    } else if (n < 1) {
        return false;
    }
    if (n % 3 == 0) {
        return isPowerOfThree(n / 3);
    } else {
        return false;
    }
}

int main() {
    return 0;
}
