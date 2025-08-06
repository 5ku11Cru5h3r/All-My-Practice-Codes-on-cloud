/*          OM SARASWATI NAMASTUBHYAM VARDE KAMRUPINI VIDHYARAMBHAM 
                    KARISHYAMI SIDDHIRBHAVATU MEIN SADA
*/
#include <bits/stdc++.h>
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
 
#define  setbits(x)     __builtin_popcountll(x)
#define  zerobits(x)    __builtin_ctzll(x)
 
#define toll(a) atoll(a.c_str())
 
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/

struct cell {
    int x, y, dis;
    cell() : x(0), y(0), dis(0) {} 
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};

bool isInside(int x, int y, int n, int m, vector<vl> &v) {
    return (x >= 0 && x < n && y >= 0 && y < m && v[x][y] == 0);
}

int minSteps(int knightPos[], int targetPos[], int n, int m, pair<int,int> mv, vector<vl> &v) {
    auto &[a,b] = mv;
    ll dx[] = {a,-a,b,-b};
    ll dy[] = {b,-b,-a,a};

    queue<cell> q;
    q.push(cell(knightPos[0], knightPos[1], 0));

    vector<vector<bool>> visit(n, vector<bool>(m, false));
    visit[knightPos[0]][knightPos[1]] = true;

    while (!q.empty()) {
        auto t = q.front(); q.pop();

        if (t.x == targetPos[0] && t.y == targetPos[1])
            return t.dis;

        for (int i = 0; i < 4; i++) {
            int x = t.x + dx[i];
            int y = t.y + dy[i];

            if (isInside(x, y, n, m, v) && !visit[x][y]) {
                visit[x][y] = true;
                q.push(cell(x, y, t.dis + 1));
            }
        }
    }
    return -1;
}

int main()
{
    fastt;
    int t=1;
    // cin >> t;
    while(t--){
        int n,m;
        cin >> n>>m;
        
        // Input vector
        vector<vl> v(n,vl(m));
        for (auto &i: v) 
            for (auto &&j : i)
                cin>>j;
        // Source,des,move rule
        int src[2];
        int des[2];
        pair<int,int> mv;
        cin>>src[0]>>src[1];
        cin>>des[0]>>des[1];
        cin>>mv.first>>mv.second;
        // deb(src);
        // for (auto &&i : v)
        // {
        //     cout<<i<<endl;
        // }
        cout<<minSteps(src,des,n,m,mv,v)<<endl;
    }
    return 0;
}