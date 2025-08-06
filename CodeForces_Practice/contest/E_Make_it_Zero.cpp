/*          OM SARASWATI NAMASTUBHYAM VARDE KAMRUPINI VIDHYARAMBHAM 
                    KARISHYAMI SIDDHIRBHAVATU MEIN SADA
*/
#include<bits/stdc++.h>
using namespace std;
#define  fastt       ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  ll         long long
#define  inf        1000000000000000000
#define  pb         push_back
#define  mp         make_pair
#define  sz(a)      a.size()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define  clr(x)     x.clear()
#define  fff         first
#define  sss        second
#define  case(x)    cout << "Case " << x <<": "
#define all(x)      x.begin(), x.end()
#define srt(x)      sort(all(x))
#define jab(i,n,k)  for(int i=0;i<n;i+=k)
#define jab(i,n)    for(int i=0;i<n;i++)
#define jab1(i,n)    for(int i=1;i<n;i++)
 
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
#define  pll        pair <ll, ll>
#define  plll       pair <ll, pll>
#define  vpsl       vector < pair <string, ll> >
#define  vpls       vector < pair <ll, string> >
#define  umll	     unordered_map<ll,ll>
#define  umsll	     unordered_map<ll,unordered_set<ll>> //Storing Graphs
#define  mset       multiset<ll>
#define  mcl	    map<char,ll>
#define  pql        priority_queue<ll>
#define  minpql     priority_queue<ll,vector<ll>,greater<ll> >
 
#define  setbits(x)     __builtin_popcountll(x)
#define  zerobits(x)    __builtin_ctzll(x)
 
#define toll(a) atoll(a.c_str())


#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
ll pow(ll c,ll d){return d==0?:c*pow(c,d-1);}
ll gcd(ll a,ll b) {return b==0? a:gcd(b,a%b);}
ll lcm(ll a,ll b) {return ((a*b)/gcd(a,b));}
 
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ========================================== 
bool ispalindrome(vl v){
    int n = v.size();
    for(int i=0;i<n/2;i++){
        if(v[i]!=v[n-i-1]) return false;
    }
    return true;
 }
int main()
{
    fastt;
    int t=1;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n;
        vl v(n),pre(n),post(n);
        for (auto &i: v) cin >> i;
        // cout<<(ispalindrome(v)?"Yes":"No")<<endl;
        pre[0] = v[0];
        post[n-1] = v[n-1];
        for (size_t i = 1; i < n; i++)
        {
            /* code */
            pre[i]=pre[i-1]+ v[i];
            post[n-i-1] = post[n-i]+ v[n-i-1];
        }
        cout<<pre<<endl;
        cout<<post<<endl;

    }
    return 0;
}