/*
        ||| OM SARASWATI NAMASTUBYAM 
            VARDE KAMRUPINI ||| 
            VIDHYARAMBHAM KARISHYAMI
            SIDDIRBHAVATU MEI SADA |||
*/
#include "bits/stdc++.h"
#define  ll         long long
#define  inf        1000000000000000000
#define  pb         push_back
#define  mp         make_pair
#define  sz(a)      a.size()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define  clr(x)     x.clear()
#define  ff         first
#define  ss         second
#define  case(x)    cout << "Case " << x <<": "
#define all(x)      x.begin(), x.end()
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x, y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl
 
#define  md         1000000007
#define  pi         acos(-1.0)
#define  cos(a)     cos(a*pi/180)
#define  sin(a)     sin(a*pi/180)
#define  tan(a)     tan(a*pi/180)
#define  cosi(a)    acos(a)/(pi/180)
#define  sini(a)    asin(a)/(pi/180)
#define  tani(a)    atan(a)/(pi/180)
 
#define  vl         vector <ll>
#define  vs         vector <string>
#define  vc         vector <char>
#define  vpll       vector < pair <ll, ll> >
#define  vpsl       vector < pair <string, ll> >
#define  vpls       vector < pair <ll, string> >
#define  mll        map<ll,ll>
#define  mset       multiset<ll>
#define  mcl        map<char,ll>
#define  pql        priority_queue<ll>
#define  minpql     priority_queue<ll,vector<ll>,greater<ll> >
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


void solve(){
    int n=1,m=0;
    cin>>n>>m;
    vector<pair<int,int>> v(n),vv(m);
    cin>>v;
    cin>>vv;
    int closed{0},beaut_cls{0};
    // for (auto &&i : v)
    // {
    //     vpll::iterator itt=find(all(vv),i);
    //     if(itt!=vv.end()){
    //         beaut_cls++;
    //         vv.erase(itt);
    //     }
    mll mpp;
    mset s;
    for (size_t i = 0; i < m; i++)
    {
        mpp[vv[i].second]++;
        s.insert(v[i].second);
    }
    for (auto &&i : v)
    {
        mset::iterator it=find(all(s),i.second);
        if(it!=s.end()){
            deb(*it);
            closed++;
            s.erase(it);
        }
    }
    mll vx;
    for(auto i:vv){
        int l=i.ff*10000+i.ss;
        vx[l]++;
    }
    for(auto i:v){
        int l=i.ff*10000+i.ss;
        if(vx[l]>0){
            beaut_cls++;
        }
    }
    
    // }
    //Inefficient TLE aa rha
    // deb(closed);
    //Now for beautifully closed
    cout<<closed<<' '<<beaut_cls<<endl;
    // cout<<v;nl;
    // cout<<vv;nl;

}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
    solve();
    return 0;
}

    