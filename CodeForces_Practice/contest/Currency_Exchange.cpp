/*          OM SARASWATI NAMASTUBHYAM VARDE KAMRUPINI VIDHYARAMBHAM 
                    KARISHYAMI SIDDHIRBHAVATU MEIN SADA
*/
#include<bits/stdc++.h>
using namespace std;
#define  fastt       ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define  int         int
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
 
#define  vl         vector <int>
#define  vs         vector <string>
#define  vc         vector <char>
#define  vpll       vector < pair <int, int> >
#define  pll        pair <int, int>
#define  plll       pair <int, pll>
#define  vpsl       vector < pair <string, int> >
#define  vpls       vector < pair <int, string> >
#define  umll	     unordered_map<int,int>
#define  umsll	     unordered_map<int,unordered_set<int>> //Storing Graphs
#define  mset       multiset<int>
#define  mcl	    map<char,int>
#define  pql        priority_queue<int>
#define  minpql     priority_queue<int,vector<int>,greater<int> >
 
#define  setbits(x)     __builtin_popcountll(x)
#define  zerobits(x)    __builtin_ctzll(x)
 
#define toll(a) atoll(a.c_str())


#define toll(a) atoll(a.c_str())
string tostr(int a) {stringstream rr;rr<<a;return rr.str();}
int pow(int c,int d){return d==0?1:c*pow(c,d-1);}
int gcd(int a,int b) {return b==0? a:gcd(b,a%b);}
int lcm(int a,int b) {return ((a*b)/gcd(a,b));}
 
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
struct State {
    int g, s;
};

bool canReach(int a,int b,int aa,int bb){
    int dx = aa - a;
    int dy = bb - b;

    int num = -dy - 5*dx;
    if(num % 6 != 0) return 0;

    int z = num / 6;
    if(z < 0) return 0;
    int min_x = max(0, -dx - z);
    if(b + 5*min_x < 5*min_x) return 0;

    return true;
}

int main() {
   fastt;

    int t=1;
    cin >> t;
    while(t--){
        int a,b,aa,bb;
        cin >> a >> b >> aa >> bb;
        cout << (canReach(a,b,aa,bb) ?"Yes":"No")<< endl;
    }
    return 0;
}