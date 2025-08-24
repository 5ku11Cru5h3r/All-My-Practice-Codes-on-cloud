#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        auto check = [&](char first) -> bool{
            string T;
            for(int i=0;i<N;i++) T += (i%2 ? (first=='0'?'1':'0') : first);
            vector<int> mismatch;
            for(int i=0;i<N;i++) if(S[i]!=T[i]) mismatch.push_back(i);
            if(mismatch.empty()) return true;
            int L = mismatch.front();
            int R = mismatch.back();
            for(int i=L;i<=R;i++) if(S[i]!=T[i]) {}
            string S_rev = S;
            reverse(S_rev.begin()+L, S_rev.begin()+R+1);
            return S_rev == T;
        };
        if(check('0') || check('1')) cout<<"Yes\n";
        else cout<<"No\n";
    }
}