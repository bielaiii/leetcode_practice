#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;


/*
bool checkInclusion(string s1, string s2) {
    if(s1.length() > s2.length() ) return false;
    sort(s1.begin(), s1.end());
    int len1 = s1.length();
    int len2 = s2.length();
    for(int i = 0; i < len2 - len1 +1; i++){
        string tempstr = s2.substr(i, len1);
        sort(tempstr.begin(), tempstr.end());
        if(tempstr == s1) return true;
    }
    return false;
}
*/

bool checkInclusion(string s1, string s2) {
    if(s1.length() > s2.length() ) return false;
    
    int len1 = s1.length();
    int len2 = s2.length();
    
    vector<int> vec1(26,0);
    vector<int> vec2(26,0);

    for(int i = 0; i < len1 ; i++){
        vec1[s1[i]-'a']++;
        vec2[s2[i]-'a']++;
    }

    for(int d = len1; d < len2; d++){
        if(vec2 == vec1) return true;
        vec2[s2[d]-'a']++;
        vec2[s2[d - len1 ] - 'a']--;
    }

    return vec2 == vec1;
}