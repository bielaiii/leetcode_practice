#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int check(vector<vector<int>> &mat, int mid, int k, int n) {
    int r = mat.size() - 1;
    int c = 0;
    int count = 0;
    while (r >= 0 && c < n) {
        if (mat[r][c] <= mid) {
            count += c + 1;
            c++;
        } else {
            r--;
        }
    }
    return count >= k;
}

int kthSmallest(vector<vector<int>> &matrix, int k) {
    int n = matrix.size();
    int left = matrix[0][0];
    int right = matrix[n - 1][n - 1];
    while (left < right) {
        int mid = (right - left) / 2 + left;
        if (check(matrix, mid, k, n)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

class temof {
    public:
    char c[1204];
    ~temof() {
        std::cout << "temo destruct\n";
    }
};

template<typename T>
struct has_foo {

    template<typename U>
    static auto test(int) -> decltype(declval<U>().foo(), std::true_type());

    template<typename>
    static std::false_type test(...);

    static constexpr int value = decltype(test<T>(0))::value;
};

struct AAfoo {
    static int foo() {
        return 1;
    }
};

struct BBfoo {};
int main() {
    cout << has_foo<AAfoo>::value << endl;
    cout << has_foo<BBfoo>::value << endl;
    return 0;
}
