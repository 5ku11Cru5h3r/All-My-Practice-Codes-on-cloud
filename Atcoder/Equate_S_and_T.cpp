#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
#define pn cout << "NO\n";
#define py cout << "YES\n";
#define deb(x) cout << #x << "=" << x << endl;
string processString(const string &sathyam) {
    string reduced;
    for (char c : sathyam) {
        reduced += c;
        if (reduced.size() >= 2 && reduced[reduced.size() - 2] == 'a' && reduced[reduced.size() - 1] == 'b') {
            reduced.pop_back();
        }
    }
    return reduced;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    string sathyam1, sathyam2;
    cin >> sathyam1 >> sathyam2;

    string a = processString(sathyam1);
    string b = processString(sathyam2);
    deb(a);
    deb(b);
    if (a.size() != b.size()) {
        pn;
        return;
    }
    
    for (int i = 0; i < min(a.size(), b.size()); i++) {
        if (a[i] != b[i]) {
            pn;
            return;
        }
    }

    py;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}