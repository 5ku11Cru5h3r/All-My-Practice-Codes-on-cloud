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
bool visited[10][10];
vpll dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int main()
{
    memset(visited, 0, 100);
    fastt;
    ll n, m, k;
    cin >> n >> m >> k;
    vs v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    ll ans = 0;
    function<void(int, int, int)> a;
    a = [&](int i, int j, int kk)
    {
        if (k == kk)
        {
            ans++;
            return;
        }
        visited[i][j] = 1;
        for (auto &[di, dj] : dir)
        {
            ll ni = i + di;
            ll nj = j + dj;
            if (ni < n and ni >= 0 and nj < m and nj >= 0 and v[ni][nj] == '.' and !visited[ni][nj])
            {
                a(ni, nj, kk + 1);
            }
        }
        visited[i][j] = 0;
    };
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (v[i][j] == '.')
            {
                a(i, j, 0);
            }
        }
        
    }
    cout<<ans<<endl;
    return 0;
}