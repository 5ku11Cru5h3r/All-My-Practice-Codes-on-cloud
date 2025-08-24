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
ll solve(vl &v,ll n,ll k){
    int min_e = *min_element(all(v)); 
    int max_e = *max_element(all(v)); 
 
    ll lo = 0, hi = (ll)(max_e - min_e); 
 
    while (lo < hi) { 
        ll mid = lo + (hi - lo)/2; 
 
        ll g = 1; 
        ll c_low = (ll)v[0] - mid; 
        ll c_high = (ll)v[0] + mid; 
 
        for (int i = 1; i < n; i++) { 
            ll new_lo = (ll)v[i] - mid; 
            ll new_hi = (ll)v[i] + mid; 
            c_low = max(c_low, new_lo); 
            c_high = min(c_high, new_hi); 
 
            if (c_low > c_high) { 
                g++; 
                c_low = new_lo; 
                c_high = new_hi; 
            } 
        } 
 
        if (g <= (ll)(k) + 1) { 
            hi = mid; 
        } else { 
            lo = mid + 1; 
        } 
    } 
 
    return lo; 
}
int main()
{
    fastt;
    int t=1;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        vl v(n);
        for (auto &i: v) cin >> i;
        cout<<solve(v,n,k)<<endl;
    }
    return 0;
}