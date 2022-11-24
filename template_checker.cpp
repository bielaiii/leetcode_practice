#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void template_checker(const vector<T> &  answer, const vector<T> & input){
      int ct = 0 ;
      for(int i = 0; i < answer.size(); i++){
            if(answer[i] != input[i]){
                  cout <<"your answer is "<< input[i] <<" which is incorrect!!!"<<endl;
                  cout <<"expected answer is "<< answer[i] <<endl;
            }else{
                  ct ++;
            }
      }
      if(ct == answer.size() ){
            cout <<"all your answer is correct" <<endl;
      }else{
            cout << ct <<" are correct."<<endl;
            cout << answer.size() - ct <<" are incorrect."<<endl;
      }
      
}