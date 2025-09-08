#include <algorithm>
#include <format>
#include <iostream>
#include <map>
#include <numeric>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


int lastRemaining(int n) {
    int head = 1;
    int step = 1;
    int is_left = 1;
    while (n > 1) {
        if(is_left || n % 2 == 1) {
            head += step;
        }
        step *=2;
        n /= 2;
        is_left = !is_left;
    }
    return head;
}

int main() {

    println("{}", lastRemaining(9));
    println("{}", lastRemaining(1));
    return 0;
}
