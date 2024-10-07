#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,need;
        long A{0};
        cin >> n>>k;
        vector<int> v(n);
        for (auto &&i : v)
        {
            cin >> i;
        }
        sort(v.rbegin(),v.rend());
        for (size_t i = 0; i < n; i++)
        {
            if (i%2==0)
            {
                /* code */
                A+=v[i];
            }
            else
            {
                need=min(v[i-1]-v[i],k);
                k-=need;
                v[i]+=need;
                A-=v[i];
            }
        }
        cout<< A<<endl;
    }
    return 0;
}