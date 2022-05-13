#include<iostream>
#include<vector>
#include "header.h"
using namespace std;


bool buddyStrings(string s, string goal){
    vector<int> vec1(26, 0);
        vector<int> vec2(26, 0);
        int sum1 = 0;
        int sum2 = 0;
        if(s.length() != goal.length()) return 0;
       // if(s == goal) return 1;
        for(int i = 0; i < s.length(); i ++){
            vec1[s[i] - 'a'] ++;
            vec2[goal[i] - 'a'] ++;
            sum1  += s[i] - 'a';
            sum2  += goal[i] - 'a';
        }
    //    printer(vec1);
    //    printer(vec2);
        if(sum1 != sum2 )return 0;
        int two = 0;
        for(int i = 0; i < s.size(); i ++){
            if(s[i] != goal[i]) two++;
           // cout << two <<" ";
            if(two > 2) return 0;
        }
       // cout <<endl;
      //  cout << two << endl;
       // cout << sum2 <<  " " << sum1<<endl;
       cout << "two: "<< two << endl;
       if(! two) return 0;
       if(two == 2) return 1;
       return 0;
}