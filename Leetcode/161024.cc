#include <bits/stdc++.h>
using namespace std;
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
class Solution
{
public:
    string longestDiverseString(int a, int b, int c)
    {
        priority_queue<pair<int,char>> pq;
        if(a>0){
            pq.push({a,'a'});
        }
        if(b>0){
            pq.push({b,'b'});
        }
        if(c>0){
            pq.push({c,'a'});
        }
        string s{""};
        while (!pq.empty())
        {
            /* code */
            auto p=pq.top();
            pq.pop();
            if(s.size()>2 and s[size(s)-1]==s[size(s)-2]==p.second){
                if(pq.empty()) break;
                // pair<int,char> pp=pq.top();
                auto pp=pq.top();
                pq.pop();
                s.push_back(pp.second);
                pp.first--;
                if (pp.first>0)
                {
                    /* code */
                    pq.push(pp);
                }
                else
                {
                    s+=p.second;
                    p.first--;
                    if (p.first>0)
                    {
                        /* code */
                        pq.push(p);
                    }
                }
            }
        }
        return s;
    }
};
int main()
{
    Solution o;
    cout << o.longestDiverseString(1, 2, 2) << endl;
}