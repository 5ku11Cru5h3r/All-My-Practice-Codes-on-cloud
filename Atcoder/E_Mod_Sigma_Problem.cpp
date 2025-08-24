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
#define  mll	    map<ll,ll>
#define	 mset	    multiset<ll>
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
// 0-indexed BIT (binary indexed tree / Fenwick tree) (i : [0, len))
template <class T>
struct BIT{
    int n;
    vector<T> data;
    BIT(int len = 0) : n(len), data(len) {}
    void reset() { fill(data.begin(), data.end(), T(0)); }
    void add(int pos, T v){ 
        // a[pos] += v
        pos++;
        while (pos > 0 and pos <= n)
            data[pos - 1] += v, pos += pos & -pos;
    }
    T sum(int k) const{ 
        // a[0] + ... + a[k - 1]
        T res = 0;
        while (k > 0)
            res += data[k - 1], k -= k & -k;
        return res;
    }

    T sum(int l, int r) const { return sum(r) - sum(l); } // a[l] + ... + a[r - 1]
    // dbg functions
    template <class OStream>
    friend OStream &operator<<(OStream &os, const BIT &bit){
        T prv = 0;
        os << '[';
        for (int i = 1; i <= bit.n; i++){
            T now = bit.sum(i);
            os << now - prv << ',', prv = now;
        }
        return os << ']';
    }
};
int main()
{
    fastt;
        ll n,m;
        cin >> n>>m;
        vl v(n);
        for (auto &i: v) cin >> i;
        // ll sum=0,start=0,it;
        // while (start<=sz(v))
        // {
        //     int ssum=0;
        //     it=start;
        //     for (size_t i = it; i < sz(v); i++)
        //     {
        //         ssum+=v[i]%m;
        //         ssum%=m;
        //         sum+=ssum;
        //         deb2(v[i],ssum);
        //     }
        //     start++;
        // }
        // cout<<sum<<endl;
        // TLE in this approach
        // Approach 2
        vl pre(n+1);
        pre[0]=0;
        for (int i = 1; i <= n; i++)
        {
            pre[i]=pre[i-1]+v[i-1];
            pre[i]%=m;
        }
        BIT<ll> ft(m);
        ll sum=0,ans=0;
        for (size_t i = 0; i < n+1; i++)
        {
            ans+=pre[i]*i-sum+ft.sum(pre[i]+1,m)*m;
            sum+=pre[i];
            ft.add(pre[i],1);
        }
        // cout<<ft<<endl;
        cout<<ans<<endl;
        
    return 0;
}
