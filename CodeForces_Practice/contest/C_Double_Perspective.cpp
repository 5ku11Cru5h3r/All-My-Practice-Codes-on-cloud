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
 
struct Edge
{
    int from;
    int to;
    int weight;
    int node;
};

class DSU {
private:
    vector<int> parent, size;
public:
    DSU(int n) {
        parent = vector<int>(n);
        size = vector<int>(n, 1);
        iota(begin(parent), end(parent), 0);
    }
    
    int getParent(int x) {
        if (parent[x] == x) return x;
        return parent[x] = getParent(parent[x]);
    }

    bool join(int x, int y) {
        x = getParent(x);
        y = getParent(y);
        if (size[x] > size[y])
            swap(x, y);
        if (x == y) return false;
        parent[x] = y;
        size[y] += size[x];
        return true;
    }

    int getSize(int x) {
        return size[x] = size[getParent(x)];
    }
};

int main()
{
    fastt;
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<Edge> v(n);
        int mxnode=0;
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i].from>>v[i].to;
            v[i].weight =abs(v[i].from -v[i].to);
            v[i].node=i+1;
            mxnode=max(mxnode,max(v[i].from,v[i].to));
        }
        sort(all(v),[&](auto &a,auto &b){
            return a.weight>b.weight;
        });

        DSU graph(mxnode);
        vl ans;
        for (auto &&i : v)
        {
            if(graph.join(i.from,i.to)==1){
                ans.pb(i.node);
            }    
        }
        cout<<sz(ans)<<endl;
        for (auto &&i : ans)
        {
            cout<<i<<' ';
        }
        cout<<endl;
    }
    return 0;
}
