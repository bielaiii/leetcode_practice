#include<iostream>
#include<set>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    set<char> st;
    for (auto jewel : jewels) {
        st.insert(jewel);
    }
    int ret = 0;
    for (auto stone: stones) {
        if (st.find(stone) != st.end()) {
            ret ++;
        }
    }
    return ret;
}