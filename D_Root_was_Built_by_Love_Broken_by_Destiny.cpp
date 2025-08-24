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
#define srt(x) sort(all(x))
#define jab_k(i, n, k) for (int i = 0; i < n; i += k)
#define jab(i, n) for (int i = 0; i < n; i++)
#define jab1(i, n) for (int i = 1; i < n; i++)

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

#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vpll vector<pair<ll, ll>>
#define pll pair<ll, ll>
#define plll pair<ll, pll>
#define vpsl vector<pair<string, ll>>
#define vpls vector<pair<ll, string>>
#define umll unordered_map<ll, ll>
#define umsll unordered_map<ll, unordered_set<ll>> // Storing Graphs
#define mset multiset<ll>
#define mcl map<char, ll>
#define pql priority_queue<ll>
#define minpql priority_queue<ll, vector<ll>, greater<ll>>

#define setbits(x) __builtin_popcountotalleafl(x)
#define zerobits(x) __builtin_ctzll(x)

#define toll(a) atoll(a.c_str())

#define toll(a) atoll(a.c_str())
string tostr(ll a)
{
    stringstream rr;
    rr << a;
    return rr.str();
}
ll pow(ll c, ll d) { return d == 0 ? 1 : c * pow(c, d - 1); }
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/

bool detectCycle(int src, vector<ll> v[], vector<bool> &visited, int parent)
{
    visited[src] = true;
    for (long long neighbor : v[src])
    {
        if (!visited[neighbor])
        {
            if (detectCycle(neighbor, v, visited, src))
            {
                return true;
            }
        }
        else if (neighbor != parent)
        {
            return true;
        }
    }
    return false;
}
int fact[long(2e5 + 5)];

int main()
{
    fastt;
    fact[0] = 1;
    for (int i = 1; i < 200005; i++)
    {
        fact[i] = (1LL * fact[i - 1] * i) % md;
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<ll> adj[n + 1];
        for (int i = 1; i <= m; i++)
        {
            int u, w;
            cin >> u >> w;
            adj[u].push_back(w);
            adj[w].push_back(u);
        }
        // Is leaf node
        // vector<bool> visited(n + 1, false);
        // int parent = -1; // No parent for the source node
        // if (detectCycle(1, v, visited, parent))
        // {
        //     cout << 0 << endl;
        //     continue;
        // }
        ll ans = 2;
        int totalleaf = 0;
        if (m >= n)
            ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size() > 1)
            {
                int leafCount = 0;
                for (int j : adj[i])
                {
                    leafCount += (adj[j].size() == 1);
                }
                if (leafCount >= (int)adj[i].size() - 2)
                    (ans *= fact[leafCount]) %= md;
                else
                    ans = 0;
            }
            else
                totalleaf++;
        }
        if(totalleaf<n-1) totalleaf=2;else totalleaf=1;
        cout<<(ans*totalleaf)%md<<endl;
    }
    return 0;
}
