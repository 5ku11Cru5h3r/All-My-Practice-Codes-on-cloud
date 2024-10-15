/*          OM SARASWATI NAMASTUBHYAM VARDE KAMRUPINI VIDHYARAMBHAM
                    KARISHYAMI SIDDHIRBHAVATU MEIN SADA
*/
#include <bits/stdc++.h>
using namespace std;
#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define inf 1000000000000000000
#define pb push_back
#define mp make_pair
#define sz(a) a.size()
#define mem(a, b) memset(a, b, sizeof(a))
#define clr(x) x.clear()
#define fff first
#define sss second
#define case(x) cout << "Case " << x << ": "
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

#define md 1000000007
#define pi acos(-1.0)
#define cos(a) cos(a *pi / 180)
#define sin(a) sin(a *pi / 180)
#define tan(a) tan(a *pi / 180)
#define cosi(a) acos(a) / (pi / 180)
#define sini(a) asin(a) / (pi / 180)
#define tani(a) atan(a) / (pi / 180)

#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vpll vector<pair<ll, ll>>
#define vpsl vector<pair<string, ll>>
#define vpls vector<pair<ll, string>>
#define mll map<ll, ll>
#define mset multiset<ll>
#define mcl map<char, ll>
#define pql priority_queue<ll>
#define minpql priority_queue<ll, vector<ll>, greater<ll>>

#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)

#define toll(a) atoll(a.c_str())

#define toll(a) atoll(a.c_str())
string tostr(ll a)
{
    stringstream rr;
    rr << a;
    return rr.str();
}
ll pow(ll c, ll d) { return d == 0 ?: c * pow(c, d - 1); }
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/

class Solution {
public:
    int minGroups(vector<vector<int>>& v) {
        vector<pair<int,int>> v_new;
        for (auto i: v){
            v_new.push_back(make_pair(i[0],1));
            v_new.push_back(make_pair(i[1]+1,-1));
        }
        sort(v_new.begin(),v_new.end());
        vector<int> c={0};
        for(auto i: v_new){
            c.push_back(c.back()+i.second);
        }
        // priority_queue<pair<int,int>> pq;
        // for 
        return *max_element(c.begin(),c.end());
    }
};

int main()
{
    fastt;
        int n;
        cin >> n;
        vvi v(n);
        for (auto &i : v)
        {
            int x,y;
            cin>>x>>y;
            i.push_back(x);
            i.push_back(y);
        }
        Solution a;
        cout<<a.minGroups(v)<<endl;
    return 0;
}