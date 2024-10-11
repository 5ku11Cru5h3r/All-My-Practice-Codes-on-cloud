#include <bits/stdc++.h>
#define vb vector<bool>
using namespace std;
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================

void solve(vector<string> &v, int r, vb &c,vb &d,vb &dd, int &ans)
{
    if (r == 8)
    {
        ans += 1;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        if (v[r][i] == '*'|| c[i] || d[r - i + 8] || dd[r + i])
        {
            continue;
        }
        c[i] = d[r - i + 8] = dd[r + i] = true;
        solve(v, r + 1, c, d,dd, ans);
        c[i] = d[r - i + 8] = dd[r + i] = false;
    }
}

int main()
{
    vector<string> v(8);
    cin>>v;
    vb c(10, false),d(20, false),dd(20, false);

    int ans = 0;
    solve(v, 0, c, d,dd,ans);
    cout << ans << endl;
}
