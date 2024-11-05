#include "bits/stdc++.h"
using namespace std;
pair<int,int> dir[]={{0,1},{0,-1},{1,0},{-1,0}};
string s;
bool v[9][9];
int main(){
    cin>>s;
    vector<int> vv;
    for(auto &i :s){
        if(i=='R')vv.push_back(0);
        else if(i=='L')vv.push_back(1);
        else if(i=='U')vv.push_back(2);
        else if(i=='D')vv.push_back(3);
        else vv.push_back(4);
    }
    for (size_t i = 0; i < 9; i++)
    {
        v[i][0]=v[0][i]=v[8][i]=v[i][8]=1;
    }
    auto ans=[](){
        return 0;
    };
    cout<<ans<<endl;
}