#include <cstdlib>
#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

pair<string, int> decode_string_r(string &s, int l, int r) {
    string ans = "";
    string count = "";
    int i = 0;
    for (i = l; i <= r; i++) {
        if (s[i] == ']') {
            return {ans, i};
        } else if (s[i] == '[') {
            auto [temp, ii] = decode_string_r(s, i + 1, r);
            int sz = stoi(count);
            for (int j = 0; j < sz; j++) {
                ans += temp;
            }
            count = "";
            i = ii;

        } else if (isdigit(s[i])) {
            while (isdigit(s[i])) {
                count += s[i];
                i++;
            }
            i--;

        } else {
            ans += s[i];
        }
    }
    return {ans, i};
}

string decodeString(string s) {
    auto [str, i] = decode_string_r(s, 0, s.size());
    return str;
}

int main() {
    string s1 = "3[a]2[bc]";
    println("{}", decodeString(s1));


    string s2 = "3[a2[c]]";
    println("{}", decodeString(s2));
    
    string s3 = "2[abc]3[cd]ef";
    println("{}", decodeString(s3));;
    return 0;
}
