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

int kthGrammar(int n, int k) {
    if (n == 1) {
        return 0;
    }
    int half_ = 1 << (n - 2);
    if (k > half_) {
        return 1- kthGrammar(n - 1,  k - half_);
    } else {
        return kthGrammar(n - 1, k);
    }
}


int main() {

    // println("ans {}", kthGrammar(1, 1));
    println("ans {}", kthGrammar(2, 1));
    println("ans {}", kthGrammar(2, 2));
    return 0;
}
