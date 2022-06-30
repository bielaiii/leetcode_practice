#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
    private:
    unordered_map<string, string> map_;
public:
    int key[6] = {1,3,5,7,11,13};
    Solution(){};
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string temp = "";
        for(int i = 0 ; i < longUrl.size(); i++){
            temp += (longUrl[i] ^ key[i % 6]);
        }
        map_[temp] = longUrl;
        return temp;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string ans = "";
         for(int i = 0 ; i < shortUrl.size(); i++){
            ans+= (shortUrl[i] ^ key[i % 6]);
        }
        return ans;
    }
};