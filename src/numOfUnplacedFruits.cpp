#include <iostream>
#include <print>
#include <vector>
using namespace std;
int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets) {
    int ct = 0;
    
    for (int j = 0; j < fruits.size(); j++) {
        for (int i = 0; i < baskets.size(); i++) {
            if (baskets[i] >= fruits[j]) {
                baskets[i] = -1;
                ct++;
                break;
            }
        }
      //  println("{}", baskets);
    }
    return fruits.size() - ct;
}
int main() {
    vector<int> fruits{4, 2, 5};
    vector<int> baskets{3, 5, 4};
    std::cout << numOfUnplacedFruits(fruits, baskets) << "\n";


    vector<int> fruits1{3,6,1};
    vector<int> baskets1{6,4,7};
    std::cout << numOfUnplacedFruits(fruits1, baskets1) << "\n";

    return 0;
}
