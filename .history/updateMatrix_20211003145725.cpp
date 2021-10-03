#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
#include<utility>
using namespace std;


 void recur(vector<vector<int>>& mat, int c, int r, int before_c, int before_r, int max_c, int max_r, vector<vector<int>>& vec){
    //cout << c << " " << r << endl;
    
    
    if(c < 0 || c >= max_c) return;
    if(r < 0 || r >= max_r) return;
    
    if(!mat[c][r] && !mat[before_c][before_r]){
        vec[c][r] = 0;
    }else{
        vec[c][r] = vec[before_c][before_r] + 1;
    }
    recur(mat, c+1, r, c, r, max_c, max_r, vec);
    recur(mat, c, r+1, c, r, max_c, max_r, vec);
    recur(mat, c-1, r, c, r, max_c, max_r, vec);
    recur(mat, c, r-1, c, r, max_c, max_r, vec);
    
    cout << c << " " << r << endl;
    return ;
} 


struct coor
{
    /* data */
    coor(int a, int b): c(a), r(b){}
    int c,r;
};
template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
        for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d][f] << " ";
        }
        cout << endl;
    }
    cout << "------------------"<<endl;
}

void printQueue(queue<pair<int,int>> que){
    queue<pair<int,int>> myque = que;
    while(!myque.empty()){
        pair<int,int> temp = myque.front();
        cout<< temp.first << " "<<temp.second << endl;
        myque.pop();
    }
    cout << "-----------"<<endl;
}

const int arr[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    queue<pair<int,int>> q;
    // int visited[mat.size()][mat[0].size()] = {0};
    vector<vector<int>> ans (mat.size(), vector<int>(mat[0].size(),-1));
    vector<vector<int>> visited (mat.size(), vector<int>(mat[0].size(),0));
    for(int c =0; c< mat.size(); c++){
        for(int r =0; r< mat[0].size(); r++){
            if(!mat[c][r]){
                q.push(make_pair(c,r));
                ans[c][r] = 0;
            } 
        }
    }
    //printQueue(q);
    while (!q.empty())
    {
       // printQueue(q);
        pair<int,int> temp_node = q.front();
        q.pop();
        int temp_c = temp_node.first;
        int temp_r = temp_node.second;
        if(visited[temp_c][temp_r]) continue;
        cout << temp_c << " " << temp_r << endl;
        printer(ans);
        cout << "|||||||||||||||"<<endl;
        for(int e =0; e < 4; e++){
            int temp_cc = temp_c + arr[e][0];
            int temp_rr = temp_r + arr[e][1];
            if(temp_cc < 0 || temp_cc >= mat.size() || temp_rr < 0 || temp_rr >= mat[0].size()){
                continue;
            }else{
                if(ans[temp_cc][temp_rr] == -1 && mat[temp_cc][temp_rr] ){
                    ans[temp_cc][temp_rr] = ans[temp_c][temp_r] + 1;
                }else if(ans[temp_cc][temp_rr] > ans[temp_c][temp_r] + 1){
                    ans[temp_cc][temp_rr] = ans[temp_c][temp_r] + 1;
                }
                q.push(make_pair(temp_cc, temp_rr));
                //visited[temp_cc][temp_rr] = 1;
            }
        }
        cout << "asn" <<endl;
        printer(ans);
        //cout << temp_c << " " << temp_r << endl;
        visited[temp_c][temp_r] = 1;
    }
    printer(ans);
    return ans;
}
