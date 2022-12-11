#include<iostream>
#include<vector>
using namespace std;

int expressiveWords(string s, vector<string>& words) {
      int ct = 0;
      for(auto word : words){
            int ll = 0, l = 0, r = 0, rr = 0;
            while(r < s.size() && rr < word.size()){
                  if(s[l] == word[ll]){
                        while(r < s.size() && s[l] == s[r]) r++;
                        while(rr < word.size() && word[ll] == word[rr]) rr++;
                        if(rr - ll > r - l) break;
                        if((r - l) == (rr - ll)  || (r - l ) >= 3 ){                         
                              l = r ; ll = rr;
                              cout << r << " "<< rr <<endl;
                              cout << s.size() << " "<<word.size() <<endl;
                              cout << (s.size() == r) << " "<< (word.size() == rr) <<endl;
                              if(r == s.size()  && rr == word.size()) ct ++;
                        }else{
                              break;
                        }
                  }else{
                        break;
                  }
            }
           
      }
      return ct;
}
