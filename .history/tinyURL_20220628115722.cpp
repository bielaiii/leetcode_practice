#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
    private:
    unordered_map<string, string> map_;
public:
    Solution(){};
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        map_[to_string(atoi(longUrl))] = longUrl;
        return 
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return map_[shortUrl];
    }
};