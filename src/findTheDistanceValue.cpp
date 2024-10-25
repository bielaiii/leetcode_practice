#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());
    int l1 = 0, r1 = arr1.size();
    int ans = 0;
    while (l1 < r1) {
        int mid = (r1 - l1) / 2 + l1;
        vector<int> temp = arr2;
        for_each(temp.begin(), temp.end(),
                 [x = arr1[mid]](int& num) { num = abs(num - x); });
        sort(temp.begin(), temp.end());
        int l2 = 0, r2 = temp.size();
        int midder;
        while (l2 < r2) {
            midder = (r2 - l2) / 2 + l2;
            if (temp[midder] > d) {
                r2 = midder;
            } else {
                l2 = midder + 1;
            }
        }
        if (midder >= temp.size()) {
            r1 = mid;
        } else {
            l1 = mid + 1;
        }
    }
    return l1;
}

int main() {
    vector<int> arr1{4, 5, 8};
    vector<int> arr2{10, 9, 1, 8};
    cout << findTheDistanceValue(arr1, arr2, 2) << "\n";

    arr1 = {1, 4, 2, 3};

    arr2 = {-4, -3, 6, 10, 20, 30};
    cout << findTheDistanceValue(arr1, arr2, 3) << "\n";

    arr1 = {2, 1, 100, 3};
    arr2 = {-5, -2, 10, -3, -7};
    cout << findTheDistanceValue(arr1, arr2, 6) << "\n";

    return 0;
}