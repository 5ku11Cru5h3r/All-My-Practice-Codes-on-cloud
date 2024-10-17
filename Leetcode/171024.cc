#include "bits/stdc++.h"
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x, y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
class Solution {
public:
    int maximumSwap(int n) {
        // int t=n,tt=0;
        // vector<int> v;
        // while (t>0)
        // {
        //     /* code */
        //     tt*=10;
        //     tt+=(t%10);
        //     t/=10;
        // }
        // while (tt!=0)
        // {
        //     v.push_back()
        // }
        string s=to_string(n),t=s;
        sort(t.rbegin(),t.rend());
        // cout<<s<<endl;
        // cout<<t<<endl;
        int i{0};
        while (s[i]==t[i] and i<s.size())
        {
            i++;
        }
        if (i==s.size()) return n;
        int j{s.size()-1};
        while (s[j]!=t[i] and j>=i)
        {
            j--;
        }

        s[j]^=s[i];
        s[i]^=s[j];
        s[j]^=s[i];
        // deb2(s,t);
        // cout<<i<<' '<<j<<endl;
        return stoi(s);
    }
};
int main(){
    Solution obj;
    cout<<obj.maximumSwap(9947)<<endl;
}