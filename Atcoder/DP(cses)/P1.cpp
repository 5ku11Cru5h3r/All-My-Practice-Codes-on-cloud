#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,m,d,v;
    ll ans=0;
    cin>>n>>m;
    map<ll,ll> x,y;
    for(int i=0;i<n;i++){
        cin>>d>>v;
        x[d]=v;
    }
    for(int i=0;i<m;i++){
        cin>>d>>v;
        y[d]=v;
    }
    for(auto p:x){
        for(auto q:y){
            if(p.first/q.second==q.first/p.second){
                ans++;
                y.erase(q.first);
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}